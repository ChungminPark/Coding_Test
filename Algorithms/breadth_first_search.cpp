#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Graph {
public:
    int N; // 정점의 개수
    vector<vector<int>> adj; // 인접 리스트

    // 생성자
    Graph(): N(0){}
    Graph(int n): N(n){
        adj.resize(n);
    }

    // 간선 추가 함수
    void addEdge(int i, int j) {
        adj[i].push_back(j);
        adj[j].push_back(i);
    }

    // 모든 리스트의 인접한 정점 번호 정렬
    void sortList() {
        for(int i=0; i<N; i++) {
            sort(adj[i].begin(), adj[i].end());
        }
    }

    void bfs() {
        vector<bool> visited(N, false); // 방문 여부를 저장하는 배열
        queue<int> Q;
        Q.push(0);
        visited[0] = true;

        while(!Q.empty()) {
            int curr = Q.front();
            Q.pop();
            cout << "Node " << curr << " visited" << endl;
            for(int next: adj[curr]) {
                if(!visited[next]) {
                    visited[next] = true;
                    Q.push(next);
                }
            }
         }
    }
};

int main() {
    Graph G(9);
    G.addEdge(0, 1);
    G.addEdge(0, 2);
    G.addEdge(1, 3);
    G.addEdge(1, 5);
    G.addEdge(3, 4);
    G.addEdge(4, 5);
    G.addEdge(2, 6);
    G.addEdge(2, 8);
    G.addEdge(6, 7);
    G.addEdge(6, 8);
    G.sortList();
    G.bfs();
}