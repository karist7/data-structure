//#include<stdio.h>
//#include<stdlib.h>
//#include<limits.h>
//
//#define MAX_VERTICES 10
//#define INF 1000000
//
//typedef struct GraphType {
//	int n;
//	int weight[MAX_VERTICES][MAX_VERTICES];
//}GraphType;
//
//int distance[MAX_VERTICES];
//int found[MAX_VERTICES];
//
//int choose(int distance[], int n, int found[]) {
//	int i, min, minpos;
//	min = INT_MAX;
//	minpos = -1;
//	for (i = 0; i < n; i++) {
//		if (distance[i] < min && !found[i]) {
//			min = distance[i];
//			minpos = i;
//		}
//	}
//	return minpos;
//}
//void print_status(GraphType* g) {
//	static int step = 1;
//	printf("STEP %d: ", step++);
//	printf("distance: ");
//	for (int i = 0; i < g->n; i++) {
//		if (distance[i] == INF)
//			printf(" * ");
//		else
//			printf("%2d ", distance[i]);
//	}
//	printf("\n");
//	printf(" found: ");
//	for (int i = 0; i < g->n; i++)
//		printf("%2d ", found[i]);
//	printf("\n\n");
//}
//
//void shortest_path(GraphType* g, int start) {
//	int i, u, w;
//	for (i = 0; i < g->n; i++) {
//		distance[i] = g->weight[start][i];
//		found[i] = 0;
//	}
//	found[start] = 1;
//	distance[start] = 0;
//	for (i = 0; i < g->n - 1; i++) {
//		print_status(g);
//		u = choose(distance, g->n, found);
//		found[u] = 1;
//		for (w = 0; w < g->n; w++) {
//			if (!found[w])
//				if (distance[u] + g->weight[u][w] < distance[w])
//					distance[w] = distance[u] + g->weight[u][w];
//		}
//	}
//}
//int main() {
<<<<<<< HEAD
//	GraphType g = { 7,
//		{{0,29,INF,INF,INF,10,INF},
//		{29,0,16,INF,INF,INF,15},
//		{INF,16,0,12,INF,INF,INF},
//		{INF,INF,12,0,22,INF,18},
//		{INF,INF,INF,22,0,27,25},
//		{10,INF,INF,INF,27,0,5},
//		{INF,15,INF,18,25,INF,0}}
//		
//	};
=======
//	/*GraphType g = { 7,
//		{{0,8,INF,9,11,INF,INF},
//		{8,0,10,INF,INF,INF,INF},
//		{INF,10,0,5,INF,INF,INF},
//		{9,INF,5,0,17,12,INF},
//		{11,INF,INF,17,0,INF,8},
//		{INF,INF,INF,12,INF,0,5},
//		{INF,INF,INF,INF,8,5,0}}
//		
//	};*/
>>>>>>> be4abde78ecf29d0f8aa4aa976519435720037f6
//	shortest_path(&g, 0);
//	return 0;
//}