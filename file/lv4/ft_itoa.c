#include <stdlib.h>
#include <stdio.h>

int lent(int nbr)
{
    int len = 0;

    if (nbr < 0)
    {
        nbr *= -1;
        len++;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}


char	*ft_itoa(int nbr)
{
    long n;
    int i;
    char* str;

    i = lent(nbr);
    n = nbr;
    
    if (!(str =(char *)malloc(i + 1)))
    {
        return (0); 
    }
    str[i--] = '\0';
    if (n == 0)
    {
        str[0] = '0';
        return (str);
    }
    if (n < 0)
    {
        str[0] = '-';
        n *= -1;
    }
    while (n > 0)
    {
        str[i] = '0' + (n % 10);
        n /= 10;
        i--;
    }
    return (str);
}
int	main(void)
{
	printf("%s\n", ft_itoa(2147483647));
}