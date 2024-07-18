#include <stdlib.h>
#include <stdio.h>

int lent(long n)
{
    int count = 0;

    if (n < 0)
    {
        n *= -1;
        count++;
    }
    while (n > 0)
    {
        n /= 10;
        count++;
    }
    return (count);
}


char	*ft_itoa(int nbr)
{
    long n = nbr;
    int i = lent(n);
    char* p;
    
    p =(char *)malloc(i + 1);
    if (!p)
    {
        return (0);
    }
    p[i--] = '\0';
    if (n == 0)
    {
        p[0] = '0';
        return (p);
    }
    if (n == -2147483648)
    {
        p[0] = '-';
        p[1] = '2';
        n = 147483648;
    }
    if (n < 0)
    {
        p[0] = '-';
        n = n * -1;
    }
    while (n > 0)
    {
        p[i] = 48 + (n % 10);
        n = n / 10;
        i--;
    }
    return (p);
}

int main ()
{
    printf("%s\n", ft_itoa(1342345));
    printf("%s\n",ft_itoa(-4353534));
    printf("%s\n",ft_itoa(4353534));
    printf("%s\n",ft_itoa(2147483647));
    printf("%s\n",ft_itoa(-2147483648));

}