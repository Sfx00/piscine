#include <stdlib.h>
#include <unistd.h>

int lent(char* str)
{
    int i = 0;

    while(str[i])
    {
        i++;
    }
    return (i);
}

void printrev(char* str)
{
    int tran = lent(str) - 1;
    int cur;
    int end;

    while (tran >= 0)
    {
        end = tran;

        while(str[tran] != ' ' && str[tran] != '\t' && tran >= 0)
        {
            tran--;
        }
        tran++;
        cur = tran;
        while(cur <= end)
        {
            write(1,&str[cur], 1);
            cur++;
        }
        if (tran > 0)
        {
            write(1," ",1);
        }
        tran--;
        tran--;
    }
}


int main (int argc,char* argv[])
{
    if (argc == 2)
    {
        printrev(argv[1]);
    }
    write(1,"\n", 1);
}