#include <stdio.h>

int	ft_atoi(const char *str)
{
    int i = 0;
    int d = 0;
    int f = 0;
    int r = 0;

    while((str[i] == ' '  || (str[i] >= '\t' && str[i] <= '\r')) && str[i])
    {
        i++;
    }
    while((str[i] == '-' || str[i] == '+') && str[i])
    {
        if (str[i] == '-')
        {
            d += 1;
        }
        i++;
    }

    while(str[i])
    {
        f = 0;
        if (str[i] >= '0' && str[i] <= '9')
        {
            r = r * 10 + (str[i] - 48);
            f = 1;
        }
        if (f == 0)
        {
            break;
        }
        i++;
    }

    if (d > 1)
    {
        return (0);
    }
    if (d == 1)
    {
        return (-r);
    }
    else
        return (r);
}

int main ()
{
    char array[] = "  \r -2a14s7 48 364 7";
    printf("%d",ft_atoi(array));
}