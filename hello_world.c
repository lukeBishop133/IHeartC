#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *data = malloc(20 * sizeof(int));
    if (data == NULL) {
        fprintf(stderr, "Failed to allocate memory\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        data[i] = i;
    }
    int value = 5;
    printf("value = %d\n", value);

    printf("array =");
    for (int i = 0; i < 20; i++) {
        printf(" %d", data[i]);
    }
    printf("\n");

    free(data);
    return 0;
}
