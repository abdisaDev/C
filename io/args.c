#include <stdio.h>

int main(int ac, char**av)
{
    int counter;

    counter = 1;

    while (av[counter] != NULL)
    {
        printf("%s\n",av[counter]);
        counter++;
    }
    return (0);
}