#include <stdio.h>
// we declare a stdbool header file for this particualar boolean operation
#include <stdbool.h>

int main(){
    bool isRaining = false;
    bool shouldGoOut = true;
    // here we use %d to display a boolean value
    // 0 is for False and 1 is for True vaues
    printf("%d", shouldGoOut);
    return 0;
}
