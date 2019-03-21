#include "stdio.h"
float body_index(float m, float h) {
    float I = m/(h*h);
    return I;
}
int main() {
    float rost;
    float ves;
    printf("Введите свой рост: ");
    scanf("%f", &rost);
                                            //int rost = rost_sm/100;
    printf("Введите свой вес: ");
    scanf("%f", &ves);

    if (body_index(ves, rost) <= 18.5) {          //если индекс меньше или равен 18,5, вывести
        printf("Ваш индекс массы тела низкий \n %f", body_index(ves, rost));
    } else if (body_index(ves, rost) >= 24.99) {
        printf("Ваш индекс массы тела высокий \n %f", body_index(ves, rost));
    } else {
        printf("Ваш индекс массы тела норм ^____^ %f", body_index(ves, rost));
    }
    printf("\n");
}