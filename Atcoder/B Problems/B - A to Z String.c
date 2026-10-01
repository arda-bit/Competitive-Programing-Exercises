#include <stdio.h>
#include <string.h>

int main() {
    char word[200005];
    int alt = 0, ust = 0;

    // Use width specifier to prevent buffer overflow
    scanf("%200004s", word);

    int length = strlen(word);

    for (int i = 0; i < length; i++) {
        if (word[i] != 'A') {
            alt++;
        } else {
            alt++;
            break;
        }
    }

    for (int j = length - 1; j >= 0; j--) {
        if (word[j] != 'Z') {
            ust++;
        } else {
            break;
        }
    }

    printf("%d", length - ust - alt + 1);

    return 0;
}
