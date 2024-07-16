char    *ft_strrev(char *str)
{
    int i = 0;
    char swp;
    int len = 0;

    while(str[len])
    {
        len++;
    }
    len -= 1;
    while(i < len)
    {
        swp = str[i];
        str[i] = str[len];
        str[len] = swp;
        i++;
        len--;
    }
    return (str);
}