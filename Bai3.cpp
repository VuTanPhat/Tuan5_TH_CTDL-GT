#include <stdio.h>

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void interchangesort(int a[], int n){
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if(a[i] > a[j]) 
                Swap(a[i], a[j]);
}

void xuat(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
int main()
{
    int arr[] = {41,23,4,14,56,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    interchangesort(arr, n);
    printf("Sorted array: \n");
    xuat(arr, n);
    return 0;
}
