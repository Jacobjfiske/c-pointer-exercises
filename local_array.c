//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>

void run_local_array() {
    printf("Running local array\n");

    // YOUR CODE HERE


    struct car {
        char make[10];
        char model[10];
        int year;

    };

    struct car arrayofCars[2] = {
            {"Honda", "Civic", 2017},
            {"Ford", "F150", 2018}

    };

    for (int i = 0; i < 5; i++) {

    }

}