#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
#include<time.h>

#define MAX 8

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
void print(int arr[], int n) {
	for (int k = 0; k < n; k++) {
		printf("%d ", arr[k]);
	}
	
	
}
void create(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 1000 + 1;
	}
}
