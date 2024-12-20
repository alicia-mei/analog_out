#include "mbed.h"
#include <math.h>
#include <stdio.h>

#define WAIT_TIME_MS 500 
AnalogOut saida(PTE30);
AnalogIn entrada(PTB0);

int main()
{
    float x = 0, y, resultado;
    int a;
    while(1){
        y = (1 + sin(x))/2;
        saida.write(y);
        x += 0.1;
        resultado = entrada.read_voltage();
        printf("%d \n", resultado);
    }
}
