#include <stdio.h>

int main() {
    char stri[1001];
    int result[26] = {0};

    scanf("%s", stri);
    
    
    for (int i = 0; stri[i] != '\0'; i++) {
       result[stri[i] - 'a']++;
       
        }
    
    for (int i = 0; i < 26; i++) {
        printf("%c - %d\n", 'a' + i, result[i]);
    }
    
    return 0;
}
