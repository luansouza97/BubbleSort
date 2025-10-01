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
        printf("Musica %d - %d\n", i + 1, vetor[i]); // imprime o valor de cada posição do vetor
    }
}

int main(void) {
    
    int musica[10]; // declaração do vetor
    
    printf("Insira a quantidade de reproduções de cada música.\n");

    for (int i = 0; i < 10; i++){
        printf("\nMúsica %d: ", i + 1);
        scanf("%d", &musica[i]);
    }


    int tam = sizeof(musica) / sizeof(musica[0]); // declaração de variável recebendo o tamanho do vetor

    // ordena o vetor de modo crescente
    bubbleSortCrescente(musica, tam);

    printf("\n\nOrdem crescente das reproduções: ");

    // imprime o vetor com ordenação crescente
    imprimeVetor(musica, tam);

    // ordena o vetor de modo decrescente
    bubbleSortDecrescente(musica, tam);

    printf("\n\nOrdem decrescente das reproduções: ");

    // imprime o vetor com ordenação crescente
    imprimeVetor(musica, tam);

    printf("\n\n");

    return 0;
}
