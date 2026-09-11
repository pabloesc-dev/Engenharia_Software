#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
Pense em 3 casos de teste (entrada, saída esperada).  
Execute o programa com os valores de entrada. 
Indique para cada caso de teste o resultado da execução (passou ou falhou).

Caso de teste 1
Entrada:
Saída esperada:
Resultado da execução:

Caso de teste 2
Entrada:
Saída esperada:
Resultado da execução:

Caso de teste 3
Entrada:
Saída esperada:
Resultado da execução:

*/

int main(){

    float a, b, c, delta, x1, x2;

	printf("Resolucao de equacao de 2o grau ax^2 + bx + c = 0\n\n");
        
    printf("Insira os valores dos coeficientes a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    
    printf("\n*******\n");
    
    delta = b*b - 4*a*c;
    
    if(delta == 0){
       x1 = (-1*b + sqrt(delta)) / 2*a;   
	   printf("\nA equacao %.2fx^2 + %.2fx + %.2f = 0 tem uma raiz real\n",a,b,c);
	   printf("x = %.2f\n\n", x1);  
    }
    
	if(delta > 0){
    	x1 = (-1*b + sqrt(delta) ) / 2*a;
        x2 = (-1*b - sqrt(delta) ) / 2*a;
        printf("\nA equacao %.2fx^2 + %.2fx + %.2f = 0 tem duas raizes reais\n",a,b,c);
		printf("x1 = %.2f", x1);
        printf("\nx2 = %.2f\n\n", x2);
	}
    
    if(delta < 0){
    	printf("\nNao existem raizes reais para a equacao %.2fx^2 + %.2fx + %.2f = 0\n\n",a,b,c);
	}

    system("pause");
    
    return(0);

}