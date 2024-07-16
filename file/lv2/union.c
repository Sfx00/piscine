#include <unistd.h>

int check1(char* str,char c, int pos)
{
    int i = 0;
    while (i < pos)
    {
        if(str[i] == c)
        {
            return (1);
        }
        i++;
    }
    return (0);
}

int  check2(char* s1,char* s2,char c,int pos)
{
    int i = 0;
    while(s1[i])
    {
        if(s1[i] == c)
        {
            return (1);
        }
        i++;
    }
    i = 0;
    while (i < pos)
    {
        if (s2[i] == c)
        {
            return(1);
        }
        i++;
    }
    return (0);
}
int main(int argc,char* argv[])
{
    char* s1 = argv[1];
    char* s2 = argv[2];
    int i = 0;
    int j = 0;
    if (argc == 3)
    {
        while(s1[i])
        {
            if (check1(s1,s1[i],i) == 0)
            {
                write(1,&s1[i], 1);
            }
            i++;
        }
        while(s2[j])
        {
            if (check2(s1,s2,s2[j],j) == 0)
            {
                write(1,&s2[j], 1);
            }
            j++;
        }
    }
    write(1, "\n", 1);
}