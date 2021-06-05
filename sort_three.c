#include "push_swap.h"

void sort_five(t_stack *s)
{
    int i;
    int j;

    i = 0;
    j = s->top_a;
    while (i <= j)
    {
        if ((s->tab[0] == s->stack_a[i]) || (s->tab[1] == s->stack_a[i]))
        {
            while (s->tab[0] != s->stack_a[s->top_a] && (s->tab[1] != s->stack_a[s->top_a]))
                ra(s);
            pb(s);
            j = s->top_a;
            i = 0;
            continue;
        }
        if ((s->tab[0] == s->stack_a[j]) || (s->tab[1] == s->stack_a[j]))
        {
            while ((s->tab[0] != s->stack_a[s->top_a]) && (s->tab[1] != s->stack_a[s->top_a]))
                rra(s);
            pb(s);
            j = s->top_a;
            i = 0;
            continue;
        }
        i++;
        j--;
    }
    sort_three(s);
    pa(s);
    pa(s);
    if (s->stack_a[s->top_a] > s-> stack_a[s->top_a - 1])
        sa(s);
    
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