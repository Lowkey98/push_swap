#include "push_swap.h"
int *fill_a(int argc,char **argv)
{
    int i;
    int *stack;

    i = 0;
    stack = malloc((argc - 1) * sizeof(int));
    while (i < argc - 1)
    {
        stack[i] = ft_atoi(argv[argc - i - 1]);
        i++;
    }
    return (stack);
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
    
    s.top_a = argc - 2;
    s.stack_a = fill_a(argc,argv);
    s.stack_b = malloc((argc - 1) * sizeof(int));
    s.top_b = -1;
    sort_three(&s);
    //print_stack(s.stack_b,s.top_b + 1);
    print_stack(s.stack_a,s.top_a + 1);
    return (0);
}