//#include "Çì´õ.h"
//
//#define INDEX_SIZE 256
//typedef struct {
//	int key;
//	int index;
//}itable;
//
//itable index_list[INDEX_SIZE];
//
//int search_index(int list[],int key, int n) {
//	int i, low, high;
//
//	if (key<list[0] || key>list[n - 1])
//		return -1;
//	for (i = 0; i < INDEX_SIZE; i++) {
//		if (index_list[i].key <= key && index_list[i + 1].key > key)
//			break;
//	}
//	if (i == INDEX_SIZE) {
//		low = index_list[i - 1].index;
//		high = n;
//	}
//	else {
//		low = index_list[i].index;
//		high = index_list[i + 1].index;
//	}
//
//}