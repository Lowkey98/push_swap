#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	*tab;
	int	top_a;
	int	top_b;
	int	tab_len;
}		t_stack;
void	rrr(t_stack *s);
void	ss(t_stack *s);
int		is_sorted(int	*tab, int len);
void	push_in_b(t_stack *s, int start, int end);
void	push_in_a(t_stack *s);
int		ft_atoi(const char *str);
void	sort_four(t_stack *s, int i);
void	sa(t_stack *s);
void	ra(t_stack *s);
void	rb(t_stack *s);
void	sb(t_stack *s);
void	rra(t_stack *s);
void	rrb(t_stack *s);
void	pa(t_stack *s);
int		pb(t_stack *s);
void	sort_three(t_stack *s);
void	sort_five(t_stack *s, int i);
int		ft_is_digit(char c);
void	ft_error(int argc, char **argv);
int		ft_is_digit(char c);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
#endif