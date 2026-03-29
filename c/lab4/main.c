#include<stdio.h>
int n = 7;
void Zad1(){
    int arr[n] = {};
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
}

void Zad2(){
    int arr[n] = {};
    for(int i = 0; i < n; i++){
        scanf("%d", arr[i]);
    }
    int temp = arr[0];
    for(int i = 1;i < n; i++){
        if(arr[i] > temp)
            temp = arr[i];
    }
}

void Zad3(){
    int arr[n] = {};
    float sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum / n);
}
void Zad4(){
    int arr[n] = {};
    int sum = 0;
    float avr;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    avr = sum / n;

    int temp = avr - arr[0];
    for(int i = 1; i < n; i++){
        if(avr > arr[i]){
            if(temp > avr - arr[i])
                temp = avr - arr[i];
        }
        else {
            if(temp > arr[i] - avr)
                temp = arr[i] - avr;
        }
    }
    printf("%d", temp);

}

void Zad5(){
    int arr[n] = {};
    int sum = 0;
    float avr;
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }

    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}

void Zad6(){
    char string[20];
    scanf("%s", string);
    int count = 0;

    for(int i = 0; string[i] != '\0'; i++){
        count++;
    }
    printf("%d", count);
}

void Zad7(){
    char string[100];
    fgets(string, sizeof(string), stdin);

    int count = 1;
    for(int i = 0; i < sizeof(string); i++){
        if(string[i] == ' ')
            count++;
    }
    printf("%d\n", count);
}

void Zad8(){
    char string[50];
    int arr[26];
    scanf("%s", string);
    for(int i = 0; i < sizeof(string); i++){
        arr[i] = string[i] - 'a';
    }
    for(int i = 0; i < sizeof(string); i++){
        printf("Letter %c - %d", string[i], string[i] + 'a');
    }
}

void Zad9(){
    char string[50];
    for(int i = 0; i < sizeof(string); i++){
        if(string[i] >= 'a')
            string[i] = string[i] - 32;
    }
    printf("%s", string);
}

int main(){
	printf("Hello World!\n");
    	return 0;
}
