#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[50], comment[200], line[256];
    int rating;
    FILE *file;

    printf("===== C PROGRAMMING FEEDBACK =====\n");
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        printf("Could not read name.\n");
        return 1;
    }
    name[strcspn(name, "\n")] = '\0';

    printf("Rate the class (1-5): ");
    if (scanf("%d", &rating) != 1 || rating < 1 || rating > 5) {
        printf("Rating must be from 1 to 5.\n");
        return 1;
    }
    getchar(); /* Remove the newline left by scanf. */

    printf("Enter your feedback: ");
    if (fgets(comment, sizeof(comment), stdin) == NULL) {
        printf("Could not read feedback.\n");
        return 1;
    }
    comment[strcspn(comment, "\n")] = '\0';

    /* Write this student's answers to a text file. */
    file = fopen("feedback.txt", "w");
    if (file == NULL) {
        printf("Could not open feedback.txt for writing.\n");
        return 1;
    }
    fprintf(file, "Name: %s\nRating: %d/5\nComment: %s\n", name, rating, comment);
    fclose(file);

    file = fopen("feedback.txt", "r");
    if (file == NULL) {
        printf("Could not open feedback.txt for reading.\n");
        return 1;
    }
    printf("\nFeedback saved successfully!\n\nSaved feedback:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    fclose(file);
    printf("Thank you for sharing your feedback.\n");
    return 0;
}
