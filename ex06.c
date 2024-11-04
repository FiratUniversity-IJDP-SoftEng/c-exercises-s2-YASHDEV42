#include <stdio.h>
int main() {
    printf("hello world\n");
    for(int i = 100; i > 50; i--) {
        if (i%3 == 0) {
            printf("%d\n", i);
        }
        
    }
    return 0;
}