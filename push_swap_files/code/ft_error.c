#include "../lib/pushswap.h"

void	ft_error(t_stack **a, t_stack **b)
{
	ft_clearlist(a);
	ft_clearlist(b);
	write(2, "Error\n", 6);
	exit(0);
}
