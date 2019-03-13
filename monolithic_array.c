//
// Created by Ivo Georgiev on 2019-03-07.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char * a;
    int b;
}monoArray;

void run_monolithic_array() {
    printf("Running monolithic array\n");

    // YOUR CODE HERE

    monoArray *array = (monoArray *) malloc(5*sizeof(monoArray));

    for (int b = 0; b < 5; b++) {
        array[b].a = 1;
        printf("%d\n", array[b].a);
    }

    free(array);


}