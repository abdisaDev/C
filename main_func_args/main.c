#include <stdio.h>
#include <string.h>

/**
 * I just learnt main has 3 prototypes
 * 1 - int main (void);
 * 2 - int main (int argc, char* argv[]);
 * 3 - int main (int argc, char* argv[], char* envp[]);
 * 
 * Lets tackel them one by one with example
*/


/**
 * int main(void);
*/
// int main(void)
// {
//     printf("main function with 0 args\n");
//     return (0);
// }

/**
 * int main(int argc, char* argv[]);
*/

// int main(int argc, char* argv[])
// {
//     int counter;
    
//     for (counter = 0; counter < argc; counter++)
//     {
//         if(counter == 0)
//         {
//             printf("File name: %s\n", argv[counter]);
//         }else {
//             printf("argument[%d]: %s\n", counter,argv[counter]);
//         }
//     }

//     return (0);
// }

/**
 * int main(int argc, char* argv[], char* envp[])
*/

int main(int argc, char* argv[], char* envp[])
{
    int counter;

    for (counter = 0; counter < argc; counter++)
    {
        if(counter == 0)
        {
            printf("File name: %s\n", argv[counter]);
        }else {
            printf("argument[%d]: %s\n", counter,argv[counter]);
        }
    }
 
    char* home = NULL;
    for (counter = 0; envp[counter] != NULL; counter++)
    {
        if (strncmp(envp[counter], "HOME=", 5) == 0)
        {
            home = envp[counter] + 5;
            break;
        }
    }
        if (home != NULL)
            printf("Home: %s\n", home);
    return (0);
}