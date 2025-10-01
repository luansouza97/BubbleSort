#include <stdio.h>

//Procedimento para ordenar de forma crescente um vetor
void bubbleSortCrescente(int vetor[], int tamanho){
    int i, j, temp; // declaração de variáveis

    for (i = 0; i < tamanho - 1; i++){ // laço de repetição para identificar o ultimo elemento do array
        for (j = 0; j < tamanho - i - 1; j++){ // Laço de repetição para percorrer o array
            if (vetor[j] > vetor[j + 1]){ // Estrutura de decisão para comparar dois valores e decidir qual é o maior
                temp = vetor[j]; // variável temporária que irá receber o valor do maior elemento
                vetor[j] = vetor[j + 1]; // posição do vetor que recebe o menor valor
                vetor[j + 1] = temp; // posição do vetor que recebe o maior valor
            }
        }
    }
}

//Procedimento para ordenar de forma decrescente um vetor
void bubbleSortDecrescente(int vetor[], int tamanho){
    int i, j, temp; // declaração de variáveis

    for (i = 0; i < tamanho - 1; i++){ // laço de repetição para identificar o ultimo elemento do array
        for (j = 0; j < tamanho - i - 1; j++){ // Laço de repetição para percorrer o array
            if (vetor[j] < vetor[j + 1]){ // Estrutura de decisão para comparar dois valores e decidir qual é o maior
                temp = vetor[j]; // variável temporária que irá receber o valor do maior elemento
                vetor[j] = vetor[j + 1]; // posição do vetor que recebe o menor valor
                vetor[j + 1] = temp; // posição do vetor que recebe o maior valor
            }
        }
    }
}

// Procedimento para imprimir os valores vetor
void imprimeVetor(int vetor[], int tamanho){
    for (int i = 0; i < tamanho; i++){// Laço de repetição para percorrer o array
        printf("%d ", vetor[i]); // imprime o valor de cada posição do vetor
    }
}

int main(void) {

    int vetor[] = {6, 2, 7, 9, 1, 4, 3, 5, 0, 8}; // declaração do vetor

    int tam = sizeof(vetor) / sizeof(vetor[0]); // declaração de variável recebendo o tamanho do vetor

    printf("Vetor Original: ");

    // imprime vetor original
    imprimeVetor(vetor, tam);

    // ordena o vetor de modo crescente
    bubbleSortCrescente(vetor, tam);

    printf("\n\nOrdenação crescente: ");

    // imprime o vetor com ordenação crescente
    imprimeVetor(vetor, tam);

    // ordena o vetor de modo decrescente
    bubbleSortDecrescente(vetor, tam);

    printf("\n\nOrdenação decrescente: ");

    // imprime o vetor com ordenação crescente
    imprimeVetor(vetor, tam);

    printf("\n\n");

    return 0;
}
