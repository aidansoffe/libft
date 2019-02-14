#include <string.h>

int ft_strcmp(const char *s1, const char *s2)
{
    int i = 0;
    while(*s1 != '\0' && *s2 != '\0' || *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}