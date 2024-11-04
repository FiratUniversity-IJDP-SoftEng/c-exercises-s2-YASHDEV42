#include <stdio.h>
int main(){
    
    for(int i = 0; i<5; i++){
        for(int j = 4; j>=0; j--){
            if(i + j == 4 || i == j){
                printf("*");
            }else{
                printf(" ");
            };
        };
        printf("\n");
    };
    return 0;
}