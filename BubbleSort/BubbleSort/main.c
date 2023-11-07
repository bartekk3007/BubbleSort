#include <stdio.h>
#include <stdlib.h>

void printArray(int* tab, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	printf("\n");
}

void swap(int* arr, int a, int b)
{
	int temp = arr[a];
	arr[a] = arr[b];
	arr[b] = temp;
}

void bubbleSort(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr, j, j + 1);
			}
		}
	}
}

int main(void)
{
	int arr[] = { 55, 13, 34, 21, 89, 5, 8, 144 };
	int size = sizeof(arr) / sizeof(*arr);

	bubbleSort(arr, size);

	printArray(arr, size);

	return 0;
}