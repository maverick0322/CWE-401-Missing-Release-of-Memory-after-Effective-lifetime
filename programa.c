#include <stdlib.h>
#include <stdio.h>

#define LOOPS 100
#define MAXSIZE 256

int main(int argc, char **argv)
{
    int count = 0;
    char *pointer = NULL;

    for (count = 0; count < LOOPS; count++)
    {
        pointer = (char *)malloc(sizeof(char) * MAXSIZE);
        if (pointer == NULL)
        {
            return 1;
        }

        free(pointer);
        pointer = NULL;
    }

    return count;
}