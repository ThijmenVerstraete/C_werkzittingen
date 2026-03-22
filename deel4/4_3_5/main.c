#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct coordinate
{
    int x;
    int y;
};

int equal(struct coordinate a, struct coordinate b);
struct coordinate* find_equals(struct coordinate coordinates[], int nElements);

int main(void)
{
    struct coordinate coordinates[] = {{1,2}, {3,4}, {1,2}, {5,6}, {3,4}};
    struct coordinate *result = find_equals(coordinates, 5);


    free(result);
    return 0;
}

int equal(struct coordinate a, struct coordinate b)
{
    return (a.x == b.x && a.y == b.y);
}

struct coordinate* find_equals(struct coordinate coordinates[], int nElements)
{
    struct coordinate *uniqueCoordinates = malloc(1);
    int nDuplicates = 0;
    for(int i=0; i<nElements-1; i++)
    {
        struct coordinate c1 = coordinates[i];
        for(int j=i; j<sizeof(coordinates); j++)
        {
            struct coordinate c2 = coordinates[j];
            if (equal(c1, c2))
            {
                nDuplicates+=1;
                uniqueCoordinates = realloc(uniqueCoordinates, nDuplicates*sizeof(struct coordinate));
            }
        }
    }

    return uniqueCoordinates;
}