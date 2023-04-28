#include <stdio.h>
#include <math.h>

int main() {
    int m1, m2, d, days;

    scanf("%d %d %d", &m1, &m2, &d);

    days = ceil((double)m1 * d / (double)m2);

    printf("%d", days);

    return 0;
}
