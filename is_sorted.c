#include "push_swap.h"

int	is_sorted(int *tab, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (tab[i] < tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}
