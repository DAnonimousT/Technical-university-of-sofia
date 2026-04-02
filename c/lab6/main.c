#include <stdio.h>
#include <stdlib.h>

void Zad1(){
	int* arr = (int*)malloc(7 * sizeof(int));
	if(arr == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
    int sum = 0;
	for(int i = 0; i < 7; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("Sum: %d\n", sum);
	free(arr);
}

void Zad2(){
	int* arr = (int*)malloc(7 * sizeof(int));
	if(arr == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
	for(int i = 0; i < 7; i++){
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for(int i = 1; i < 7; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	printf("Max: %d\n", max);

	free(arr);
}

void Zad3(){
	int* arr = (int*)malloc(7 * sizeof(int));
	int sum = 0;
    if(arr == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }
	for(int i = 0; i < 7; i++){
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("Avg: %d\n", sum / 7);
	free(arr);
}

void Zad4(){
    int n;
    scanf("%d", &n);
	int row = n, col = n;
	int** arr = (int**)malloc(row * sizeof(int*));
    if(arr == NULL){
        printf("Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < row; i++)
    {
        arr[i] = (int*)malloc(col * sizeof(int));
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    //print
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Everything good this far\n");
    
    //main
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i][i]);
    }

    printf("\n");

    //second
    for(int i = 0, max = n -1; i < n; i++ , max--){
        printf("%d " , arr[i][max]);
    }

    printf("\n");

    //upper
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j > i)
                printf("%d ", arr[i][j]);
        }
        
    }
    
    printf("\n");

    //below
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i > j)
                printf("%d ", arr[i][j]);
        }
        
    }
    
    printf("\n");

	for (int i = 0; i < row; i++)
    {
        free(arr[i]);
    }
    free(arr);
}

int main() {
    Zad4();
    return 0;
}