// Question Title: “The College Topper in Every Subject”

// Story:
// At Assam Down Town University, the results for the semester exams have just been announced.
// The marks of 5 students in 3 subjects — Mathematics, Physics, and Computer Science — are stored in a 2D array.

// Each row of the array represents one student, and each column represents one subject.
// The class teacher wants to identify the highest marks in each subject so that those students can receive academic excellence awards.

// Write a program that reads the marks of 5 students in 3 subjects and prints the highest marks in each subject.

// Enter marks of 5 students in 3 subjects:

// Student 1: 70 80 90
// Student 2: 85 60 75
// Student 3: 88 92 70
// Student 4: 65 89 95
// Student 5: 78 85 88

// Highest marks in Mathematics: 88
// Highest marks in Physics: 92
// Highest marks in Computer Science: 95
#include <stdio.h>
int main() {
    int marks[5][3];
    int i, j;

    // Input marks for 5 students and 3 subjects
    printf("Enter the marks of 5 students in 3 subjects:");
    for(i = 0; i < 5; i++) {
        printf("Student %d:", i+1);
        for(j = 0; j < 3; j++) {
            printf("Subject %d: ", j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Ask user which subject
    int subj;
    printf("Enter subject number (1-3) to see highest marks: ");
    scanf("%d", &subj);

    // Find highest marks for the entered subject
    int highest = marks[0][subj-1];
    for(i = 1; i < 5; i++) {
        if(marks[i][subj-1] > highest)
            highest = marks[i][subj-1];
    }
    printf("Highest marks in Subject %d: %d", subj, highest);

    return 0;
}
