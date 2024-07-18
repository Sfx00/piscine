#include <stdio.h>

int max(int* tab, unsigned int len)
{
    if (!tab || len == 0)
    {
        return (0);
    }
    unsigned int i = 1;
    int larg = tab[0];

    while (i < len)
    {
        if (tab[i] > larg)
        {
            larg = tab[i];
        }
        i++;
    }
    return(larg);
}

int main ()
{
    int tab[] = {5,1,4,7,3,9};

    printf("%i",max(tab,6));
}