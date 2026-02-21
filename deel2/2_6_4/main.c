#include <math.h>
#include <stdio.h>


struct coordinaten
{
    int x;
    int y;
};

float eucledischeAfstand(struct coordinaten cor1, struct coordinaten cor2);

int main(void)
{
    struct coordinaten cor1;
    cor1.x = 0;
    cor1.y = 0;

    struct coordinaten cor2;
    cor2.x = 3;
    cor2.y = 4;

    float afstand = eucledischeAfstand(cor1, cor2);
    printf("De afstand tussen cor1 en cor2 is: %.2f\n",afstand);

    return 0;
}

float eucledischeAfstand(struct coordinaten cor1, struct coordinaten cor2)
{
    return sqrt(pow(cor1.x-cor2.x, 2)+pow(cor1.y-cor2.y, 2));
}