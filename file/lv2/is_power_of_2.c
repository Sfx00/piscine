#include <stdio.h>
int	    is_power_of_2(unsigned int n)
{
    unsigned int i = 0;

    while (i < n / 2)
    {
        if (i * i == n)
        {
            return (1);
        }
        i++;
    }
    return (0);
    
}
int main ()
{
    printf("%i\n",is_power_of_2(16));
    printf("%i\n",is_power_of_2(15));
}