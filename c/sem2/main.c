#include<stdio.h>

int Zad1(int num, int num2){
    if(num < num2)
        printf("%d\n", num);
    else
        printf("%d\n", num2);
    int newNum, newNum2;
    scanf("%d %d", &newNum, &newNum2);
    if(newNum == 0)
        return 0;


    Zad1(newNum, newNum2);   
}
void Zad2(){
    int hour, minute;
    scanf("%d", &hour);
    scanf("%d", &minute);
    minute += 15;
    if(minute >= 60){
        minute -= 60;
        hour ++;
    }
    if(hour < 10){
        if(minute < 10)
            printf("0%d:0%d", hour, minute);
        else 
            printf("0%d:%d", hour, minute);
    }
    else {
        if(minute < 10)
            printf("%d:0%d", hour, minute);
        else
            printf("%d:%d", hour, minute);
    }
}

void Zad4(){
    int num;
    scanf("%d", &num);
    float bonus;

    if(num <= 100)
        bonus += 5;
    else if(num < 1000)
        bonus += num * 0.2;
    else 
        bonus += num * 0.1;

    if(num % 2 == 0)
        bonus ++;
    if(num % 10 == 5)
        bonus += 2;
    printf("%f\n", bonus);
    printf("%f", num + bonus);

}

void Zad11() {
    int n;
    scanf("%d", &n);

    int half = n / 2;

    printf("/");
    for (int i = 0; i < half - 1; i++) printf("^");
    printf("\\");

    for (int i = 0; i < n - 4; i++) printf("_");

    printf("/");
    for (int i = 0; i < half - 1; i++) printf("^");
    printf("\\\n");


    for (int row = 0; row < n - 2; row++) {
        printf("|");
        for (int i = 0; i < n * 2 - 4; i++) {
            if(i == n){
                for(int j = 0; j < d - 4; j++){
                    printf("_");
                    i++;
                }
            }
            printf(" ");
        }

        printf("|\n");
    }


    printf("\\");
    for (int i = 0; i < half - 1; i++) printf("_");
    printf("/");

    for (int i = 0; i < n - 4; i++) printf(" ");


    printf("\\");
    for (int i = 0; i < half - 1; i++) printf("_");
    printf("/\n")

}
int main(){
    //int num, num2;
    //scanf("%d %d", &num, &num2);
    //Zad1(num, num2);
    
    Zad11();
    
    
    return 0;
}
    
