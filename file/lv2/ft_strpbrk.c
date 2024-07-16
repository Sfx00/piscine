
char	*ft_strpbrk(char const *str1, char const *str2)
{
    int i = 0;
    int j = 0;
    while (str1[i])
    {
        j = 0;
        while(str2[j])
        {
            if (str1[i] == str2[j])
            {
                return(&str1[i]);
            }
            j++;
        }
        i++;
    }
    return (0);
}
