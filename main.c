#include <stdio.h>

int main() {
    int i = 1;
    float f = 2.5;
    double d = 4;
    char c = 'd';

    printf("Moje wartości zmiennych: i = %i, f = %f, d = %f, c = %c \n",i,f,d,c);

    scanf("%i",&i);
    scanf("%f",&f);
    scanf("%lf",&d);
    scanf(" %c",&c);

    printf( "Moje wartości zmiennych: i = %i, f =%.1f, d = %.1f, c = %c \n",i,f,d,c);

    return 0;
}
