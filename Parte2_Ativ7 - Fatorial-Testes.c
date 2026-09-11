#include <stdio.h>
#include <assert.h>

int fatorial(int n)
{
    if (n < 0)
        return -1;

    int resultado = 1;

    for (int i = 1; i <= n; i++)
    {
        resultado = resultado * i;
    }

    return resultado;
}

int main()
{
    assert(fatorial(-1) == -1);
    assert(fatorial(0) == 1);
    assert(fatorial(1) == 1);
    assert(fatorial(2) == 2);
    assert(fatorial(3) == 6);

    printf("Todos os testes passaram!\n");

    return 0;
}