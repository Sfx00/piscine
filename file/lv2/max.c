#include <stdio.h>

int max(int* tab, unsigned int len)
{
    if (!tab || len == 0)
    {
        return (0);
    }
    unsigned int i = 1;
    int large = tab[0];


    while (i < len)
    {
        if (tab[i] > large)
        {
            large = tab[i];
        }
        i++;
    }
    return (large);
}
int main ()
{
    int tab[] = {5,1,4,7,3,9};

    printf("%i",max(tab,6));
}