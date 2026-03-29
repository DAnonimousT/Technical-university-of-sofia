#include <stdio.h>

void Zad1(){
    int x = 0;
    int * p = &x;
    printf("x = %d\n", x);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);
}

void Zad2(int * a, int * b){
    int x = *a;
    int y = *b;

    printf("%d", x + y);
    printf("%d", x - y);
    printf("%d", x * y);
    printf("%d", x / y);
}

void Zad3(){
    int n;
    scanf("%d", &n);
    int arr[n][n];

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


    //main
    for(int i = 0; i < n; i++){
        printf("%d, ", arr[i][i]);
    }


    //second
    for(int i = 0, max = n -1; i < n; i-- , max--){
        printf("%d", arr[i][max]);
    }


    //upper
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(j > i)
                printf("%d", arr[i][j]);
        }
        
    }
    
    
    //below
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i > j)
                printf("%d", arr[i][j]);
        }
        
    }

    
}

int main() {
    
    return 0;
}