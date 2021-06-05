#include "push_swap.h"
void	ft_sort_integer_table(int *tab, int size)
{
	int *end;
	int *inner_head;
	int *next_int;
	int temp;

	end = tab + size - 1;
	while (tab < end)
	{
		inner_head = tab;
		while (inner_head < end)
		{
			next_int = inner_head + 1;
			if (*inner_head > *next_int)
			{
				temp = *inner_head;
				*inner_head = *next_int;
				*next_int = temp;
			}
			inner_head++;
		}
		end--;
	}
}
void fill_a(t_stack *s, int argc, char **argv)
{
    int i;
    int j;
    int tmp;

    j = 0;
    i = 0;
    while (i < argc - 1)
    {
        s->stack_a[i] = ft_atoi(argv[argc - i - 1]);
        s->tab[i] = s->stack_a[i];
        i++;
    }
    i = 0;
    while (i < argc - 1)
    {
        j = i + 1;
        while (j < argc - 1)
        {
            if (s->tab[i] > s->tab[j])
            {
                tmp = s->tab[i];
                s->tab[i] = s->tab[j];
                s->tab[j] = tmp;
            }
                j++;
        }
        i++;
    }
}
void print_stack(int *stack, int len)
{   
    int i;

    i = 0;
    while (i < len)
    {
        printf("%d",stack[len - i - 1]);
        i++;
    }
}
int main(int argc,char **argv)
{
    t_stack s;
    
    ft_error(argc,argv);
    s.top_a = argc - 2;
    s.tab_len = argc - 1;
    s.stack_a = malloc((argc - 1) * sizeof(int));
    s.stack_b = malloc((argc - 1) * sizeof(int));
    s.tab = malloc((argc - 1) * sizeof(int));
    s.top_b = -1;
    fill_a(&s,argc,argv);
    sort_five(&s);
    //sort_three(&s);
    //print_stack(s.stack_b,s.top_b + 1);
    // ra(&s);
    // pb(&s);
    // ra(&s);
    //printf("%d",s.stack_a[s.top_a]);
    print_stack(s.stack_a,s.top_a + 1);
    return (0);
}