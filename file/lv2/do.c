
#include <unistd.h>
#include <stdio.h>

int len(char* base)
{
    int i = 0;

    while (base[i])
    {
        i++;
    }
    return (i);
}

int checkbase(char* str)
{
    if (len(str) < 2)
    {
        return (0);
    }
    int i = 0;
    int j = 0;
    while (str[i])
    {
        if(str[i] == '-' || str[i] == '+')
        {
            return (0);
        }
        if (str[i] == ' ' || ((str[i] >= '\t' && str[i] <= '\r')))
        {
            return (0);
        }
        i++;
    }
    i = 0;
    while (str[i])
    {
        j = i + 1;
        while (str[j])
        {
            if (str[i] == str[j])
            {
                return (0);
            }
            j++;
        }
        i++;
    }
    return (1);
}

void print(char *s, int i)
{
    while (i >= 0)
    {
        write(1,  &s[i], 1);
        i--;
    }
}


void    ft_putnbr_base(int nbr, char *base)
{
    long n = nbr;
    char x[255];
    int i = 0;

     
    if (checkbase(base) == 0)
    {
        return;
    }
    if (n == 0)
    {
        write(1, &base[0], 1);
        return;
    }
    if (n < 0)
    {
        write(1, "-", 1);
        n *= -1;
    }
    while (n > 0)
    {
        x[i] = base[n % len(base)];
        n /= len(base);
        i++;
    }
    print(x,i);
}


int main()

{

    ft_putnbr_base(123, "01");  // prints "123" in decimal

    write(1, "\n", 1);

    ft_putnbr_base(123, "ABCDEF");  // prints "54" in base 16

    write(1, "\n", 1);

    ft_putnbr_base(123, "0123456789ABCDEF");  // prints "7B" in base 16

    write(1, "\n", 1);

    ft_putnbr_base(-123, "0123456789");  // prints "-123" in decimal

    write(1, "\n", 1);

    return 0;

}