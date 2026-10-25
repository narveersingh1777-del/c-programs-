#include <stdio.h>

int main() {
    char ch;
    printf("Enter any character: ");
    scanf(" %c", &ch);
    if (ch >= 'a' && ch <= 'z') printf("Lowercase alphabet\n");
    else if (ch >= 'A' && ch <= 'Z') printf("Uppercase alphabet\n");
    else if (ch >= '0' && ch <= '9') printf("Digit\n");
    else printf("Special character\n");
    return 0;
}
