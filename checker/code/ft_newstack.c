#include "../lib/checker.h"

t_stack *ft_node(t_stack **a, t_stack **b, int n)
{
    t_stack *node;
    t_stack *ptr;

    ptr = *a;
    if (n < -2147483648 || n > 2147483647)
        ft_error(a,b);
    while (ptr)
    {
        if (ptr->num == n)
            ft_error(a,b);
        ptr = ptr->next;
    }
    node = (t_stack *)malloc(sizeof(t_stack));
    node->num = n;
    node->next = NULL;
    return (node);
}

void ft_append(t_stack **alst, t_stack *node)
{
    t_stack *lst;

    lst = *alst;
    if (*alst == NULL)
    {
        *alst = node;
        return;
    }
    else
    {
        while (lst->next)
            lst = lst->next;
    }
    lst->next = node;
}