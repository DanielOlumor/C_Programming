#include <stdio.h>
int main(){

    char operator;
    int num1;
    int num2;
    int result;


    printf("Enter your operator, num1, num2 : ");
    scanf("%c, %d, %d", &operator, &num1, &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("result : %d", result);
            break;
        
        case '-':
            result = num1 - num2;
            printf("result : %d", result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("result : %d", result);
            break;

        case '/':
            result = num1 / num2;
            printf("result : %d", result);
            break;
    }

    

    return 0;

}