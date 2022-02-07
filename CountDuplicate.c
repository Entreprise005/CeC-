#include <stdio.h>
#include <string.h>

int countAlphabets(char *str);

int main(int argc, char const *argv[])
{
    printf("%d\n", countAlphabets("indivisibility"));
    return 0;
}

int countAlphabets(char *str)
{
    int result = 0;
    char* text = str;

    for(int i = 0; i <= strlen(str); i++)
    {
        if(text[i] == text[i+1])
        {
            result = result + 1;
        }
    }
    
    return result;
}