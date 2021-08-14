#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include	<unistd.h>
# include	<stdlib.h>
# include	<stddef.h>
# include	<stdarg.h>

char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_utoa(unsigned int u);
int		_s_verifier(char *string);
int		_c_verifier(int c);
int		_di_verifier(int d);
int		_u_verifier(unsigned int u);
int		ft_printf(const char *string, ...);
#endif
