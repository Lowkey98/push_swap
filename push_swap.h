#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct stack
{
    int *stack_a;
    int *stack_b;
    int top_a;
    int top_b;
} t_stack;
int	ft_atoi(const char *str);
void sa(t_stack * s);
void ra(t_stack *s);
void rb(t_stack *s);
void sb(t_stack * s);
void rra(t_stack *s);
void rrb(t_stack *s);
void pa(t_stack *s);
void pb(t_stack *s);
#endif