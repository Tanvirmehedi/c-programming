#include <stdio.h>

int main() {
    int n, x, result = 0;
    scanf("%d", &n);



    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }


//take the inpute 

    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            result++;
        }
    }



    printf("%d", result);
    return 0;
}
