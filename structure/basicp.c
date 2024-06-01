#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[50];
    float marks;
    
} student1;

int main()
{
    student1.id = 45;
    student1.marks = 785;
    
    strcpy(student1.name, "rohit");
    
    printf("student 1 id : %d\n", student1.id);
    printf("student 1 name : %s\n", student1.name);
    printf("student 1 marks : %f", student1.marks);
    return 0;
}