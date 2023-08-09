

#include <stdio.h>
#include <math.h>

int main() {
    int N;
    printf("Enter a value for N: ");
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += pow(i, i);
    }

    printf("Sum of powers from 1 to %d is: %d\n", N, sum);

    return 0;
}