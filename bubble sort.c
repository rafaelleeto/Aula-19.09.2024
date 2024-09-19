#include <stdio.h>

void booble_sort( int vetor[],int tamanho){

    int proximo = 0;

    for (int i = 0; i < tamanho; i++){

        for (int j = 0; j <(tamanho-1);j++){

            if (vetor[j] > vetor[j+1] ){
            
            proximo = vetor[j];
            vetor[ j ]=vetor[j + 1];
            vetor[j + 1]=proximo;

            }

        }

    }
}

int main (){
    int tam = 10;
    int vetor[10] = {10,9,8,7,6,5,4,3,2,1};
    booble_sort(vetor,10);
    
    for (int i = 0 ; i<10;i++){
        printf("%d\n",vetor[i]);
    }

    return 0;

}