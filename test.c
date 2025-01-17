#include <stdio.h>

int main() {
    printf("Hello, world!\n");

    // Read input from user
    printf("Enter a number: ");

        // Declare variables
    int n;
    scanf("%d", &n);    
    printf("You entered: %d\n", n);    
    if(n > 10) {    
        printf("n is greater than 10\n");    
    } else {    
        printf("n is less than or equal to 10\n");        
    }    
    return 0;
}