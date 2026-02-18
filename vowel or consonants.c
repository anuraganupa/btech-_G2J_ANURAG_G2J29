#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if character is alphabet
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        
        // Check for vowels
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
           ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("It is a Vowel.\n");
        } else {
            printf("It is a Consonant.\n");
        }

    } else {
        printf("Not an alphabet character.\n");
    }

    return 0;
}