//Implement Karpekar's constant program. Print the number of times the logic of finding the difference of 2 numbers had to be iterated.
#include <stdio.h>
#include <stdlib.h>

int compare_desc(const void *a, const void *b)
{
    return (*(int *)b - *(int *)a);
}

int compare_asc(const void *a, const void *b) 
{
    return (*(int *)a - *(int *)b);
}
void split_digits(int number, int digits[])
{
    for (int i = 0; i < 4; i++)
    {
        digits[i] = number % 10;
        number /= 10;
    }
}

int form_number(int digits[]) {
    return digits[0] * 1000 + digits[1] * 100 + digits[2] * 10 + digits[3];
}

int kaprekars_constant_iterations(int number) {
    int iterations = 0;
    const int KAPREKAR_CONSTANT = 6174;

    while (number != KAPREKAR_CONSTANT) {
        int digits[4];

        split_digits(number, digits);

        qsort(digits, 4, sizeof(int), compare_desc);
        int large = form_number(digits);

        qsort(digits, 4, sizeof(int), compare_asc);
        int small = form_number(digits);

        number = large - small;

        iterations++;
    }

    return iterations;
}

int main() {
    int number;

    printf("Enter a 4-digit number (at least two different digits): ");
    scanf("%d", &number);

    if (number < 1000 || number > 9999) {
        printf("Please enter a valid 4-digit number.\n");
        return 1;
    }

    int iterations = kaprekars_constant_iterations(number);

    printf("Number of iterations to reach Kaprekar's constant: %d\n", iterations);

    return 0;
}