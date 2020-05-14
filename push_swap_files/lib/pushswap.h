
#ifndef PUSHSWAP_H
#define PUSHSWAP_H
#include "../../libft/libft.h"

typedef struct		s_stack
{
	int	num;
	int	n;
	struct s_stack *next;
}					t_stack;

void	ft_clearlist(t_stack **a);
void 	ft_swap(t_stack **a, char jp);
void	ft_error(t_stack **a, t_stack **b);
t_stack *ft_node(t_stack **a, t_stack **b, int n);
void 	ft_rotate(t_stack **src, char jp);
void 	ft_rev_rotate(t_stack **src, char jp);
void 	ft_push(t_stack **src, t_stack **dest, char jp);
int		ft_accending(int a, int b);
int		ft_deccending(int a, int b);
void	ft_append(t_stack **alst, t_stack *node);
void 	ft_sort(t_stack **a, t_stack **b);
void 	ft_push_m(t_stack **a, t_stack **b, int f(int a, int b), char jp);
void	ft_order(t_stack **a);
int		ft_number_length(t_stack *ptr);
int		ft_checker(t_stack *a, int f(int a, int b));
int		ft_find_m(t_stack *stack, int f(int a, int b));
void	ft_sortsmall(t_stack **a, int f(int a, int b), char jp);
void	ft_sortssmal(t_stack **a, t_stack **b, int f(int a, int b), char jp);


#endif