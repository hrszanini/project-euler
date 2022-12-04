// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

// Cada novo termo na sequência de Fibonacci é gerado adicionando os últimos dois termos. Iniciando com 1 e 2, os 10 primeiros termos serão:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// Considerando os termos na sequência de Fibonacci que não excedam 4 milhões, encontre a soma dos termos pares.

#include <stdio.h>
#define LIMITE 4000000

int main(){
    int anterior = 1, atual = 2, soma = 2, contador = 0;

    do{
        int auxiliar = atual;
        atual += anterior;
        anterior = auxiliar;

        //A partir do 3º valor, os valores serão -> ímpar ímpar par, logo somamos a cada 3 valores para obtermos somente os pares.
        if(++contador == 3){
            soma += atual;
            contador = 0;
        }

    }while(atual <= LIMITE);
    
    printf("%d\n", soma);

    return 0;
}
