// https://vjudge.net/problem/UVA-615

#include <bits/stdc++.h>
using namespace std;

#define Fast ios::sync_with_stdio(false); cin.tie(nullptr);

map<int, vector<int>> vec;
map<int, int> indegree;
map<int, bool> visited;
map<int, bool> inPath;

bool hasCycle;

void DFS(int u) {
    visited[u] = true;
    inPath[u] = true;

    for (int v : vec[u]) {
        if (inPath[v]) {
            hasCycle = true;
            return;
        }
        if (!visited[v]) {
            DFS(v);
        }
    }

    inPath[u] = false;
}

void solve(int caseNum) {
    vec.clear();
    indegree.clear();
    visited.clear();
    inPath.clear();
    hasCycle = false;

    set<int> nodes;

    while (true) {
        int u, v;
        cin >> u >> v;
        if (u == -1 && v == -1) exit(0);
        if (u == 0 && v == 0) break;

        vec[u].push_back(v);
        indegree[v]++;
        nodes.insert(u);
        nodes.insert(v);
    }

    if (nodes.empty()) {
        cout << "Case " << caseNum << " is a tree." << endl;
        return;
    }

    for (int node : nodes) {
        if (indegree[node] > 1) {
            cout << "Case " << caseNum << " is not a tree." << endl;
            return;
        }
    }

    int root = -1;
    for (int node : nodes) {
        if (indegree[node] == 0) {
            if (root != -1) {
                cout << "Case " << caseNum << " is not a tree." << endl;
                return;
            }
            root = node;
        }
    }

    if (root == -1) {
        cout << "Case " << caseNum << " is not a tree." << endl;
        return;
    }

    DFS(root);

    if (hasCycle) {
        cout << "Case " << caseNum << " is not a tree." << endl;
        return;
    }

    for (int node : nodes) {
        if (!visited[node]) {
            cout << "Case " << caseNum << " is not a tree." << endl;
            return;
        }
    }

    cout << "Case " << caseNum << " is a tree." << endl;
}

int main() {
    Fast;
    int n = 1;
    while(true) {
        solve(n++);
    }
    return 0;
}