#include <stdio.h>
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
        for(int i = 1; i <= num; i++){
            sum *= i;
        }
        printf("The factorial of %d is %d\n", num, sum);
    }else{
        printf("Invalid input\n");
    }
    
    
    return 0;
 }