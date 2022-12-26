#include "혜더.h"

#define MAX_QUEUE_SIZE 100
typedef int element;

typedef struct {
	element data[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;

void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

void init_queue(QueueType* q) {
	q->front = q->rear = 0;
}

void enqueue(QueueType* q, element item) {
	q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	q->data[q->rear] = item;
}

element dequeue(QueueType* q) {
	q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	return q->data[q->front];
}
int is_empty(QueueType* q) {
	return q->front == q->rear;
}

#define BUCKET 10
#define DIGITS 4

void radix_sort(int list[], int n) {
	int i, b, d, factor = 1;
	QueueType queues[BUCKET];
	for (b = 0; b < BUCKET; b++)init_queue(&queues[b]);

	for (d = 0; d < DIGITS; d++) {
		for (i = 0; i < n; i++) {
			enqueue(&queues[(list[i] / factor) % 10], list[i]);
		}
		for (b = i = 0; b < BUCKET; b++) {
			while (!is_empty(&queues[b]))
				list[i++] = dequeue(&queues[b]);
		}
		factor *= 10;
	}
}
#define SIZE 10
int main() {
	int list[SIZE];
	srand(time(NULL));
	
	for (int i = 0; i < SIZE; i++)
		list[i] = rand() % 100;
	
	radix_sort(list, SIZE);
	for (int i = 0; i < SIZE; i++)
		printf("%d ", list[i]);
	printf("\n");
}
