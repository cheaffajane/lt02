#include "stdio.h"
int some_function(int bottles_number) {
    printf("%d", bottles_number);
    printf(" bottles of beer on the wall, ");
    printf("%d", bottles_number);
    printf(" bottles of beer. \n");
    printf("Take one down, pass it around, ");
    bottles_number = bottles_number - 1;
    printf("%d", bottles_number);
    printf(" bottles of beer on the wall... \n");
    if (bottles_number > 0) {
        some_function(bottles_number);
    } else {
        printf("No more bottles of beer on the wall, no more bottles of beer. \n");
        printf("We've taken them down and passed them around; now we're drunk and passed out! \n");
    }
}
int main() {
    int xxx = 100;              //ибо фоловеры в инста насоветовали не хардкодить числа в коде
    some_function(xxx); 
}