#include <stdio.h>

int main() {

    char studentname[50], studentid[50];

    int completedlabs, totallabs;
    float labcompletionpercentage;

    int quizmarks, assignmentmarks, projectmarks, totalacademicscore;

    printf("Enter your name: ");
    scanf("%s", studentname);

    printf("Enter your student ID: ");
    scanf("%s", studentid);

    printf("Enter number of completed labs: ");
    scanf("%d", &completedlabs);

    printf("Enter total number of labs: ");
    scanf("%d", &totallabs);
    printf("Enter quiz marks: ");
    scanf("%d", &quizmarks);
    printf("Enter assignment marks: ");
    scanf("%d", &assignmentmarks);

    printf("Enter project marks: ");
    scanf("%d", &projectmarks);

    labcompletionpercentage = (float)completedlabs * 100 / totallabs;
    totalacademicscore = quizmarks + assignmentmarks + projectmarks;

    printf("\n ==========STUDENT PERFORMANCE==========\n");
    printf("Name: %s\n", studentname);
    printf("Student ID: %s\n", studentid);
    printf("Lab completion percentage: %.2f%%\n", labcompletionpercentage);
    printf("Total academic score: %d\n", totalacademicscore);

    return 0;
}
