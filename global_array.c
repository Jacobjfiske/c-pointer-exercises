//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <string.h>

struct students{
    char firstName[20];
    char lastName[20];
    char dateOfBirth[20];
    int age;
};
struct students arrayOfStudents[4] = {
        {"Daniel", "Wilder", "December3rd", 30},
        {"Echgelen", "Wilder", "January1st", 24},
        {"Joel", "Wilder", "January1st", 25},
        {"Jacob", "Wilder", "January1st", 19}


};

void run_global_array() {
    printf("Running global array\n");

    // YOUR CODE HERE

    for (int i = 0; i < 4; i++){
        strcpy(arrayOfStudents[i].firstName, "Totally" );
        strcpy(arrayOfStudents[i].lastName, "Killing");
        strcpy(arrayOfStudents[i].dateOfBirth, "It");
        printf("%s", arrayOfStudents[i].firstName);
        printf("%s", arrayOfStudents[i].lastName);
        printf("%s\n", arrayOfStudents[i].dateOfBirth);

    }
}