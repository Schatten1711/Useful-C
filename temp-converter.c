#include <stdio.h>
#include <math.h>

float CToF(float initTemp){
    return (initTemp * 1.8) + 32;
}

float FToC(float initTemp){
    return (initTemp - 32) / 1.8;
}


int main() {
    int choice;
    float initTemp;

    printf("Temp Converter\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter Your Choice: ");
    scanf("%d", &choice);

    fflush(stdin);
    printf("Enter The Temperature: ");
    scanf("%f", &initTemp);


    if (choice == 1) {
        float final = CToF(initTemp);
        printf("Converted Temperature: %f\n", final);
    } else if (choice == 2) {
        float final = FToC(initTemp);
        printf("Converted Temperature: %f\n", final);
    } else {
        printf("Invalid Choice\n");
    }
}