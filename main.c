#include "monty.h"
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

char **op = NULL;


int main(int argc, char *argv[])
{
        FILE *ptr;
        size_t size = 0;
        char *str = NULL;

        str = (char *)malloc(size);

        ptr = fopen(argv[1], "r");


        if (ptr == NULL)
                printf("File can't be opened \n");
        if (argv[1] == NULL)
        {
                printf("Usage: ./monty <file>");
                return (0);
        }
        run_file(ptr);
        fclose(ptr);
        return (0);
}

