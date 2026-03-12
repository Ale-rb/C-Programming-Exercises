#include <stdio.h>

int main(void){

    // 1. Input Section
    printf("%s", "Enter beginning balance: ");
    int balance;
    scanf("%d", &balance);

    printf("%s", "Enter total charges: ");
    int charges;
    scanf("%d", &charges);

    printf("%s", "Enter total credits: ");
    int credits;
    scanf("%d", &credits);

    printf("%s", "Enter credit limit: ");
    int limit;
    scanf("%d", &limit);

    // 2. Calculation
    balance = balance + credits - charges;
    
    printf("\nLimit: %d\nBalance: %d\n", limit, balance);
    
    int difference;
    difference = limit - balance;

    // 3. Output Logic
    if (balance > limit) {
        // Using 'abs' logic or just displaying the positive gap
        printf("Remaining credit: %d EUR\n", -difference); 
    } else {
        printf("Credit limit exceeded by: %d EUR\n", difference);
    }

    return 0;
}
