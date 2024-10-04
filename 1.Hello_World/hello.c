#include <stdio.h>

int main() {
    //variables
    char name[] = "Devin Shrek";
    int age = 25;
    float height = 6.0;
    char initial = 'D';

    printf("Hello World\n");
    printf("This is testing escape sequences as well!\n");
    printf("Thank you for listening to my ted talk\n");
    printf("\t - \"%s\"\n", name);
    printf("\t - Age: %d \n", age);
    printf("\t - Height: %.1f \n", height);
    printf("\t - Initial: %c \n", initial);
    return 0;
}