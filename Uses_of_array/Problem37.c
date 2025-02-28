/*

Question 37: Performing Binary Search After Sorting an Array

*/

#include <stdio.h>

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int binarySearch(int arr[], int size, int search)
{
    int left = 0;
    int right = size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == search)
        {
            return mid;
        }
        if (arr[mid] < search)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1; // search bulunamadı
}

int main()
{
    int sayilar[] = {40, 10, 30, 50, 20};
    int size = sizeof(sayilar) / sizeof(sayilar[0]);

    bubbleSort(sayilar, size);

    int search = 30;
    int sonuc = binarySearch(sayilar, size, search);

    if (sonuc != -1)
    {
        printf("search %d, dizinin %d. indexinde bulundu.\n", search, sonuc);
    }
    else
    {
        printf("search dizide bulunamadı.\n");
    }

    return 0;
}
