/*20.	Write a program in C which is a Menu-Driven Program to compute the area of the various geometrical shape.*/
        
		
#include<stdio.h>
int main()
{
	float r, l, b, base, height;
	int choice;
	printf("\n 1. Area of Circle");
	printf("\n 2. Area of rectangle");
	printf("\n 3. Area of triangle");
	
	printf("\n Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:printf("\n Enter radius: ");
		scanf("%f",&r);
		printf("\n Area of circle:%f",3.14*r*r);
		break;
		
		case 2:printf("\n enter length and breadth: ");
		scanf("%f%f",&l,&b);
		printf("\n Area of rectangle:%f",l*b);
		break;
		
		case 3:printf("\n enter base and height: ");
		scanf("%f%f",&base,&height);
		printf("\n Area of triangle:%.2f",0.5*base*height);
		break;
		
		default: printf("please enter valid choice...");
	}
}
