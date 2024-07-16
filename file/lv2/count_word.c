#include <stdio.h>
int count_words(const char *str) 
{
    int i = 0;
    int count = 0;
    int word = 0;

    while (str[i])
    {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            word = 0;
        }
        else if (!word)
        {
            word = 1;
            count++;
        }
        i++;
    }
    return count;
}
int main() {
    char text[] = "This is a test string.";
    printf("The string contains %d words.\n", count_words(text));
    return 0;
}