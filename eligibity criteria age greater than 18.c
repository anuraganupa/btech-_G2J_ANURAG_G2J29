#include <stdio.h>

int main() {
    int age; 
    printf("Enter your age: ");1
    scanf("%d", &age);

    if (age >= 18) {
        printf("You are eligible for the criteria.\n");
    } else {
        printf("You are not eligible for the criteria.\n");
    }
    return 0; 
}
