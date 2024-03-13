/*5.Write a program in C to display the cube of the number upto given an integer.*/
	
	
#include <stdio.h>
int main()
 {
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);
    printf("Cube of the numbers from 1 to %d are:\n", n);

    for (i = 1; i <= n; i++) 
	{
        printf("Cube of %d is: %d\n", i, i * i * i);
    }

    return 0;
}
