#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int h;

	if (s && f)
	{
		h = 0;
		while (s[h])
		{
			(*f)(h, &s[h]);
			h++;
		}
	}
}
