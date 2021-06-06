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
        printf("------------\n");

    while (i < len)
    {
        printf("%d\n",stack[len - i - 1]);
       
        i++;

    }
        printf("------------\n");
    
}
void push_in_b(t_stack *s, int start, int end)
{
    int j;
    int i;

    i = start;
    j = 0;
    while (j < s->top_a)
    {
        while (i < end)
        {
            if (s->stack_a[s->top_a - j] == s->tab[i])
            {
                if (j < (s->top_a / 2))
                    while (s->tab[i] != s->stack_a[s->top_a])
                        ra(s);
                else
                    while (s->tab[i] != s->stack_a[s->top_a])
                        rra(s);
                pb(s);
                j = 0;
            }
            i++;
        }
        i = start;
        j++;
    }
    i = start;
   
    printf("\n");
    
}
int indexof(int x, int *tab)
{

}
void sort_a(t_stack *s)
{
    int i;
    int divider;
    int index;
    i = 0;
    divider = 4;

    while ((i + 1) * divider < s->tab_len)
    {
        push_in_b(s,i * divider,(divider * i) + divider);
        i++;
    }
    while(pb(s));
    i = 0;
    while (i < s->tab_len)
    {
        index = indexof(s->tab[s->tab_len - i - 1], s->stack_b);
        if (index < s->top_b < 2)
            while (s->stack_b[s->top_b] != s->stack_b[])
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
    //sort_five(&s);
    sort_a(&s);
    //sort_three(&s);
    print_stack(s.stack_b,s.top_b + 1);
    // ra(&s);
    // pb(&s);
    // ra(&s);
    //printf("%d",s.stack_a[s.top_a]);
    
    //print_stack(s.stack_a,s.top_a + 1);
    return (0);
}