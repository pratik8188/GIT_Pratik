/*write a program scan array for 10 numbers which is combination of positive and 
negative numbers count total positive and negative*/

#include 

int main() {
    int numbers[10];
    int countPositive = 0;
    int countNegative = 0;

    printf("Enter 10 numbers (positive or negative):\n");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);

        if (numbers[i] > 0) {
            countPositive++;
        } else if (numbers[i] < 0) {
            countNegative++;
        }
    }

    printf("\nArray of 10 numbers entered:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n\nTotal positive numbers: %d\n", countPositive);
    printf("Total negative numbers: %d\n", countNegative);

    return 0;
}