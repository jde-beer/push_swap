#ifndef CHECKER_H
#define CHECKER_H
#include "../../libft/libft.h"

typedef struct	sort_stack
{
				int num;
				struct sort_stack *next;
}				t_stack;

void			ft_print(t_stack *a, t_stack *b);
void			ft_error(t_stack **a, t_stack **b);
void			ft_clearlist(t_stack **a);
void			ft_swaps(t_stack **a);
void			ft_rotate(t_stack **src);
void			ft_rev_rotate(t_stack **src);
void			ft_checkoperations(char *str, t_stack **a, t_stack **b);
void			ft_append(t_stack **alst, t_stack *node);
void			ft_push(t_stack **src, t_stack **dest);
void			ft_doargs(t_stack **a, t_stack **b);
void			ft_checker(t_stack *a, t_stack *b);
t_stack			*ft_node(t_stack **a, t_stack **b, int n);

#endif
