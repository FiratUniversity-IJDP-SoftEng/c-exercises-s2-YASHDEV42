#include <stdio.h>

int main(){
    int myNum[10];
    for(int i = 0; i < 10; i++){
        printf("%d. ", i + 1);
        scanf("%d", &myNum[i]);
    };
    int sum;
    for(int i = 0; i<10; i++){
        sum += myNum[i];
        printf("%d ", myNum[i]);
    };

    printf("\nThier sum: %d\n", sum);
    printf("Their average: %d\n", sum/10);

    return 0;
}
