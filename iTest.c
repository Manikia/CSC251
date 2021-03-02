#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int j;
    int k;

    // printf("\nShows ++j\n");

    // printf(" %d\n", j);
    // printf(" %d\n", k);

    // for (j = 0; j < 5; ++j)
    // {
    //     printf(" %d\n", j);
    // }

    // printf("\nShows k++\n");

    // for (k = 0; k < 5; k++)
    // {
    //     printf(" %d\n", k);
    // }

    for (int i = 0; ++i < 10;)
        printf(" %d\n", i);

    return EXIT_SUCCESS;
}