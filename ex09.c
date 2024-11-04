#include <stdio.h>

int main(){
    int num;
    int sum = 0;
    int count = 0;
    while(num != -1){
        printf("Enter a number: ");
        scanf("%d", &num);
        if(num == -1){
            break;
        };
        sum += num;
        count++;
    };
    printf("The sum of the numbers: %d\n", sum);
    printf("The average of the numbers: %d\n", sum/count);
    printf("The number of numbers: %d\n", count);
    return 0;
}