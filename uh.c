#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char* s;
    s = strdup("uwoughhhh");
    if (s == NULL)
    {
        fprintf(stderr, "brrr...\n");
        return(EXIT_FAILURE);
    }
    printf("%p\n", (void *)s);
    return(EXIT_SUCCESS);
}