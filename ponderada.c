#include <stdio.h>

int main(void) {

    int N, i;
    double n1, n2, n3, sum, average;

    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        scanf("%f %f %f", &n1, &n2, &n3);

        sum = n1 * 2.0 + n2 * 3.0 + n3 * 5.0;

        average = sum / 10.0;

        printf("%.1lf\n", average);
    }


    return 0;
}
