#include <stdio.h>

#define SOLDADOS 3

int main()
{
    int arr[SOLDADOS];
    for (int i = 0; i < SOLDADOS; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
            return 1;
    }

    for (int i = 0; i < SOLDADOS; i++)
    {
        for (int j = i + 1; j < SOLDADOS; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i < SOLDADOS; i++)
    {
        if (i == SOLDADOS - 1) {
            printf("%d\n", arr[i]);
        }
        else {
            printf("%d ", arr[i]);
        }
    }
}