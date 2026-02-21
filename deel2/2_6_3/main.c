#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compare(char string1[], char string2[]);

int main(void)
{
    int nDifferences = compare("Lou", "Lily");
    printf("Il y a %i différences\n", nDifferences);
    return 0;
}

int compare(char string1[], char string2[])
{
    int minLength = 0;
    int size1 = strlen(string1);
    int size2 = strlen(string2);
    int nDifferences = 0;

    //determine the longest string
    if(size1 < size2)
    {
        minLength=size1;
        nDifferences = size2-size1;
    } else
    {
        minLength=size2;
        nDifferences = size1-size2;
    }

    for(int i = 0; i<minLength; i++)
    {
        char char1 = toupper(string1[i]);
        char char2 = toupper(string2[i]);
        if(char1 != char2)
        {
            nDifferences = nDifferences+1;
        }
    }
    return nDifferences;
}