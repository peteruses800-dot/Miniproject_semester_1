#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    int i, n, flag = 0;

    printf("Enter a word: ");
    scanf("%s", word);

    n = strlen(word);

    for (i = 0; i < n / 2; i++) {
        if (word[i] != word[n - i - 1]) {
            flag = 5;
            break;
        }
    }

    if (flag == 0)
        printf("Perfect Secret Word");
    else
        printf("Not a Secret Word");

    return 0;
}