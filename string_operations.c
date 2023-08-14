#include <stdio.h>

int main(){
    // String declaration
    char name[56];
    int age = 90;
    char id[33] = "LxSaeDa88997Sa6S89A";
    
    printf("My ID is %s", id);
    // get name
    printf("\nPlease enter your name\n");
    scanf("%s", &name);
    printf("Hello %s", name);

    // character declarations
    char letter0 = 'A';
    printf("The character added is %c", letter0);
    printf("\nThe character's value is %d", letter0);

    
    return 0;
}
