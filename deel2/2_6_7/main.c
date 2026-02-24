
#define N 4

// nog niet af!

struct countedString
{
    char string[10];
    int count;
}
;
int main(void)
{
    char duplicates[N] = {"alfa", "bravo", "charlie", "charlie", "alfa"};
    struct countedString output[N];
    return 0;
}

void countDuplicates(char inputList[N], struct countedString outputString[N])
{
    for(int i=0; i<N; i++)
    {
        int counter = 0;
        char str1 = inputList[i];
        for(int j=i+1; j<N; j++)
        {
            char str2 = inputList[j];
            if(str1 == str2)
            {
                counter ++;
            }
        }
        struct countedString newCountedString;
    }
}