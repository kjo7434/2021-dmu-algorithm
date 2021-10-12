#include <stdio.h>
#include <stdbool.h>

bool visited[9];

int graph[9][3] = { {0}, {2,3,8}, {1,7}, {1,4,5}, {3,5}, {3,4}, {7}, {2,6,8}, {1,7} };
void dfs(int x) {
	int node;
	visited[x] = true;
	printf("%d ", x);
	
	for (int j = 0; j < 3; j++) {
		node = graph[x][j];
		if (!visited[node]) {
			dfs(node);
		}
	}
}
int main(void) {
	dfs(1);
}