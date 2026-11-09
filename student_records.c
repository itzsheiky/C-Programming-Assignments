#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[50];
    char department[50];
    float marks;
};

int main(void)
{
    struct Student students[5];
    int count, i;

    printf("===== STUDENT RECORD SYSTEM =====\n");
    printf("Enter number of students (1-5): ");
    if (scanf("%d", &count) != 1 || count < 1 || count > 5) {
        printf("Enter a number from 1 to 5.\n");
        return 1;
    }
    getchar(); /* Remove the newline before reading a name. */

    /* Fill one array element for each student. */
    for (i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter Roll Number: ");
        if (scanf("%d", &students[i].rollNumber) != 1) {
            printf("Invalid roll number.\n");
            return 1;
        }
        getchar();

        printf("Enter Name: ");
        if (fgets(students[i].name, sizeof(students[i].name), stdin) == NULL) {
            printf("Could not read name.\n");
            return 1;
        }
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter Department: ");
        if (fgets(students[i].department, sizeof(students[i].department), stdin) == NULL) {
            printf("Could not read department.\n");
            return 1;
        }
        students[i].department[strcspn(students[i].department, "\n")] = '\0';

        printf("Enter Marks: ");
        if (scanf("%f", &students[i].marks) != 1) {
            printf("Invalid marks.\n");
            return 1;
        }
        getchar();
    }

    printf("\n===== STUDENT DETAILS =====\n");
    for (i = 0; i < count; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Department: %s\n", students[i].department);
        printf("Marks: %.2f\n", students[i].marks);
    }
    return 0;
}
