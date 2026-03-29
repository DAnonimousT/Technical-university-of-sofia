#include<stdio.h>

int Zad1(){
	char c;
	scanf("%c", &c);
	printf("%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c);
	printf("%c        %c\n", c, c);
	printf("%c        %c\n", c, c);
	printf("%c        %c\n", c, c);
	printf("%c%c%c%c%c%c%c%c%c%c\n", c, c, c, c, c, c, c, c, c, c);

	return 0;
}

void Zad2(){
	int number;
	scanf("%d", &number);

	printf("in mm %f", number * 2.54 * 10);
	printf("in sm %f", number * 2.54);
	printf("in dm %f", number * 2.54 / 10);
	printf("in m %f", number * 2.54 / 100);
}

void Zad3(){
	int celzii;
	scanf("%d", &celzii);

	printf("%d", (celzii * 9 /5 ) + 32);
}

void Zad4(){
	int gradus;
	scanf("%d", &gradus);

	printf("%d", (3.14 * 180) * gradus);
}

void Zad5(){
	int money;
	scanf("%d", &money);

	printf("Money in usd %f", money * 0.58);
	printf("Money in euro %f", money * 0.51);
	printf("Money in paund %f", money * 0.44);
}
void Zad9(){
	float w, h;
	scanf("%f %f", &w, &h);
	w = w * 100;
	h = h * 100;
	w -= 1;
	int deskForW = w / 120;
	int deskForH = h / 70;
	printf("%d", (deskForH * deskForW) - 3);


}
void Zad10(){
	float frutPrice, vegiPrice;
	int frutCount, vegiCount;
	scanf("%f", &vegiPrice);
	scanf("%f", &frutPrice);
	scanf("%d", &vegiCount);
	scanf("%d", &frutCount);

	float vegiAmount = (vegiCount * vegiPrice) / 1.95;
	float frutAmount = (frutCount * frutPrice) / 1.95;

	printf("%f", vegiAmount + frutAmount);
}
void Zad11(){
	int garden, plochkaW, plochkaL, benchM, benchO;
	scanf("%d %d %d %d %d", &garden, &benchM, &benchO, &plochkaW, &plochkaL);

	int gardenArea = garden * garden;
	float plochkaArea = plochkaL * plochkaW;
	int benchArea = benchM * benchO;
	gardenArea = gardenArea - benchArea;
	float needed = gardenArea / plochkaArea;
	float time = needed * 0.2;

	printf("%f", time);

}


int main(){


	Zad11();
	return 0;
}