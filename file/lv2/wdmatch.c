#include <unistd.h>

int main(int argc, char* argv[])
{
    char* s1 = argv[1];
    char* s2 = argv[2];
    int i = 0;
    int j = 0;
    int f = 0;
    if(argc == 3)
    {
        while (s1[i])
        {
            f = 0;
            while (s2[j])
            {
                if(s1[i] == s2[j])
                {
                    f = 1;
                    break;
                }
                j++;
            }
            i++;
        }
        i = 0;
        if (f == 1)
        {
            while (s1[i])
            {
               write(1, &s1[i], 1);
               i++;
            }
        }
    }
    write(1, "\n", 1);
}