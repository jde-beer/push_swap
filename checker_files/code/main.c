#include "../lib/checker.h"

void ft_checker(t_stack *a, t_stack *b)
{
	t_stack *ptr;

	if (b != NULL)
	{
		ft_putendl("KO");
		return;
	}
	ptr = a;
	while (ptr->next)
	{
		if (ptr->num > ptr->next->num)
		{
			ft_putendl("KO");
			return;
		}
		ptr = ptr->next;
	}
	ft_putendl("OK");
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
		if (!ft_strequ(tst, ar[i]) || (new = ft_node(a,b,ft_atoi(ar[i]))) == NULL)
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

int main(int ac, char **av)
{
	t_stack *a;
	t_stack *b;
	t_stack *new;
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
		if (!a || !a->next)
			exit(0);
		ft_doargs(&a, &b);
		ft_clearlist(&a);
		ft_clearlist(&b);
	}
	return (0);
}
