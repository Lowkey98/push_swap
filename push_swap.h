#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct stack
{
    int *stack_a;
    int *stack_b;
    int *tab;
    int top_a;
    int top_b;
    int tab_len;
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
void sort_three(t_stack *s);
void sort_five(t_stack *s);
int ft_is_digit(char c);
void    ft_error(int argc, char **argv);
int ft_is_digit(char c);
int	ft_strcmp(char *s1, char *s2);
int ft_strlen(char *str);
#endif