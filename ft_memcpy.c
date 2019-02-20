
#include <string.h>

void  *ft_memcpy(char *dst, const char *src, size_t n)
{ 

    int i = 0;
    
    while(i < n && i >= 0)
    {  
        dst[i] = src[i];
        i++;

    }
    return (dst);
}
