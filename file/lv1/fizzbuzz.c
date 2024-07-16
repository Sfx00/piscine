#include <unistd.h>

void _print(int n)
{
    char x = (n % 10) + '0';
    char p = (n / 10) + '0';

    if (n > 9)
    {
        write(1, &p, 1);
    }
    write(1, &x, 1);
}

int main()
{
    int i = 1;
    while(i <= 100)
    {
        if (i%3 == 0 && i%5 == 0)
        {
            write(1, "fizzbuzz",9);
        }
        else if (i%3 == 0)
        {
            write(1, "fizz",5);
        }
        else if (i%5 == 0)
        {
            write(1, "buzz",5);
        }
        else
            _print(i);
        i++;
        write(1,"\n", 1);
    }
}