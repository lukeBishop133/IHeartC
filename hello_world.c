#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int add(int a, int b);


int main(void)
{
    srand(time(NULL));
    int *data = malloc(20 * sizeof(int));
    if (data == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        data[i] = 100 + (rand() % 101);
    }
    int value = 5;
    printf("value = %d\n", value);

    printf("array =");
    for (int i = 0; i < 20; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");
    free(data);

    int sum = add(6 + 6);
    printf("The sum of 5 and 10 is %d \n", sum);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}

