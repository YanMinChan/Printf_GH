#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

typedef	struct	s_width
{
	int	exist;
	int	value;
}				t_width;

typedef struct	s_prec
{
	int	exist;
	int	value;
}				t_prec;

typedef struct	s_flags
{
	t_width	width;
	t_prec	prec;
	int	minus;
	int	zero;
	int	hash;
	int	space;
	int	plus;
}				t_flags;

t_flags		ft_flag_reset(void);
int			ft_printf(const char *format, ...);
int			ft_parse(const char *format, va_list arg);
int			ft_parse_value(const char *format, t_flags *flags, char flag);

int			ft_write_hex(long long n, t_flags *flags, char type);

#endif
