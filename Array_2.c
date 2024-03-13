/*write a program scan 10 numbers for array print array with index and calculated sum of 
even numbers and total even numbers*/

#include<stdio.h>

int main() {
    int numbers[10];
    int sumEven = 0;
    int totalEven = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] % 2 == 0) {
            sumEven += numbers[i];
            totalEven++;
        }
    }

    printf("\nArray with index and values:\n");
    for (int i = 0; i < 10; i++) {
        printf("Index %d: %d\n", i, numbers[i]);
    }

    printf("\nSum of even numbers: %d\n", sumEven);
    printf("Total even numbers: %d\n", totalEven);

    return 0;
}
