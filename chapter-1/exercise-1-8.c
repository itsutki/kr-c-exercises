#include <stdio.h>

// Counts tabs, spaces, and newlines
int main() {
    int c;
    int t = 0, s = 0, n = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\t') t++;
        if (c == ' ')  s++;
        if (c == '\n') n++;
    }

    printf("Tabs: %d, Spaces: %d, Newlines: %d\n", t, s, n);
}
