
#include <bits/stdc++.h>
using namespace std;

#define MAXN 100
const int INF = 1e7;

int dis[MAXN][MAXN];
int Next[MAXN][MAXN];
void initialise(int V,
				vector<vector<int> >& graph)
{
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			dis[i][j] = graph[i][j];

			if (graph[i][j] == INF)
				Next[i][j] = -1;
			else
				Next[i][j] = j;
		}
	}
}


vector<int> constructPath(int u, int v)
{

	if (Next[u][v] == -1)
		return {};

	vector<int> path = { u };
	while (u != v) {
		u = Next[u][v];
		path.push_back(u);
	}
	return path;
}

// Standard Floyd Warshall Algorithm
// with little modification Now if we find
// that dis[i][j] > dis[i][k] + dis[k][j]
// then we modify next[i][j] = next[i][k]
void floydWarshall(int V)
{
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {

				// We cannot travel through
				// edge that doesn't exist
				if (dis[i][k] == INF
					|| dis[k][j] == INF)
					continue;

				if (dis[i][j] > dis[i][k]
									+ dis[k][j]) {
					dis[i][j] = dis[i][k]
								+ dis[k][j];
					Next[i][j] = Next[i][k];
				}
			}
		}
	}
}

void printPath(vector<int>& path)
{
	int n = path.size();
	for (int i = 0; i < n - 1; i++)
		cout << path[i] << " -> ";
	cout << path[n - 1] << endl;
}

int main()
{

	int V = 4;
	vector<vector<int> > graph
		= { { 0, 3, INF, 7 },
			{ 8, 0, 2, INF },
			{ 5, INF, 0, 1 },
			{ 2, INF, INF, 0 } };

	// Function to initialise the
	// distance and Next array
	initialise(V, graph);

	// Calling Floyd Warshall Algorithm,
	// this will update the shortest
	// distance as well as Next array
	floydWarshall(V);
	vector<int> path;
	cout << "Shortest path from 1 to 3: ";
	path = constructPath(1, 3);
	printPath(path);
	cout << "Shortest path from 0 to 2: ";
	path = constructPath(0, 2);
	printPath(path);

	cout << "Shortest path from 3 to 2: ";
	path = constructPath(3, 2);
	printPath(path);

	return 0;
}

