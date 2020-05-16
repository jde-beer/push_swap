#include "../lib/checker.h"

void ft_checkoperations(char *str, t_stack **a, t_stack **b)
{
	if (ft_strequ(str, "sa") || ft_strequ(str, "ss"))
		ft_swaps(a);
	else if (ft_strequ(str, "sb") || ft_strequ(str, "ss"))
		ft_swaps(b);
	else if (ft_strequ(str, "pa"))
		ft_push(b, a);
	else if (ft_strequ(str, "pb"))
		ft_push(a, b);
	else if (ft_strequ(str, "ra") || ft_strequ(str, "rr"))
		ft_rotate(a);
	else if (ft_strequ(str, "rb") || ft_strequ(str, "rr"))
		ft_rotate(b);
	else if (ft_strequ(str, "rra") || ft_strequ(str, "rrr"))
		ft_rev_rotate(a);
	else if (ft_strequ(str, "rrb") || ft_strequ(str, "rrr"))
		ft_rev_rotate(b);
	else
		ft_error(a, b);
}

void ft_doargs(t_stack **a, t_stack **b)
{
	char *str;

	while (get_next_line(0, &str) > 0)
	{
		ft_checkoperations(str, a, b);
		ft_strdel(&str);
		//ft_print(*a, *b);
	}
	ft_checker(*a, *b);
}
