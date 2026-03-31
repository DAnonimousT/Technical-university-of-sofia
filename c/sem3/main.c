#include <stdio.h>

//Usables
void Print(int arr[], int n){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
void GetArr(int arr[], int n){
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}
void BubbleSort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void Zad1(){
    int n;
    scanf("%d", &n);
    int arr[n];
    GetArr(arr, n);

    BubbleSort(arr, n);

    int maxCount = 0;
    int index = 0;
    int length = 0;
    for(int i = 0; i < n - 1; i++){
        if(arr[i] == arr[i + 1]){
            length++;
        }
        else{
            if(length > maxCount){
                maxCount = length;
                index = i;
            }
            length = 0;
        }
    }
    for(int i = 0; i <= maxCount; i++){
        printf("%d ", arr[index]);
    }
}
void Zad2(){
    int n;
    scanf("%d", &n);
    int arr[n];
    GetArr(arr, n);
    
    for(int i = 0; i < n - 2; i++){
        if(!(arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])){
            printf("no");
            return;
        }
    }
    printf("yes");
}

void Zad3(){

    int n;
    scanf("%d", &n);
    int arr[n];

    GetArr(arr, n);
    
    for(int i = 0; i < n / 2; i++){
        int j = n - 1 - i;
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    Print(arr, n);
}
void Zad4(){

    int n;
    scanf("%d", &n);
    int arr[n];
    GetArr(arr, n);
    printf("Enter k: \n");
    int k;
    scanf("%d", &k);
    for (int j = 0; j < k; j++)
    {
        int temp = arr[n - 1];
        for(int i = n; i > 0; i--){
            arr[i] = arr[i - 1];      
        }
        arr[0] = temp;
    }
    Print(arr, n);
}

// 1 2 3 4 5 6 7; k = 4
// 5 2 3 4 1 6 7;



void Zad5(){
    int n;
    scanf("%d", &n);
    int arr[n];
    GetArr(arr, n);
    BubbleSort(arr, n);

    int k;
    scanf("%d", &k);
    printf("%d", arr[n - k]);
}

void Zad6(){

}

void Zad7(){
    int n;
    scanf("%d", &n);
    int arr[n];
    GetArr(arr, n);
    int neededSum;
    int tempSum = 0;
    int index = 0;
    int counter = 0;
    scanf("%d", &neededSum);

    for (int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            tempSum += arr[j];
            if(tempSum == neededSum){
                index = i;
                break;
            }
            else if(tempSum > neededSum){
                tempSum = 0;
                counter++;
                break;
            }
        }
        if(tempSum == neededSum){
            break;
        }
        tempSum = 0;
    }
    printf("no");
}

void Zad8(){
    int arr[20];
    GetArr(arr, 10);
    int counter = 10;
    printf("Enter number and index: \n");
    while (1)
    {
        if(counter >= 20){
            break;
        }
        int number;
        int index;
        scanf("%d %d", &number, &index);
        if(number == 0){
            break;
        }
        if(index <= counter){
            for (int i = counter; i > index; i--)
            {
                arr[counter] = arr[counter - 1];
            }
            arr[index] = number;
        }
        counter++;
    }
    Print(arr, counter);
}
void Zad9(){
    Zad1();
}

void Zad10(){
    int n;
    scanf("%d", &n);
    int arr[n];
    GetArr(arr, n);

    int x;
    scanf("%d", &x);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    printf("%d", count);
    
}

void Zad11(){
    int n = 5;
    int arr[n];
    GetArr(arr, n);

    int maxNum = arr[0];
    int minNum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxNum)
        {
            maxNum = arr[i];
        }
        if (arr[i] < minNum)
        {
            minNum = arr[i];
        }
    }
    printf("Max: %d, Min: %d", maxNum, minNum);
}

void Zad12(){
    int multiplier;
    scanf("%d", &multiplier);
    int n; 
    scanf("%d", &n);
    int arr[n];
    arr[0] = multiplier;
    for(int i = 1; i < n; i++){
        arr[i] = arr[i - 1] + multiplier;
    }

    Print(arr, n);
}


int main(){
    Zad4();

    return 0;
}