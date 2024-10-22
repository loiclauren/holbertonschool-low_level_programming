#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;
    int last_digit;

    srand(time(0)); /* Seed the random number generator */
    n = rand();     /* Generate a random number */

    last_digit = n % 10; /* Get the last digit */

    /* Print the output as per the requirements */
    printf("Last digit of %d is ", n);
    
    if (last_digit > 5) {
        printf("%d and is greater than 5\n", last_digit);
    } else if (last_digit == 0) {
        printf("%d and is 0\n", last_digit);
    } else {
        printf("%d and is less than 6 and not 0\n", last_digit);
    }

    return 0;
}
