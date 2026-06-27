#include <stdio.h>

void bubbleSort(int a[], int n)
{
    int i, j, temp, swaps = 0;

    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                swaps++;
            }
        }
    }

    printf("Bubble Sort Swaps: %d\n", swaps);
}

void selectionSort(int a[], int n)
{
    int i, j, min, temp, swaps = 0;

    for(i = 0; i < n - 1; i++)
    {
        min = i;

        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
                min = j;
        }

        if(min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;

            swaps++;
        }
    }

    printf("Selection Sort Swaps: %d\n", swaps);
}

void insertionSort(int a[], int n)
{
    int i, key, j, swaps = 0;

    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
            swaps++;
        }

        a[j + 1] = key;
    }

    printf("Insertion Sort Swaps: %d\n", swaps);
}

int main()
{
    int n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], arr3[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
        arr3[i] = arr1[i];
    }

    bubbleSort(arr1, n);
    selectionSort(arr2, n);
    insertionSort(arr3, n);

    return 0;
}
