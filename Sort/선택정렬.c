#include "pgm.h"

double move;
double compare;

void selection_sort(int arr[],int n) {
	int i,j,k,least,temp;
	for (i = 0; i < n-1; i++) {
		least = i;
		for ( j = i + 1; j < n; j++) {
			compare++;
			
			if (arr[j] < arr[least]) {
				least = j;
			}
		}
		swap(&arr[i], &arr[least]);
		move += 3;
		
	}
}
int main() {
	clock_t  start, end;
	start = clock();
	srand(time(NULL));
	int arr[MAX];
	create(arr, MAX);
	selection_sort(arr, MAX);
	print(arr, MAX);
	end = clock();
	double dur = (double)((end - start)*1000) / CLOCKS_PER_SEC;
	printf("소요시간: %.2lf\n", dur);
	printf("이동횟수: %lf, 비교횟수: %lf", move, compare);
}
