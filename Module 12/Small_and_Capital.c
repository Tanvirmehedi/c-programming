#include <stdio.h>

int main() {
    char stri[1001];
    int i, capCount = 0, smCount = 0;

    scanf("%s", stri);

    for (i = 0; stri[i] != '\0'; i++) {
        if (stri[i] >= 'A' && stri[i] <= 'Z') {
            capCount++;
        } else if (stri[i] >= 'a' && stri[i] <= 'z') {
            smCount++;
        }
    }

    printf("%d %d", capCount, smCount);

    return 0;
}
