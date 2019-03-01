#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	char	*pnew;

	if (!s)
		return (NULL);
	new_str = ft_strnew(len);
	if (!new_str)
		return (NULL);
	pnew = new_str;
	while (s[start] && len--)
		*pnew++ = s[start++];
	*pnew = '\0';
	return (new_str);
}

