#include <string.h>

void   *ft_memset(void *b, int c, size_t len)
{
      int i = 0;

      char *word = b;
      
      while(len > 0)
      {
        *word = c;
        word++;
        len--;
      }
      return (b);
}
