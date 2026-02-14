//Schrijf een programma dat de getallen van 1 tot 100 toont, met volgende twist: laat voor
//veelvouden van 3 “Fizz” in plaats van het getal zien en voor veelvouden van 5 “Buzz”.
//Voor getallen die zowel veelvouden van 3 als 5 zijn, toon “FizzBuzz”:
//1 2 Fizz 4 Buzz Fizz 7 8 Fizz Buzz 11 Fizz 13 14 FizzBuzz ...

#include <stdio.h>
#define FIZZLIMIT 15

int fizzbuzz();

int main (void)
{
    fizzbuzz();
    return 0;
}

int fizzbuzz()
{
    for (int i=1; i<=FIZZLIMIT; i++)
    {
        if (i%3==0)
        {
            if (i%5==0)
            {
                printf("FizzBuzz ");
            }else
            {
                printf("FIZZ ");
            }
        } else if (i%5==0) {
            printf("BUZZ ");
        }
        else {
            printf("%i ", i);
        }
    }
    printf("\n");
    return 0;
}