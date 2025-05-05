#include <stdio.h>

#define MAX_WORD_LEN 20

int main(void) {
    int c, len = 0;
    int word_lengths[MAX_WORD_LEN] = {0};

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (len > 0 && len < MAX_WORD_LEN)
                word_lengths[len]++;
            len = 0;
        } else {
            len++;
        }
    }

    // Histogram print
    for (int i = 1; i < MAX_WORD_LEN; i++) {
        printf("%2d: ", i);
        for (int j = 0; j < word_lengths[i]; j++)
            putchar('*');
        putchar('\n');
    }

    return 0;
}