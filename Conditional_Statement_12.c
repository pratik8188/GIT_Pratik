/*12.	Write a C program to read roll no, name and marks of three subjects and 
calculate the total, percentage and division.
	Test Data:
	Input the Roll Number of the student :784 
	Input the Name of the Student: James
	Input the marks of Physics, Chemistry and Computer Application: 70 80 90
	Expected Output:*/
        
#include <stdio.h>
int main() 
{
    int rollNo;
    char name[50];
    float physics, chemistry, computerApp, totalMarks, percentage;
    
    printf("Input the Roll Number of the student: ");
    scanf("%d", &rollNo);
    printf("Input the Name of the Student: ");
    scanf("%s", name);
    
    printf("Input the marks of Physics, Chemistry, and Computer Application: ");
    scanf("%f %f %f", &physics, &chemistry, &computerApp);
    
    totalMarks = physics + chemistry + computerApp;
    percentage = (totalMarks / 300) * 100;
    
    char division[20];
    if (percentage >= 60)
        strcpy(division, "First Division");
    else if (percentage >= 45)
        strcpy(division, "Second Division");
    else if (percentage >= 33)
        strcpy(division, "Third Division");
    else
        strcpy(division, "Fail");
    
    
    printf("\nRoll Number: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Division: %s\n", division);
    
    return 0;
}