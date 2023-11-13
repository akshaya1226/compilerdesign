#include <stdio.h>
int main() {
    int newlineCount = 0;
    int whitespaceCount = 0;
    char ch;

    printf("Enter text (Ctrl+D to end input on Unix/Linux, Ctrl+Z on Windows):\n");

    while ((ch = getchar()) != EOF) {
        if (ch == '\n') {
            newlineCount++;
        } else if (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\v' || ch == '\f') {
            whitespaceCount++;
        }
    }
    printf("Newlines: %d\n", newlineCount);
    printf("Whitespace characters: %d\n", whitespaceCount);
    return 0;
}
