#include "../lib/pushswap.h"

void	ft_clearlist(t_stack **a)
{
	t_stack *next;
	t_stack *pointer;

	next = *a;
	while (next)
	{
		pointer = next;
		next = next->next;
		free(pointer);
	}
	a = NULL;
}
