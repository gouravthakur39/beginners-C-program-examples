#include <stdio.h>

// using the struct keyword and a tag to create a structure
struct student {
    // add structure members here, members cannot be initialized here
    char name[50];
    int roll;
    float marks;
}
s; // variable s is declared with 'student' structure

int main() {
    printf("Enter information:\n");

    printf("Enter name: ");
    scanf("%s", s.name); // structure members are accessed using the dot(.) operator

    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("Displaying Information:\n");

    printf("Name: %s\n", s.name);

    printf("Roll number: %d\n", s.roll);

    printf("Marks: %.1f\n", s.marks);

    return 0;
}
