#include "pgm.h"

int binary_search(int list[], int key, int left, int right) {
	printf("1");
	int mid = (left + right) / 2;
	if (left < right) {
		if (list[mid] > key) {
			return binary_search(list, key, left, mid - 1);
		}
		else if (list[mid] < key)
			return binary_search(list, key, mid + 1, right);
		else if (key == list[mid])
			return mid;
	}
	return -1;
}
int main() {
	int list[] = { 8,11,12,15,16,19,20,23,25,28,29,31,33,35,38,40 };
	printf("%d", binary_search(list, 28, 0, 15));
}
