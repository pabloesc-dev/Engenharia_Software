    #include <stdio.h>
    #include <assert.h>

    int eh_primo(int n)
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return 0;
        }
        return -1;
    }
    int main()

    {
        int n;

        printf("Digite o numero para ver se e primo:");
        scanf("%d", &n);

        if (eh_primo(n) == -1)
        {
            printf("E primo o valor recebido");
        }
        else
        {
            printf("Nao e primo o valor recebido");
        }
        // casos de teste
        assert(eh_primo(2) == -1);
        assert(eh_primo(3) == -1);
        assert(eh_primo(4) == 0);
        assert(eh_primo(5) == -1);
        assert(eh_primo(9) == 0);
        printf("\n");
        printf("Todos passaram no teste");
    }