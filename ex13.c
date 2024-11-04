#include <stdio.h>

int factorial(int num){

    if(num == 0){
        return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int num;
    int sum = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num < 0){
        printf("The number must be positive\n");
        return 0;
    }else if(num == 0){
        printf("The factorial of 0 is 1\n");
        return 0;
    }else if(num > 0){
        int sum = factorial(num);
        printf("The factorial of %d is %d\n", num, sum);
    }else{
        printf("Invalid input\n");
    }
    
    return 0;
}