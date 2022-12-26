//#include "Çì´õ.h"
//
//double compare;
//double move;
//void inc_insertion_sort(int list[], int first, int last, int gap) {
//	int i, j, key;
//	for (i = first + gap; i <= last; i += gap) {
//		
//		key = list[i];
//		for (j = i - gap; j >= first && key < list[j]; j -= gap) {
//			compare++;
//			move++;
//			list[j + gap] = list[j];
//		}
//		move++;
//		list[j + gap] = key;
//	}
//	print(list, MAX);
//	printf("\n");
//}
//void shell_sort(int list[], int n) {
//	int i, gap;
//	for (gap = n / 2; gap > 0; gap /= 2) {
//		if ((gap % 2) == 0)gap++;
//		for (i = 0; i < gap; i++) {
//			inc_insertion_sort(list, i, n - 1, gap);	
//			
//		}
//		
//	}
//}
//int main() {
//	
//	int arr[MAX] = { 7,4,9,6,3,8,7,5 };
//	srand(time(NULL));
//	print(arr, MAX);
//	printf("\n");
//	shell_sort(arr, MAX);
//	print(arr, MAX);
//	
//}