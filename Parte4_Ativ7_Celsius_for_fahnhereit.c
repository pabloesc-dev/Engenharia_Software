#include <stdio.h>
#include <assert.h>

double celsius_para_fahrenheit(double celsius)
{

    return celsius * 9.0 / 5.0 + 32.0;
}
int main()
{

    double temp_celsius;

    // Casos de teste
    assert(celsius_para_fahrenheit(0) == 32);
    assert(celsius_para_fahrenheit(100) == 212);
    assert(celsius_para_fahrenheit(-40) == -40);

    printf("Todos os testes passaram!\n");

    return 0;
}