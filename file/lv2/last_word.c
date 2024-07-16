#include <unistd.h>

int lent(char* str)
{
    int len = 0;
    while(str[len])
    {
        len++;
    }
    return(len);
}

int main(int argc, char* argv[])
{
    char* str = argv[1];
    int len =lent(str);
    if (argc == 2)
    {
        len-=1;
        while ((str[len] == ' ' || str[len] == '\t') && len != 0)
        {
            len--;
        }
        while((str[len] != ' ' && str[len] != '\t') && len != 0)
        {
            len--;
        }
        len++;
        while (str[len] != ' ' && str[len] != '\t' && str[len])
        {
            write(1, &str[len], 1);
            len++;
        }
    }
    write(1, "\n", 1);
}