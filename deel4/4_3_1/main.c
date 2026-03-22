#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define NSTUDENTS 10

struct student
{
    char naam[50];
    int studentNr;
};

int main(void)
{
    struct student **students = malloc(NSTUDENTS * sizeof(struct student*));

    students[0] = malloc(sizeof(struct student));
    strcpy(students[0] -> naam , "Yasmine Conen");
    students[0]->studentNr = 0;

    students[1] = malloc(sizeof(struct student));
    strcpy(students[1] -> naam , "Thijmen Verstraete");
    students[1]->studentNr = 1;

    // for(int s=0; s<NSTUDENTS; s++)
    // {
    //     struct student *newStudent = malloc(sizeof());
    //     strcpy(newStudent.naam, "José");
    //     newStudent.studentNr = s;
    //     students[s] = &newStudent;
    // }



    return 0;
}