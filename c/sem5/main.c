#include<stdio.h>
#include<string.h>

void BubbleSort(int arr[], int n){
	int i, j, temp;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void Zad1(){

	float chair = 13.99;
	float table = 42;
	float cups = 5.98;
	float dishes = 21.02;
	
	int chairsCount = 0;
	int tablesCount = 0;
	int cupsCount = 0;
	int dishesCount = 0;
	char input[20];
	int people = 0;
	scanf("%d", &people);
	scanf("%s", input);
	while (strcmp(input, "PARTY!") != 0)
	{
		if (strcmp(input, "Table") == 0)
		{
			tablesCount += 8;
		}
		else if (strcmp(input, "Chair") == 0)
		{
			chairsCount++;
		}
		else if (strcmp(input, "Cups") == 0)
		{
			cupsCount += 6;
		}
		else if (strcmp(input, "Dishes") == 0)
		{
			dishesCount += 6;
		}
		scanf("%s", input);
	}
	printf("Total cost: %.2f\n", chair * chairsCount + (table / 8) * tablesCount + (cups / 6) * cupsCount + (dishes / 6) * dishesCount);

	if(tablesCount < people){
		printf("Tables: %d\n", (people - tablesCount) / 8 + 1);
	}
	if(chairsCount < people){
		printf("Chairs: %d\n", people - chairsCount);
	}
	if(cupsCount < people){
		printf("Cups: %d\n", (people - cupsCount) / 6 + 1);
	}
	if(dishesCount < people){
		printf("Dishes: %d\n", (people - dishesCount) / 6 + 1);
	}
}

struct Product
{
	char name[20];
	float price;
	int id;
};
struct Order
{
	char address[50];
	int productIds;
};
/*
// not working properly, need to fix the logic for storing products and orders and matching them...
void Zad2(){
	struct Product *products = (struct Product*)malloc(100 * sizeof(struct Product));
	struct Order *orders = (struct Order*)malloc(100 * sizeof(struct Order));
	if(products == NULL || orders == NULL){
		printf("Memory allocation failed\n");
		return;
	}
	
	char input[20];
	scanf("%s", input);
	while (strcmp(input, "END") != 0)
	{
		if (strcmp(input, "Product") == 0)
		{
			struct Product p;
			scanf("%s", p.name);
			scanf("%f", &p.price);
			scanf("%d", &p.id);
			if(p.id == orders[p.id].productIds){
				printf("Client %s ordered %s\n", orders[p.id].address, products[orders[p.id].productIds].name);
			}
			else 
			{
				if(p.id >= size_of(products)){
					products = (struct Product*)realloc(products, (p.id + 1) * sizeof(struct Product));
					products[p.id] = p;
				}
				else {
					products[p.id] = p;
				}
			}
		}
		else if (strcmp(input, "Order") == 0)
		{
			struct Order o;
			scanf("%s", o.address);
			scanf("%d", &o.productIds);
			if(o.productIds == products[o.productIds].id){
				printf("Client %s ordered %s\n", o.address, products[o.productIds].name);
			}
			else {
				if(o.productIds >= size_of(orders)){
					orders = (struct Order*)realloc(orders, (o.productIds + 1) * sizeof(struct Order));
					orders[o.productIds] = o;
				}
				else{
					orders[o.productIds] = o;
				}
			}
		}
	}
	
	free(products);
	free(orders);
}
*/
void Zad4(){
	FILE *fp;
	fp = fopen("file", "r");
	if (fp == NULL)
	{
		printf("Could not open file\n");
		return;
	}
	char line[100];
	fgets(line, sizeof(line), fp);
	printf("%s\n", line);
	int key = 0;
	printf("Key: ");
	scanf("%d", &key);
	char newFile[100];
	printf("File name: ");
	scanf("%s", newFile);

	for	(int i = 0; i < strlen(line); i++)
	{
		line[i] = line[i] + key;
	}

	FILE *newFp;
	newFp = fopen(newFile, "w");
	if (newFp == NULL)
	{		
		printf("Could not open file\n");
		return;
	}
	fwrite(&line, 1, sizeof(line), newFp);
	fclose(fp);
	fclose(newFp);

}

int main(){
	Zad4();
	return 0;	
}
