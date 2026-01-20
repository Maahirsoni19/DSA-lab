#include <stdio.h>

// Define the structure
struct Student {
    char name[50];
    int rollNumber;
    char address[100];
};

int main() {
    struct Student students[5];  // Array of 5 students
    int i;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Address: ");
        scanf("%s", students[i].address);
    }

    // Display student details
    printf("\n--- Student Details ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name        : %s\n", students[i].name);
        printf("Roll Number : %d\n", students[i].rollNumber);
        printf("Address     : %s\n", students[i].address);
    }

    return 0;
}
