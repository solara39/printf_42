#include "ft_printf.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

char	*ft_toupper_str(char *c)
{
	int	i;
	i = 0;
	while (c[i])
	{
		c[i] = ft_toupper(c[i]);
		i++;
	}
	return (c);
}
