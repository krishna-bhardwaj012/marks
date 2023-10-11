#include <stdio.h>

int main() {
    float marks;

    // Get the student's marks as input
    printf("Enter marks: ");
    scanf("%f", &marks);

    // Determine the grade based on the provided bins
    if (marks >= 85 && marks <= 100) {
        printf("Grade A\n");
    } else if (marks >= 70 && marks < 85) {
        printf("Grade B\n");
    } else if (marks >= 55 && marks < 70) {
        printf("Grade C\n");
    } else if (marks >= 40 && marks < 55) {
        printf("Grade D\n");
    } else {
        printf("Grade F\n");
    }

    return 0;
}
