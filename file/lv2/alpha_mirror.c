#include <unistd.h>

int		main(int argc, char **argv)
{
    int i = 0;
    char s;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                s = 'm' - (argv[1][i] - 'n');
            }
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                s = 'M' - (argv[1][i] - 'N');
            }
            else
                s = argv[1][i];
            write(1, &s, 1);
            i++;
        }
    }
    write (1, "\n", 1);    
}
