#include <stdlib.h>
#include <stdio.h>

int count(char* str)
{
    int count = 0;
    int i = 0;
    while(str[i])
    {
        while((str[i] == ' ' || str[i] == '\t') && str[i])
        {
            i++;
        }
        if(str[i])
            count++;

        while(str[i] != ' ' && str[i] != '\t' && str[i])
        {
            i++;
        }
        
    }
    return (count);
}

int lent(char* str)
{
    int i = 0;
    while (str[i] && str[i] != ' ' && str[i] != '\t')
    {
        i++;
    }
    return (i);
}


char *word(char* str)
{
    int i = lent(str);
    char* p = (char*)malloc(i + 1);
    if (!p)
    {
        return (0);
    }
    int r = 0;

    while (str[r]&& str[r] != ' ' && str[r] != '\t')
    {
        p[r] = str[r];
        r++;
    }
    p[r] = '\0';
    return (p);
}


char    **ft_split(char *str)
{
    int i = count(str);
    int j = 0;
    char **p;
    p = (char **)malloc((i + 1) * sizeof(char *));
    if (!p)
    {
        return (0);
    }
    while (*str)
    {
        while(*str != '\0' && (*str == ' ' || *str == '\t'))
        {
            str++;
        }
        if (*str)
        {
            p[j] = word(str);
            j++;
        }
        while (*str && *str != ' ' && *str != '\t')
        {
            str++;
        }
    }
    p[j] = 0;
    return (p);
}

int main()
{
    char* str = "Hello World";
    char** p = ft_split(str);
    int i = 0;
    while (p[i])
    {
        printf("%s\n", p[i]);
        i++;
    }
    return (0);
}