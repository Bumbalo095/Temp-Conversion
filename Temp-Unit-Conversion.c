#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)");
    scanf("%c", &unit);

    unit = toupper(unit);

    if(unit == 'C'){
        printf("\nEnter the temp is Celsius: ");
        scanf("%f", &temp);
        temp = (temp * 9 / 5) + 32;
        printf("\nThe temp in Farenheit is:\n %.1f", temp);
    }
    else if(unit == 'F'){
        printf("The temp is currently in Farenheit: ");
        scanf("%f", &temp);
        temp = ((temp - 32) * 5) / 9;
        printf("\nThe temp in Celsius is:\n %.1f", temp);
    }
    else{
        printf("\n%c \nis not a valid unit of measurement", unit);
    }

    system("\npause");

    return 0;

}