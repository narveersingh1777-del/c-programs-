#include <stdio.h>

int main() {
    char line[150];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, i;
    printf("Enter a line of text: ");
    scanf(" %[^\n]", line);

    for (i = 0; line[i] != '\0'; ++i) {
        if (line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||
            line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
            ++vowels;
        else if ((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
            ++consonants;
        else if (line[i]>='0' && line[i]<='9')
            ++digits;
        else if (line[i]==' ')
            ++spaces;
    }
    printf("Vowels: %d\nConsonants: %d\nDigits: %d\nSpaces: %d\n", vowels, consonants, digits, spaces);
    return 0;
}
