#include <stdio.h>

int main(){
    int num = 5;
    
    for(int i = 1; i <= 2*num-1; i++){
        for(int j = 1; j <= 2*num-1; j++){
            if(j <= 5 && i <= 5){
                if(j + i < 6){
                    printf(" ");
                }
                if(j + i == 6){
                    printf("%d",1);
                }
                if(j + i == 7){
                    printf("%d",2);
                }
                if(j + i == 8){
                    printf("%d",3);
                }
                if(j + i == 9){
                    printf("%d",4);
                }
                if(j + i == 10){
                    printf("%d",5);
                }

            }
            if(j > 5 && i <= 5){
                if(j - i == 0){
                    printf("%d",5);
                }
                if(j - i == 1){
                    printf("%d",4);
                }
                if(j - i == 2){
                    printf("%d",3);
                }
                if(j - i == 3){
                    printf("%d",2);
                }
                if(j - i == 4){
                    printf("%d",1);
                }
                if(j - i > 4){
                    printf(" ");
                }
            }
            if(j <= 5 && i > 5){
                if(i - j == 0){
                    printf("%d",5);
                }
                if(i - j == 1){
                    printf("%d",4);
                }
                if(i - j == 2){
                    printf("%d",3);
                }
                if(i - j == 3){
                    printf("%d",2);
                }
                if(i - j == 4){
                    printf("%d",1);
                }
                if(i - j > 4){
                    printf(" ");
                }
            }
            if(j > 5 && i > 5){
                if(j + i < 6){
                    printf(" ");
                }
                if(j + i == 14){
                    printf("%d",1);
                }
                if(j + i == 13){
                    printf("%d",2);
                }
                if(j + i == 12){
                    printf("%d",3);
                }


            }
        }
        printf("\n");
    }
    return 0;
}

/*
   1 2 3 4 5 6 7 8 9
1:         1  
2:       1 2 1
3:     1 2 3 2 1 
4:   1 2 3 4 3 2 1
5: 1 2 3 4 5 4 3 2 1
6:   1 2 3 4 3 2 1
7:     1 2 3 2 1  
8:       1 2 1
9:         1

so we have 1 at :
[1,5],
[2,4], [2,6],
[3,3], [3,7],
[4,2], [4,8]
*/









