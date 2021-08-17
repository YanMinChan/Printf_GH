#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft.h"

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

#endif