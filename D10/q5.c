//wap to sort an array of n doubles in descending orders using quick sort
#include <stdio.h>
int partition(double ar[], int low, int high){
    int pivot = ar[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (ar[j] >= pivot){
            i++;
            double temp = ar[i];
            ar[i] = ar[j];
            ar[j] = temp;
        }
    }
    double temp = ar[i + 1];
    ar[i + 1] = ar[high];
    ar[high] = temp;
    return i + 1;
}
void quickSort(double arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
 
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int main(void){
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    double arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d: ", i);
        scanf("%lf", &arr[i]);
    }
    quickSort(arr, 0, n - 1);
    printf("The sorted array is: ");
    for (int i = 0; i < n; i++)
    {
        printf("%.2lf ", arr[i]);
    }
}