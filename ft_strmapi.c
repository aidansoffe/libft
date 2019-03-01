#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str_res;

	if (!s || !f)
		return (NULL);
	str_res = ft_strnew(ft_strlen(s));
	if (!str_res)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_res[i] = (*f)(i, s[i]);
		i++;
	}
	return (str_res);
}
