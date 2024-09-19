#include <stdio.h>

void merge(int vetor[], int inicio1, int fim1, int inicio2,int fim2){
    int temp[50];
    int i,j,k;
    i=inicio1;
    j=inicio2;
    k=0;
    
    while ( i <= fim1 && j <= fim2){
        if(vetor[i] < vetor[j]){
            temp[k++]=vetor[i++];
        }
        else{
                temp[k++]=vetor[j++];
            }
    }
    while(j<=fim1){
        temp[k++] = vetor[j++];
    }
    
    for ( int i = inicio1, j=0; i <= fim2; i++,j++){
        vetor[i]= temp[j];

    }

}

void merge_sort(int vetor[], int inicio, int tam){
    if (inicio<tam){
        int meio =( inicio + tam )/2;
        merge_sort (vetor,inicio,meio);
        merge_sort(vetor,meio+1,tam);
        merge(vetor,inicio,meio,meio+1,tam);

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