#include <stdio.h>
#include <math.h>

struct Point{
	int x;
	int y;
};

struct Student{
	char name[20];
	char l_name[20];
	float mark;
};
struct Class{
	int count_students;
	struct Student student[25];
};

struct Vehicle{
	char model[20];
	char type[20];
	int id;
};

void Zad1(){
	struct Vehicle car;
	struct Vehicle motorbike;
	struct Vehicle boat;
	struct Vehicle plane;

	scanf("%s", &car.model);
	scanf("%s", &motorbike.model);
	scanf("%s", &boat.model);
	scanf("%s", &plane.model);
}

void Zad2(){
	struct Class classes[5];
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 25; j++)
		{
			scanf("%s", &classes[i].student[j].name);
			scanf("%s", &classes[i].student[j].l_name);
			scanf("%f", &classes[i].student[j].mark);
			classes[i].count_students++;
		}
		
	}

	float sum = 0;
	for(int i = 0; i < classes[0].count_students; i++){
		sum += classes[0].student[i].mark;
	}
	for(int i = 0; i < classes[1].count_students; i++){
		sum += classes[1].student[i].mark;
	}

	printf("%f", sum / (classes[0].count_students + classes[1].count_students));
}

void Zad3(){
	struct Point points[3];
	for (int i = 0; i < 3; i++)
	{
		scanf("%d", &points[i].x);
		scanf("%d", &points[i].y);
	}

	for (int i = 0; i < 3; i++)
	{
		if(i == 2){
			printf("Distance: %f\n", sqrt(pow(points[0].x - points[2].x, 2) + pow(points[0].y - points[2].y, 2)));
		}
		else{
			printf("Distance: %f\n", sqrt(pow(points[i].x - points[i + 1].x, 2) + pow(points[i].y - points[i + 1].y, 2)));
		}
	}

}

int main(){
	Zad3();
	return 0;

}
