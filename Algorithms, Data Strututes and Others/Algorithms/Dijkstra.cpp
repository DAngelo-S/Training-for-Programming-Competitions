#include<bits/stdc++.h>

using namespace std;

#define distance first
#define city second
#define movements second
#define MAXN 100100
#define INF 0x3f3f3f3f

int number_of_cities;
vector<pair<int, int>> distance;
vector<bool> visited;
vector<vector<pair<int, int>>> neighbors;

void dijkstra(int city_initial) {

	distance.resize(number_of_cities, make_pair(INF, 0));
	visited.resize(number_of_cities, false);
	
	distance[city_initial] = make_pair(0, 0);

	//por que estes argumentos???
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

	q.push(make_pair(0, city_initial));

	int current, next, dist;

	while(!q.empty()) {		
		current = q.top().city;
		q.pop();

		visited[current] = true;

		for(int i = 0; i < neighbors[current].size(); i++) {
			next = neighbors[current][i].city;
			dist = distance[current].distance;

			if(distance[next].distance > dist + neighbors[current][i].distance) {
				distance[next].distance = dist + neighbors[current][i].distance;
				distance[next].movements = distance[current].movements + 1;

				q.push(make_pair(distance[next].distance, next));
			}
		}

		while(!q.empty() && visited[q.top().city])
			q.pop();
	}
}

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int vertices;
	
	//cin >> number_of_cities >> vertices;
	number_of_cities = 7;

	neighbors.resize(number_of_cities);
	
	/*int x, y, p;
	for(int i = 0; i < vertices; i++) {
		cin >> x >> y >> p;
		neighbors[x-1].push_back(make_pair(p, y-1));
		neighbors[y-1].push_back(make_pair(p, x-1));
	}*/
	neighbors[0].push_back(make_pair(3, 1));
	neighbors[0].push_back(make_pair(1, 6));
	neighbors[1].push_back(make_pair(3, 0));
	neighbors[1].push_back(make_pair(4, 2));
	neighbors[1].push_back(make_pair(7, 3));
	neighbors[2].push_back(make_pair(4, 1));
	neighbors[2].push_back(make_pair(1, 3));
	neighbors[2].push_back(make_pair(9, 6));
	neighbors[3].push_back(make_pair(1, 2));
	neighbors[3].push_back(make_pair(7, 1));
	neighbors[3].push_back(make_pair(4, 6));
	neighbors[3].push_back(make_pair(8, 4));
	neighbors[4].push_back(make_pair(8, 3));
	neighbors[6].push_back(make_pair(1, 0));
	neighbors[6].push_back(make_pair(4, 3));

	dijkstra(0);

	int dist;

	for(int i = 0; i < distance.size(); i++) {
		dist = distance[i].distance;
		if (dist == INF)
			cout << "\u221E ";
		else
			cout << dist << " ";
	}
	cout << endl;
	
	for(int i = 0; i < distance.size(); i++)
		cout << distance[i].movements << " ";
	cout << endl;

	return 0;
}
