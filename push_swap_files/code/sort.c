#include "../lib/pushswap.h"

void	ft_order(t_stack **a)
{
	t_stack		*slow;
	t_stack		*fast;
	int			norm;

	slow = *a;
	while (slow)
	{
		norm = ft_number_length(*a);
		slow->n = norm;
		fast = *a;
		while (fast)
		{
			if (slow->num < fast->num)
				slow->n--;
			fast = fast->next;
		}
		slow = slow->next;
	}
}

void ft_push_m(t_stack **a, t_stack **b, int f(int a, int b), char jp)
{
	int m_place;
	int size;

	m_place = 1;
	size = ft_number_length(*a);
    m_place = ft_find_m(*a, f);
	if (m_place <= size / 2)
		while (m_place > 0)
        {
			ft_rotate(a, jp);
            m_place--;
        }
	else
		while (m_place < size)
        {
			ft_rev_rotate(a, jp);
            m_place++;
        }
	ft_push(a, b, jp);
}

void	ft_sortsmall(t_stack **a, int f(int a, int b), char jp)
{
	t_stack *src;

	src = *a;
	if ((*a)->next != NULL)
		if (f(src->num, src->next->num))
		ft_swap(a, jp);
	if ((*a)->next->next != NULL)
	{
		if	(ft_checker(*a, f))
			ft_rev_rotate(a, jp);
		if (ft_checker(*a, f))
			ft_swap(a, jp);
	}
}

void	ft_sortssmal(t_stack **a, t_stack **b, int f(int a, int b), char jp)
{
	int		temp;
	t_stack	*last;
	int		i;

	temp = ft_number_length(*a) - 3;
	i = 0;
	while (i < temp)
	{
		ft_push_m(a, b, f, jp);
		i++;
	}
	ft_sortsmall(a, f, jp);
	last = *a;
	while (i-- > 0 && jp == 'a')
		ft_push(b, a, jp + 1);
}

void ft_sort(t_stack **a, t_stack **b)
{
	int maxR;
	int i;

	maxR = 0;
	i = 1;
	ft_order(a);
	while (*a)
	{
		maxR += 40;
		while (i < maxR)
		{
			if (!*a)
				break;
			if ((*a)->n <= maxR)
			{
				ft_push(a, b, 'a');
                i++;
			}
			else
				ft_rotate(a, 'a');
		}
	}
	while (*b)
		ft_push_m(b, a, ft_deccending, 'b');
}
