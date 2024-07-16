#include <stdlib.h>
#include <stdio.h>

int abs(int n)
{
    if (n < 0)
    {
        return (-n);
    }
    else
        return (n);
}

int     *ft_range(int start, int end)
{
    int* n;
    int size;
    int i = 0;

    size = abs(end - start) + 1;
    n = (int *)malloc(sizeof(int) * size);
    if (n == NULL)
    {
        return (NULL);
    }

    if (size == 1)
    {
        n[0] = start;
        return (n);
    }

    if (start < end)
    { 
        while(i < size)
        {
            n[i] = start + i;
            i++;
        }
    }
    if (start > end)
    {
        while (i < size)
        {
            n[i] = start - i;
            i++;
        }
        
    }
    return (n);
}
int main()
{
    int *n;
    int i = 0;
    n = ft_range(-1, 7);
    while (i < 9)
    {
        printf("%d\n", n[i]);
        i++;
    }
}