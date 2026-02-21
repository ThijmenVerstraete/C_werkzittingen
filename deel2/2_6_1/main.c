// LIFO = Last In, First Out

#include <stdio.h>
#include <stdbool.h>
#define ARRAY_LENGTH 4

bool bracketChecker(char array[], int size);
void printArray(char array[], int size);

int main(void)
{
    //char bracketArray[ARRAY_LENGTH] = {'(', '(', ')', ')'};
    //char bracketArray[ARRAY_LENGTH] = {'(', ')', '(', ')', '('};
    //char bracketArray[ARRAY_LENGTH] = {'(', '(', '(', '(', '('};
    //char bracketArray[ARRAY_LENGTH] = {'(', ')', '(', ')', '('};
    char bracketArray[ARRAY_LENGTH] = {'(', ')', '(', '('};
    bool validBrackets = bracketChecker(bracketArray, ARRAY_LENGTH);
    printf("%d\n", validBrackets);
    return 0;
}

bool bracketChecker(char array[], int size)
{
    char stack[size];
    int stackPointer = -1;

    for(int i=0; i<size; i++)
    {
        printf("stackpointer: %i\n", stackPointer);
        printArray(stack, stackPointer+1);

        char bracket = array[i];
        printf("bracket: %c\n", bracket);
        if(bracket == '(')
        {
            stackPointer = stackPointer+1;
            stack[stackPointer] = bracket;
            continue;
        }
        if (bracket == ')')
        {
            if(stackPointer==-1)
            {
                return false;
            }
            char previousBracket = stack[stackPointer];
            if ( previousBracket!='(' )
            {
                return false;
            }

            stackPointer = stackPointer-1;
        }

    }
    printf("stackpointer: %i\n", stackPointer);
    if(stackPointer==-1)
    {
        return true;
    }
    return false;
}

void printArray(char array[], int size)
{
    for(int i=0; i<size; i++)
    {
        printf("%c ", array[i]);
    }
    printf("\n");
}