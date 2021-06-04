#include "push_swap.h"
void sort_five(t_stack *s)
{
    
}
void sort_three(t_stack *s)
{
    if ((s->stack_a[2] > s ->stack_a[1]) && (s->stack_a[2] > s->stack_a[0]) )
        ra(s);
    if ((s->stack_a[1] > s->stack_a[2]) && (s->stack_a[1]>s->stack_a[0]))
        rra(s);
    if (s->stack_a[1] < s->stack_a[2])
        sa(s);
}