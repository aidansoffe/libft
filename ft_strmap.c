#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*str_new;

	if (!s || !f)
		return (NULL);
	str_new = ft_strnew(ft_strlen(s));
	if (!str_new)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str_new[i] = (*f)(s[i]);
i		i++;
	}
	return (str_new);
}
