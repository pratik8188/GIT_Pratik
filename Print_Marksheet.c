/*
6.  Write a program scan rollno and 
name of student
scan 3 subject marks
calculate total and percentage
give class as distinction first class
second class or fail
and print marksheet
*/

#include <stdio.h>
int main() 
{
    int roll_number;
    char name[50];
    float marks[3];

    printf("Enter Roll Number: ");
    scanf("%d", &roll_number);

    printf("Enter Name: ");
    scanf(" %[^\n]", name);
    
    printf("Enter Marks in Subject 1: ");
    scanf("%f", &marks[0]);

    printf("Enter Marks in Subject 2: ");
    scanf("%f", &marks[1]);

    printf("Enter Marks in Subject 3: ");
    scanf("%f", &marks[2]);

    float total_marks = marks[0] + marks[1] + marks[2];
    float percentage = (total_marks / 300) * 100;

    char* result;
    if (percentage >= 75.0) 
	{
        result = "Distinction";
    } 
	else if (percentage >= 60.0) 
	{
        result = "First Class";
    } 
	else if (percentage >= 50.0) 
	{
        result = "Second Class";
    }
	 else 
	{
        result = "Fail";
    }

    printf("\n----- Marksheet -----\n");
    printf("Roll Number: %d\n", roll_number);
    printf("Name: %s\n", name);
    printf("Marks in Subject 1: %.2f\n", marks[0]);
    printf("Marks in Subject 2: %.2f\n", marks[1]);
    printf("Marks in Subject 3: %.2f\n", marks[2]);
    printf("Total Marks: %.2f\n", total_marks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Class: %s\n", result);
    return 0;
}
