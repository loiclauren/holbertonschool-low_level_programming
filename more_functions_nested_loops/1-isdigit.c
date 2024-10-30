#include <stdio.h>

int _isdigit(int c) {
    return (c >= '0' && c <= '9') ? 1 : 0;
}

int main() {
    char ch = '5'; // Change this to test different characters
    if (_isdigit(ch)) {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is not a digit.\n", ch);
    }
    return 0;
}
