#include <ctype.h>
#include <stdio.h>

#define LOOPDEPTH 50

char countCharacters();

int main(void)
{
    char longestCharacter = countCharacters();
    printf("De langste sequentie is bij de character: %c\n", longestCharacter);
    return 0;
}

char countCharacters()
{
    char character, previousCharacter, longestCharacter = getchar();
    int counter, maxCounter = 0;
    for (int i = 0; i<LOOPDEPTH; i++)
    {

        if(isspace(character))
        {
            return longestCharacter;
        }

        char lowerCharacter = tolower(character);

        if (previousCharacter == lowerCharacter)
        {
            counter++;
        } else {
            if (counter > maxCounter)
            {
                maxCounter = counter;
                longestCharacter = character;
            }
            counter = 0;
            previousCharacter = character;
        }
        
        character = getchar();
        character = getchar();
    }

    return longestCharacter;
}