#include <stdio.h>
#include <string.h>

#define DEPTH 9

void word_counter(char sentence[], int wordCount[]);
void print_counter_array(int array[], int length);


int main(void)
{
    char sentence[] = "Qui transtulit sustinet, Ad astra per aspera; lorem ipsum dorem, SPQR, united we stand, divided we fall";
    int wordCount[DEPTH] = {};
    for(int i=0; i<DEPTH; i++)
    {
        wordCount[i] = 0;
    }
    word_counter(sentence, wordCount); 
    print_counter_array(wordCount, DEPTH);
    return 0;
}

void word_counter(char sentence[], int wordCount[])
{
    char *previousIndex= sentence;
    char *token = strtok(sentence, " \t\n;,");

    while(token != NULL)
    {
        size_t length = strlen(token);
        if(length>DEPTH)
        {
            
        wordCount[DEPTH-1]++;
        }
        wordCount[length-1]++;
        previousIndex=token;
        token = strtok(NULL, " \t\n;,");
    }
    printf("\n");
}

void print_counter_array(int array[], int length)
{
    for(int i=0; i<length; i++)
    {
        printf("%i: ", i+1);
        int lengthOccurances = array[i];
        for(int j=0; j<lengthOccurances; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}