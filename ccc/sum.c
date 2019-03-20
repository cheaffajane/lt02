#include "stdio.h"
int sum(int argu_ment1, int argu_ment2) {
     int result = argu_ment1 + argu_ment2;
     return result;
}
int main() {
int some_number1 = 12;
int some_number2 = 15;  
int itogo = sum(some_number1, some_number2);
printf("result is %d", itogo);
return 0;
}