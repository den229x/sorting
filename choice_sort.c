#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    unsigned int size_of_arr;
    scanf("%d", &size_of_arr);

    int *arr = malloc(size_of_arr * sizeof(int));

    for (int i = 0; i < size_of_arr; ++i)
    {
        int tmp;
        scanf("%d", &tmp);

        arr[i] = tmp;
    }

    int min_element;
    for (int i = 0; i < size_of_arr - 1; ++i)
    {
        min_element = i;
        for (int j = i + 1; j < size_of_arr; ++j)
        {
            if (arr[min_element] > arr[j])
            {
                min_element = j;
            }
        }

        swap(&arr[i], &arr[min_element]);
    }

    for (int i = 0; i < size_of_arr; ++i)
    {
        printf("%d ", arr[i]);
    }

    printf("%c", '\n');

    free(arr);
}