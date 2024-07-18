#include <stdlib.h>


int lent(char* str)
{
    int i = 0;
    while(str[i] != ' ' && str[i] != '\t' && str[i])
    {
        i++;
    }
    return (i);
}

int count (char* str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        while ((str[i] == ' ' || str[i] == '\t') && str[i])
        {
            i++;
        }
        if (str[i])
        {
            count++;
        }
        while (str[i] && str[i] != ' ' && str[i] != '\t')
        {
            i++;
        }
    }
    return (count);
}

char *copy(char* str,int i)
{
    int a = 0;
    char *p=(char *)malloc(lent(&str[i]) + 1);

    while(str[i] && str[i] != ' ' && str[i] != '\t')
    {
        p[a] =str[i];
        i++;
        a++;
    }
    p[a] = '\0';
    return (p);
}


char    **ft_split(char *str)
{
    if (str == NULL)
    {
        char **p = (char **)malloc(sizeof(char *));
        p[0] = 0;
        return (p);
    }

    int i = 0;
    char **p;
    int x = 0;

    p =(char **)malloc((count(str) + 1) * sizeof(char *));

    if(!p)
    {
        return (0);
    }

    while(str[i])
    {
        while(str[i] == ' ' || str[i] == '\t')
        {
            i++;
        }
        if (str[i])
        {
            p[x] = copy(str,i);
            x++;
        }
        while (str[i] && str[i] != ' ' && str[i] != '\t')
        {
            i++;
        }
    }
    p[x] = 0;
    return (p);
}

#include <stdio.h>

int main()
{
    char **arr;

    // Test case 1: Empty string
    char *phrase1 = "       \t \t \t  hello sdfsdfs\t sdfv";
    arr = ft_split(phrase1);
    printf("Test case 1: %s\n", arr[0]);

    // Test case 2: String with only spaces
    char *phrase2 = "                               ";
    arr = ft_split(phrase2);
    printf("Test case 2: %s\n", arr[0]);

    // Test case 3: String with multiple words
    char *phrase3 = "Hello World!";
    arr = ft_split(phrase3);
    printf("Test case 3: %s\n", arr[0]);

    // Add more test cases here...

    // Test case 4: String with one word
    char *phrase4 = "GitHub";
    arr = ft_split(phrase4);
    printf("Test case 4: %s\n", arr[0]);

    // Test case 5: String with leading and trailing spaces
    char *phrase5 = "   Spaces   ";
    arr = ft_split(phrase5);
    printf("Test case 5: %s\n", arr[0]);

    // Test case 6: String with special characters
    char *phrase6 = "!@#$%^&*()";
    arr = ft_split(phrase6);
    printf("Test case 6: %s\n", arr[0]);

    // Add more test cases here...

    // Test case 20: String with multiple words and spaces
    char *phrase20 = "This is a test";
    arr = ft_split(phrase20);
    printf("Test case 20: %s\n", arr[0]);

    // Test case 21: String with only one character
    char *phrase21 = "A";
    arr = ft_split(phrase21);
    printf("Test case 21: %s\n", arr[0]);

    // Test case 22: String with multiple spaces between words
    char *phrase22 = "Hello     World!";
    arr = ft_split(phrase22);
    printf("Test case 22: %s\n", arr[0]);

    // Add more test cases here...
}