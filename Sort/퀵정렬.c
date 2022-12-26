#include "pgm.h"

int arr[MAX];
int partition(int list[], int left, int right) {
	int pivot, temp;
	int low = left, high = right+1;
	pivot = list[left];
	do {
		do {
			low++;
		} while (list[low] < pivot);
		do {
			high--;
		} while (list[high] > pivot);
		if (low < high)swap(&list[low], &list[high]);
	} while (low < high);
	swap(&list[left], &list[high]); 
	return high;
}

void quick_sort(int list[], int left, int right) {
	
	if (left < right) {
		int mid = partition(list, left,right);
		quick_sort(list, left, mid-1);
		quick_sort(list, mid + 1, right);

	}
}

int main() {
	clock_t  start, end;
	
	srand(time(NULL));
	int arr[MAX];
	create(arr, MAX);

	start = clock();
	quick_sort(arr, 0, MAX - 1);
	end = clock();
	print(arr, MAX);
	
	double dur = (double)(end - start) / CLOCKS_PER_SEC;
	printf("걸린 시간: %.2lf\n", dur);
}
