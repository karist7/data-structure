//#include <stdio.h>
//#include <stdlib.h>
//
//#define TRUE 1
//#define FALSE 0
//
//#define MAX_VERTICES 100
//#define INF 1000L
//
//typedef struct GraphType {
//	int n;
//	int weight[MAX_VERTICES][MAX_VERTICES];
//}GraphType;
//
//int selected[MAX_VERTICES];
//int distance[MAX_VERTICES];
//
//int get_min_vertex(int n) {
//	int v, i;
//	for (i = 0; i < n; i++) {
//		if (!selected[i]) {
//			v = i;
//			break;
//		}
//	}
//	for (i = 0; i < n; i++)
//		if (!selected[i] && (distance[i] < distance[v])) v = i;
//	return(v);
//}
//
//void prim(GraphType* g, int s) {
//	int i, u, v;
//	
//	for (u = 0; u < g->n; u++)
//		distance[u] = INF;
//	distance[s] = 0;
//	for (i = 0; i < g->n; i++) {
//		u = get_min_vertex(g->n);
//		selected[u] = TRUE;
//		for (int i = 0; i < g->n; i++)
//			printf("%d ", selected[i]);
//		printf("\n");
//		for (int i = 0; i < g->n; i++)
//			printf("%d ", distance[i]);
//		printf("\n");
//		if (distance[u] == INF)return;
//		printf("���� %d �߰�\n", u);
//		for (v = 0; v < g->n; v++)
//			if (g->weight[u][v] != INF)
//				if (!selected[v] && g->weight[u][v] < distance[v])
//					distance[v] = g->weight[u][v];
//	}
//}
//int main() {
//	GraphType g = { 7,
<<<<<<< HEAD
//			{{0,29,INF,INF,INF,10,INF},
//			{29,0,16,INF,INF,INF,15},
//			{INF,16,0,12,INF,INF,INF},
//			{INF,INF,12,0,22,INF,18},
//			{INF,INF,INF,22,0,27,25},
//			{10,INF,INF,INF,27,0,INF},
//			{INF,15,INF,18,25,INF,0}}	
=======
//		{{0,8,INF,9,11,INF,INF},
//		{8,0,10,INF,INF,INF,INF},
//		{INF,10,0,5,INF,INF,INF},
//		{9,INF,5,0,17,12,INF},
//		{11,INF,INF,17,0,INF,8},
//		{INF,INF,INF,12,INF,0,5},
//		{INF,INF,INF,INF,8,5,0}}
>>>>>>> be4abde78ecf29d0f8aa4aa976519435720037f6
//
//	};
//	prim(&g, 0);
//}