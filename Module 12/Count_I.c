#include <stdio.h>

int main() {
    int n, num;
    int even_n = 0, odd_n = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) {
            even_n++;
        } else {
            odd_n++;
        }
    }

    printf("%d %d", even_n, odd_n);

    return 0;
}
