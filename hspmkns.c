#include <stdio.h>
#include <stdlib.h>

int main(){

    double inp1, inp2, result;
    char opetr;

    printf("Enter a number: ");
    scanf("%lf", &inp1);
    printf("Enter a operator: ");
    scanf(" %c", &opetr);
    printf("Enter a second number: ");
    scanf("%lf", &inp2);

    if(opetr == '+'){
        result = inp1 + inp2;
        printf("Result: %f", result);
    }else if(opetr == '-'){
        result = inp1 - inp2;
        printf("Result: %f", result);
    }else if(opetr == '*'){
        result = inp1 * inp2;
        printf("Result: %f", result);
    }else if(opetr == '/'){
        if(inp2 == 0){
            printf("Number can't be divaded by 0\n");
            while(inp2 == 0){
                printf("Enter a second number: ");
                scanf("%lf", &inp2);
                break;
            }
            result = inp1 / inp2;
            printf("Result: %f", result);
        }else{
            result = inp1 / inp2;
            printf("Result: %f", result);
        }
    }

    return 0;
}