#include <stdio.h>

int main(){
    
    char date[] = "22.25.2014";
    int day = (date[0] - '0') * 10 + (date[1] - '0');
    int month = (date[3] - '0') * 10 + (date[4] - '0');
    int year = (date[6] - '0') * 1000 + (date[7] - '0') * 100 + (date[8] - '0') * 10 + (date[9] - '0');
    printf("Day: %d, Month: %d, Year: %d\n", day, month, year);
    return 0;
}

