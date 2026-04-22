#include <stdio.h>
int main(){

    char operator;
    int num1;
    int num2;
    int result;


    printf("Enter your operator(+ - * /) : ");
    scanf("%c", &operator);

    printf("Enter num1 : ");
    scanf("%d" , &num1);
    
    printf("Enter num2 : ");
    scanf("%d" , &num2);

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