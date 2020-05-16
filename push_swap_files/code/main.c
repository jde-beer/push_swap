#include "../lib/pushswap.h"

int	ft_accending(int a, int b)
{
	if (a > b)
		return (1);
	return (0);
}

int	ft_deccending(int a, int b)
{
	if (a < b)
		return (1);
	return (0);
}

void ft_isok(t_stack **a, t_stack **b, char *str)
{
	t_stack *new;
	char **ar;
	char *tst;
	int i;
	int num;

	i = 0;
	ar = ft_strsplit(str, ' ');
	while (ar[i] != NULL)
	{
		num = ft_atoi(ar[i]);
		tst = ft_itoa(num);
		if ((!ft_strequ(tst, ar[i]) && !ft_strequ(ar[i], "-0")) || (new = ft_node(a,b,ft_atoi(ar[i]))) == NULL)
		{
			ft_free_arr(ar);
			ft_strdel(&tst);
			ft_error(a, b);
		}
		ft_strdel(&tst);
		ft_append(a, new);
		i++;
	}
	ft_free_arr(ar);
}

int	ft_find_m(t_stack *stack, int f(int a, int b))
{
	int		m_value;
	int		m_place;
	int		p;
	t_stack	*ptr;

	m_place = 0;
	p = 0;
	ptr = stack;
	m_value = ptr->num;
	while (ptr->next)
	{
		ptr = ptr->next;
		p++;
		if (f(m_value, ptr->num))
		{
			m_place = p;
			m_value = ptr->num;
		}
	}
	return (m_place);
}

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	int i;

	if (ac >= 2)
	{
		a = NULL;
		b = NULL;
		i = 1;
		while (i < ac)
		{
			ft_isok(&a, &b, av[i]);
			i++;
		}
		ac = ft_number_length(a);
		if (ft_checker(a, &ft_accending))
		{
			if (ac <= 20)
				ft_sortssmal(&a, &b, ft_accending, 'a');
			else
				ft_sort(&a, &b);
		}
		ft_clearlist(&a);
		ft_clearlist(&b);
	}
	return (0);
}