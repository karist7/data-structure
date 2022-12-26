//#include "헤더.h"
//
//int sorted[MAX];
//
//void merge(int list[],int left, int mid, int right) {
//	int i, j, k, l;
//	i = left; j = mid+1; k = left;
//	while (i <= mid && j <= right) {
//		if (list[i] <= list[j])
//			sorted[k++] = list[i++];
//		else
//			sorted[k++] = list[j++];
//	}
//	if (i > mid)
//		for (l = j; l <= right; l++)
//			sorted[k++] = list[l];
//	else
//		for (l = i; l <= mid; l++)
//			sorted[k++] = list[l];
//	for (l = left; l <= right; l++)
//		list[l] = sorted[l];
//}
//
//void merge_sort(int list[], int left, int right) {
//	
//	int mid;
//	if (left < right) {
//		mid = (left + right) / 2;
//		merge_sort(list, left, mid);
//		merge_sort(list, mid + 1, right);
//		merge(list, left, mid, right);
//	}
//}
//
//int main() {
//	clock_t  start, end;
//	start = clock();
//	srand(time(NULL));
//	int arr[MAX];
//	create(arr, MAX);
//	
//	merge_sort(arr, 0, MAX - 1);
//	print(arr, MAX);
//	end = clock();
//	double dur = (double)((end - start)*1000) / CLOCKS_PER_SEC;
//	printf("소요시간: %.2lf\n", dur);
//}