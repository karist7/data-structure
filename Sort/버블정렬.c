#include "헤더.h"

double compare;
double move;

void bubble_sort(int arr[], int n) {
	for (int i = n-1; i > 0; i--) {
		
		for (int j = 0; j <i; j++) {
			compare++;
			move++;
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j+1], & arr[j]);
				move+=3;
			}
		}
	}
}

int main() {
	
	clock_t  start, end;
	start = clock();
	srand(time(NULL));
	int arr[MAX];
	create(arr, MAX);
	bubble_sort(arr, MAX);
	print(arr, MAX);
	end = clock();
	double dur = (double)((end - start)*1000) / CLOCKS_PER_SEC;
	printf("소요시간: %.2lf\n", dur);
	
	printf("이동횟수: %lf, 비교횟수: %lf", move, compare);
}
