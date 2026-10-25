#include <stdio.h>

int main() {
    float gpa = 0.0f    ;
    char grade = '\0';
    char class_name[25] = "";

    printf("What is your GPA?\n");
    scanf("%f", &gpa);

    printf("What class are you in?\n");
    scanf("%s", &class_name);

    if (gpa >= 3.5) {
        grade = 'A';
        printf("Your GPA in %s is %.2f\n", class_name, gpa);
        printf("Great job, your grade is an %c\n", grade);
    }
    else if (gpa < 3.5 && gpa >= 2.5) {
        grade = 'B';
        printf("Your GPA in %s is %.2f\n", class_name, gpa);
        printf("Good job, your grade is a %c\n", grade);
    }
    else if (gpa < 2.5 && gpa >= 1.5) {
        grade = 'C';
        printf("Your GPA in %s is %.2f\n", class_name, gpa);
        printf("Your grade is a %c\n", grade);
    }
    else if (gpa < 1.5 && gpa > 1.0) {
        grade = 'D';
        printf("Your GPA in %s is %.2f\n", class_name, gpa);
        printf("Your grade is a %c\n", grade);
    }
    else if (gpa <= 1.0) {
        grade = 'F';
        printf("Your GPA in %s is %.2f\n", class_name, gpa);
        printf("Your grade is a %c\n", grade);
    }

    return 0;
}
