#include <stdio.h>
#include <stdlib.h>

int main(){
    int size = 5;
    int *arr = malloc(size * sizeof(int));
    for (int i = 0; i < size; i++){
        arr[i] = i + 1;
    }
    
    int index = 1;
    for (int i = index; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }

    int *temp = realloc(arr, (size - 1) * sizeof(int));
    if (temp == NULL){
        free(arr);
        return 1;
    }
    arr = temp;

    for (int i = 0; i < size - 1; i++){
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}