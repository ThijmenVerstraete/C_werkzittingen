#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ITERATIONS 5
#define MAX_STR_SIZE 100

void concat_malloc();
void concat_realloc();

int main(void)
{
    concat_realloc();
    return 0;
}

void concat_malloc()
{
    int totalSize = 0;
    char strInputs[MAX_ITERATIONS][MAX_STR_SIZE];

    printf("Enter some strings\n");
    for(int i=0; i<MAX_ITERATIONS; i++)
    {
       scanf("%s", strInputs[i]);
       totalSize += strlen(strInputs[i]);
    }

    char *concat = malloc(totalSize);
    for(int i=0; i<MAX_ITERATIONS; i++)
    {
        strcat(concat, strInputs[i]);
    }

    printf("Concat string (no realloc): %s\n", concat);
    free(concat);
}

void concat_realloc()
{
    char *concat = malloc(MAX_STR_SIZE);
    printf("Enter some strings\n");
    for(int i=0; i<MAX_ITERATIONS; i++)
    {
        char input[MAX_STR_SIZE];
        scanf("%99s", input);
        if(i==0)
        {
            strcat(concat, input);
            continue;
        }
        size_t newLen = strlen(concat) + strlen(input) +1;
        concat = realloc(concat, newLen);
        strcat(concat, input);
    }

    printf("Concat string (realloc): %s\n", concat);
    free(concat);
}