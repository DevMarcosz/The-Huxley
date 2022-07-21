#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double calcular_peso(double massa, double planeta){
    return massa*((planeta*100)/9.8)/100;
}

int main() {
    double massa;
    scanf("%lf", &massa);
    
    printf("%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n%.2lf\n", calcular_peso(massa, 273.42), calcular_peso(massa, 3.78), calcular_peso(massa, 8.6), calcular_peso(massa, 9.8), calcular_peso(massa, 3.72), calcular_peso(massa, 24.8), calcular_peso(massa, 10.5), calcular_peso(massa, 8.5), calcular_peso(massa, 10.8),calcular_peso(massa, 5.88),calcular_peso(massa, 1.67));
    
	return 0;
}