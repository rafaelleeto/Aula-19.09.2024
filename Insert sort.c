#include <stdio.h>
//- Coloca o menor numero do vetor para o inicio

void insert_sort(int vetor[]){
    int auxiliar;
    int j;
    
    
    for (int i = 0; i<9;i++){
        for(int j = 0; j<9; i++){
            while (vetor[j]>vetor[j+1]){
                auxiliar=vetor[j];
                vetor[j]=vetor[j+1];
                vetor[j+1]=auxiliar;
                
            }

        }

    }

}
    

    





