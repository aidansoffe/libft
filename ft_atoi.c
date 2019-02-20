#include <stdlib.h>
#include <stdio.h>


static int ft_isdigit(int c)
{
    return(c >= '0' && c <= '9');
}

static int ft_isspace(int c)
{
    return(c == ' ' || c == '\t' || c == '\n' || c == '\f' || c == '\v' || c == '\r');
}

int    ft_atoi(const char *str)
{
    int i;
    int res;
    int sign;

    i = 0;
    res = 0;
    sign = 1;
    
    while(ft_isspace(str[i]))
        i++;
        
    if(str[i] != '-' && str[i] != '+' && ft_isdigit(str[i]) == 0)
        return (0);

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while(ft_isdigit(str[i]) == 1)
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res *sign);
}

int main() 
{ 
    char str[] = "-r15t2"; 
    int val = ft_atoi(str); 
    printf ("%d ", val); 
    return 0; 
}