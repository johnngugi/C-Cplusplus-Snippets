#include <stdio.h>
#include <stdlib.h>

void bubble_sort(int * array, int size);

int main()
{
    int size_array;
    int *array;

    printf("Enter size of array: \n");
    scanf("%d", &size_array);

    array = (int *) malloc(sizeof(int) * size_array);

    printf("Enter %d integers: \n", size_array);
    for (int i = 0; i < size_array; i++) {
        scanf("%d", (array + i));
    }

    bubble_sort(array, size_array);

    printf("Sorted list in ascending order:\n");

    for (int i = 0 ; i < size_array; i++)
        printf("%d\n", *(array + i));
 
  return 0;

}

void bubble_sort(int * array, int size)
{
    int swap;
    int condition;

    for (int i = 0 ; i < (size - 1); i++) {
        for (int j = 0 ; j < (size - i - 1); j++) {
            if (*(array + j) > *(array+ j +1)) {
                swap = *(array + j);
                *(array + j) = *(array + j + 1);
                *(array + j) = swap;
            }
        }
    }
}
