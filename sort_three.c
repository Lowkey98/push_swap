#include "push_swap.h"
void	sort_four(t_stack *s, int i)
{
	while (i <= s->top_a)
	{
		if (s->tab[0] == s->stack_a[i])
		{
			if (i < s->top_a / 2)
				while (s->tab[0] != s->stack_a[s->top_a])
					rra(s);
			else
				while (s->tab[0] != s->stack_a[s->top_a])
					ra(s);
			pb(s);
			i = 0;
			continue ;
		}
		i++;
	}
	sort_three(s);
	pa(s);
	if (s->stack_a[s->top_a] > s->stack_a[s->top_a - 1])
		sa(s);
}

void	sort_five(t_stack *s, int i)
{
	while (i <= s->top_a)
	{
		if ((s->tab[0] == s->stack_a[i]) || (s->tab[1] == s->stack_a[i]))
		{
			if (i < s->top_a / 2)
				while (s->tab[0] != s->stack_a[s->top_a] \
				&& (s->tab[1] != s->stack_a[s->top_a]))
					rra(s);
			else
				while (s->tab[0] != s->stack_a[s->top_a] \
				&& (s->tab[1] != s->stack_a[s->top_a]))
					ra(s);
			pb(s);
			i = -1;
		}
		i++;
	}
	sort_three(s);
	pa(s);
	pa(s);
	if (s->stack_a[s->top_a] > s-> stack_a[s->top_a - 1])
		sa(s);
}

void	sort_three(t_stack *s)
{
	if ((s->stack_a[2] > s ->stack_a[1]) && (s->stack_a[2] > s->stack_a[0]))
		ra(s);
	if ((s->stack_a[1] > s->stack_a[2]) && (s->stack_a[1] > s->stack_a[0]))
		rra(s);
	if (s->stack_a[1] < s->stack_a[2])
		sa(s);
}
