#include <stdio.h>
#define MAX_STUDENTS 100
#define NAME_LENGTH 50

// Structure to store student data
struct Student {
    char name[NAME_LENGTH];
    float grade;
};

// Function to print students with grade > 5.0
void printHighGrades(struct Student students[], int count) {
    printf("Students with grade greater than 5.0:\n");
    for (int i = 0; i < count; i++) {
        if (students[i].grade > 5.0) {
            printf("%s\n", students[i].name);
        }
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter grade of student %d: ", i + 1);
        scanf("%f", &students[i].grade);
    }

    printHighGrades(students, n);

    return 0;
}
