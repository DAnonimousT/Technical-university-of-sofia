#include <stdio.h>
#include <stdlib.h>

enum CourseType {
    Programming,
    Design
};

struct Course {
    int id;
    char name[128];
    char date[11];
    float price;
    int count;
    enum CourseType type;
};

struct Student {
    char names[80];
    int facultyNumber;
    int CoursesCount;
    int courseIds[10];
};

void removeCoure(struct Course *course) {
    course->id = 0;
    course->name[0] = '\0';
    course->date[0] = '\0';
    course->price = 0.0f;
    course->count = 0;
    course->type = 0;

}
void Zad2(struct Course *courses, int count, char type[], char date[11]) {
    
    for (int i = 0; i < count; i++) {
        if (courses[i].type == Programming && strcmp(type, "Programming") == 0) {
            removeCoure(&courses[i]);
        } else if (courses[i].type == Design && strcmp(type, "Design") == 0) {
            printf("%s\n", courses[i].name);
        }
    }
    for (int i = 0; i < count; i++){
        

    }

}

int main() {

    FILE *fp = fopen("courses.bin", "rb");

    if (fp == NULL) {
        return 1;
    }

    int coursesCapacity = 2;
    int count = 0;

    struct Course *courses = malloc(sizeof(struct Course) * coursesCapacity);

    if (courses == NULL) {
        fclose(fp);
        return 1;
    }

    while (fread(&courses[count], sizeof(struct Course), 1,fp) == 1) {

        // Grow array if full
        if (count >= coursesCapacity) {

            coursesCapacity *= 2;

            struct Course *newPtr = realloc(courses, sizeof(struct Course) * coursesCapacity);

            if (newPtr == NULL) {

                free(courses);
                fclose(fp);

                return 1;
            }

            courses = newPtr;
        }
        count++;
    }

    fclose(fp);

    free(courses);

    return 0;
}