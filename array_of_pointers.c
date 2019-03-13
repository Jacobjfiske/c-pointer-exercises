//
// Created by Ivo Georgiev on 2019-03-07.
//
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *a;
    int b;
}pointerArray;

void run_array_of_pointers() {
    printf("Running array of pointers\n");

    // YOUR CODE HERE

    pointerArray **array = (pointerArray **) malloc(5*sizeof(pointerArray *));

    for (int b = 0; b < 5; b++) {
        array[b]->a = 1;
      //  printf("%d\n", array[b]->a);
    }

    free(array);

    for (int b = 0; b < 5; b++) {
        free(array[b]);
        array[b] = NULL;
    }



}


