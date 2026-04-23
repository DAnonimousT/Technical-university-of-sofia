#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[], int n) {
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-i-1; j++) {
			if (arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

int Zad1(){
	FILE *fp;
	fp = fopen("zad1.bin", "wb");
	if(fp == NULL){
		printf("Error opening file!\n");
		return 1;
	}
	int n = 5;
	if(fwrite(&n, sizeof(int), 1, fp) != 1){
		printf("Error writing to file!\n");
		fclose(fp);
		return 1;
	}

	for(int i = 0; i < n; i++){
		int num = rand();
		if(fwrite(&num, sizeof(int), 1, fp) != 1){
			printf("Error writing to file!\n");
			fclose(fp);
			return 1;
		}
	}
	fclose(fp);

	fp = fopen("zad1.bin", "rb");
	if(fp == NULL){
		printf("Error opening file!\n");
		return 1;
	}
	if(fread(&n, sizeof(int), 1, fp) != 1){
		printf("Error reading from file!\n");
		fclose(fp);
		return 1;
	}
	int count[n];

	if(fread(count, sizeof(int), n, fp) != n){
		printf("Error reading from file!\n");
		fclose(fp);
		return 1;
	}
	int even = 0;
	int odd = 0;
	for(int i = 1; i < n; i++){
		if(count[i] % 2 == 0){
			even++;
		} else {
			odd++;
		}
	}
	printf("Even numbers: %d\n", even);
	printf("Odd numbers: %d\n", odd);
	fclose(fp);

	BubbleSort(count, n);
	printf("Sorted numbers: ");
	for(int i = 0; i < n; i++){
		printf("%d ", count[i]);
	}
	printf("\n");
	return 0;
}
int Zad2(){
	FILE *fp;
	fp = fopen("zad2.bin", "wb");
	if(fp == NULL){
		printf("Error opening file!\n");
		return 1;
	}
	int n = 10;

	for(int i = 0; i < n; i++){
		int num = rand();
		if(fwrite(&num, sizeof(int), 1, fp) != 1){
			printf("Error writing to file!\n");
			fclose(fp);
			return 1;
		}
	}
	fclose(fp);

	fp = fopen("zad2.bin", "rb");
	if(fp == NULL){
		printf("Error opening file!\n");
		return 1;
	}

	fseek(fp, 0, SEEK_END);
	long fileSize = ftell(fp);
	n = fileSize / sizeof(int);
	rewind(fp);

	int count[n];

	if(fread(count, sizeof(int), n, fp) != n){
		printf("Error reading from file!\n");
		fclose(fp);
		return 1;
	}
	int even = 0;
	int odd = 0;
	for(int i = 1; i < n; i++){
		if(count[i] % 2 == 0){
			even++;
		} else {
			odd++;
		}
	}
	printf("Even numbers: %d\n", even);
	printf("Odd numbers: %d\n", odd);
	fclose(fp);

	BubbleSort(count, n);
	printf("Sorted numbers: ");
	for(int i = 0; i < n; i++){
		printf("%d ", count[i]);
	}
	printf("\n");
	return 0;

}

int main(){
	Zad2();
	return 0;
}
