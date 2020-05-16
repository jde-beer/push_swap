#include "../lib/pushswap.h"

void ft_swap(t_stack **a, char jp)
{
    t_stack *tmp;

    if (*a && (*a)->next)
    {
        tmp = *a;
        (*a) = (*a)->next;
        tmp->next = (*a)->next;
        (*a)->next = tmp;
    }
    if (jp == 'a')
		ft_putendl("sa");
	else
		ft_putendl("sb");
}

void ft_rotate(t_stack **src, char jp)
{
    t_stack *tmp;
    t_stack *ptr;

    if (!(*src) || !(*src)->next)
        return;
    if (jp == 'a')
		ft_putendl("ra");
	else
		ft_putendl("rb");
    tmp = *src;
    *src = (*src)->next;
    ptr = *src;
    while (ptr->next != NULL)
        ptr = ptr->next;
    ptr->next = tmp;
    ptr->next->next = NULL;
}

void ft_rev_rotate(t_stack **src, char jp)
{
    t_stack *tmp;
    t_stack *ptr;

    if (!(*src) || !(*src)->next)
        return;
    if (jp == 'a')
		ft_putendl("rra");
	else
		ft_putendl("rrb");
    ptr = *src;
    while (ptr->next->next != NULL)
        ptr = ptr->next;
    tmp = ptr->next;
    ptr->next = NULL;
    tmp->next = *src;
    *src = tmp;
}

void ft_push(t_stack **src, t_stack **dest, char jp)
{
    t_stack *tmp;

    if (*src)
	{
		tmp = *src;
		*src = (*src)->next;
		tmp->next = *dest;
		*dest = tmp;
	}
	if (jp == 'a')
		ft_putendl("pb");
	else
		ft_putendl("pa");
}

int	ft_checker(t_stack *a, int f(int a, int b))
{
	t_stack *ptr;

	ptr = a;
	while (ptr->next)
	{
		if (f(ptr->num, ptr->next->num))
		{
			return (1);
		}
		ptr = ptr->next;
	}
	return (0);
}

int	ft_number_length(t_stack *ptr)
{
	int	size;

	size = 1;
	if (ptr != NULL)
	{
		while ((ptr = ptr->next) !=  NULL)
			size++;
	}
	else
		return (0);
	return (size);
}