#include "push_swap.h"
int	indexof(int x, int *tab)
{
	int	i;

	i = 0;
	while (tab[i] != x)
		i++;
	return (i);
}

void	push_in_a(t_stack *s)
{
	int	i;
	int	index;

	i = 0;
	while (i < s->tab_len)
	{
		index = indexof(s->tab[s->tab_len - i - 1], s->stack_b);
		if (index < s->top_b / 2)
			while (s->stack_b[s->top_b] != s->tab[s->tab_len - i - 1])
				rrb(s);
		else
			while (s->stack_b[s->top_b] != s->tab[s->tab_len - i - 1])
				rb(s);
		pa(s);
		i++;
	}
}
