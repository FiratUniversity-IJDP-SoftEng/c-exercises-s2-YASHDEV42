#include <stdio.h>

int main(){
    for(int i = 1; i < 10; i++){
        printf("%d %d %d\n", i*5, 100-((i-1)*10+1), i);
    };
    return 0;
}