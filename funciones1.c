#include    <stdio.h>
#include    <stdlib.h>

int menu();

int main(){
    
    int num1, num2, result;

    printf("Give me one number\n");
    scanf(" %d", &num1);
    printf("Give me another number\n");
    scanf(" %d", &num2);

    switch (menu()) {
    
        case 1:
            result = num1 + num2;
            printf("This is the result of sum: %d\n", result);
        break;
    
        case 2:
            result = num1 * num2;
            printf("This is the result of multiply: %d\n", result);
        break;

    default:
        break;
    }

    return 0;
}

int menu(){

    int option;

    printf("Please select an option: \n");
    printf("1. Sum \n");
    printf("2. Multiply \n");
    scanf(" %d", &option );

    return option;
}

