#include <stdlib.h>
#include <stdio.h>

int menu();
int userNumber();
int multiplyNumbers();
int sumNumbers();

int main() {
    
    int num1, num2, result;
    num1 = userNumber();
    num2 = userNumber();


    switch (menu()) {
    case 1:
        result = sumNumbers(num1,num2);
        printf("This is the result: %d\n", result);
        break;
    case 2:
        result = multiplyNumbers(num1, num2);
        printf("This is the result %d\n", result);
        break;
    default:
        printf("Wrong selection \n");
        break;
    }
}

int menu() {

    int option;
    
    printf("Choose an option: \n");
    printf("1. Sum \n");
    printf("2. Multiply \n");
    scanf(" %d", &option);

    return option;
}

int userNumber() {

    int num;

    printf("Insert one number: \n");
    scanf(" %d", &num);

    return num;
}

int multiplyNumbers(int num_1, int num_2) {

    return num_1*num_2;
}

int sumNumbers(int num_1, int num_2) {

    return num_1+num_2;
}

