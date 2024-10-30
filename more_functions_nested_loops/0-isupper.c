#include <stdio.h>

int _isupper(int c) {
    return (c >= 'A' && c <= 'Z') ? 1 : 0;
}

int main() {
    char ch = 'A'; // Change this to test different characters
    if (_isupper(ch)) {
        printf("%c is uppercase.\n", ch);
    } else {
        printf("%c is not uppercase.\n", ch);
    }
    return 0;
}
