#include "monty.h"

int run_file(FILE *ptr)
{
        char *string = NULL;
        size_t size = 0;
        unsigned int num = 0, line_num = 0;

        while (getline(&string, &size, ptr) != -1)
        {
		line_num++;
		op = strtow(string, DELIMS);
		printf("%s\n", op[0]);
        }
        return (1);
}

