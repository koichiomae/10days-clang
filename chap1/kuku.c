#include <stdio.h>

int main(void) {
    int i, j;
    for (j = 0; j < 9; j++) {
        printf("%dの段", j+1);
        for (i = 0; i < 9; i++) {
            printf(
                " %d×%d=%2d", 
                j+1, i+1, (j+1)*(i+1)
            );
        }
        printf("¥n");
    }

    return 0;
}