#include <stdio.h>

 int main () {
    int size;

    scanf("%d", &size);

    int arr[size];

    int num, menor, posicaoMenor;

    for (int i = 0; i < size; i++) {
        scanf("%i", &arr[i]);
    }    
    
    
    for (int i = 0; i < size; i++) {
        menor = arr[i];
        posicaoMenor = i;
        for (int j = i+1; j < size; j++){
            if (menor > arr[j]) {
                menor = arr[j];
                posicaoMenor = j;
            }
        }
        arr[posicaoMenor] = arr[i];
        arr[i] = menor;
        
    }
    
    for (int i = 0; i < size; i++) {
        printf("%i ", arr[i]);
    }    
    
    
    return 1;
}