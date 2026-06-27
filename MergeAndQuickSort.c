#include <stdio.h>

// ---------- QUICK SORT ----------
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    int temp,j;
    for(j = low; j < high; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high)
{
    int pi;

    if(low < high)
    {
        pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// ---------- MERGE SORT ----------
void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[50], R[50];   // safe fixed size for Dev-C++
    int i, j, k;

    for(i = 0; i < n1; i++)
        L[i] = a[l + i];

    for(j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];

    i = 0;
    j = 0;
    k = l;

    while(i < n1 && j < n2)
    {
        if(L[i] <= R[j])
            a[k++] = L[i++];
        else
            a[k++] = R[j++];
    }

    while(i < n1)
        a[k++] = L[i++];

    while(j < n2)
        a[k++] = R[j++];
}

void mergeSort(int a[], int l, int r)
{
    int m;

    if(l < r)
    {
        m = (l + r) / 2;

        mergeSort(a, l, m);
        mergeSort(a, m + 1, r);

        merge(a, l, m, r);
    }
}

// ---------- MAIN ----------
int main()
{
    int n;
    int i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr1[50], arr2[50];   // fixed size for compatibility

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
        arr2[i] = arr1[i];
    }

    quickSort(arr1, 0, n - 1);
    mergeSort(arr2, 0, n - 1);

    printf("\nSorted using Quick Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr1[i]);

    printf("\nSorted using Merge Sort: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr2[i]);

    return 0;
}
