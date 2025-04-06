#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	char* s;
    unsigned long int i;

    s = strdup("uwoughhhh");
    //strdup is a posix function
    // alternatively:
    //
    // s = malloc(strlen("uwoughhhh") + 1);
    // if (s != NULL)
    // {
    //     strcpy(s, "uwoughhhh");
    // }

    if (s == NULL)
    {
        fprintf(stderr, "brrr...\n");
        return(EXIT_FAILURE);
    }
    i = 0;
    while(s){
        printf("[%lu] %s (%p)\n", i, s, (void *)s);
        sleep(1);
        i++;
    }
    return(EXIT_SUCCESS);
}