#include "stdio.h"
int some_function() {
    printf("Она съела кусок мяса, он её убил \n");
    printf("В землю закопал \n");
    printf("И надпись написал, что ");
    printf("у попа была собака, он её любил; \n");
    some_function();
}
int main() {
    printf("У попа была собака, он её любил; \n");
    some_function();
}
