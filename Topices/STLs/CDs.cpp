
/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>


#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] << " "; }
#define ll long long
#define tc int t; cin >> t; while (t--)
#define endl "\n"
#define loop(a, b, c) for (int i = a; i < (b); i += c)
#define all(vec) vec.begin(), vec.end()
#define mem(arr, value) memset(arr, value, sizeof(arr))
#define rall(vec) vec.rbegin(), vec.rend()
#define sz size()
#define Pair pair<int, int>
#define ld long double
#define ull unsigned long long
#define INF 2000000000
#define pi 3.141592
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define input freopen("stand.in", "r", stdin);
#define output freopen("stand.out", "w", stdout);
#define Glitch ios_base::sync_with_stdio(false); cin.tie(0);


ll mod = 1e9 + 7;

using namespace std;


const int N =10;
// Adjacency matrix
bool adjMatrixBool[N][N];
int adjMatrixInt[N][N]; /* wighted graph */

// Keep all edges for a given pair of nodes
map<pair<int, int>, int> adjMatrixMap;
// Imagine graph of 100000 nodes, but total number of edges is 50000!
vector<pair<int, int>> adjMatrixAll[N];

// Adjacency lists
vector<vector<int>> adjList1; // Boolean relation
vector<vector<pair<int, int>>> adjList2; // Cost relation (node, cost): Select 1 of multiple edges

// Edges List
struct edge {
    int from, to, w;

    edge(int from, int to, int w): from(from), to(to), w(w) {}

    bool operator<(const edge &e) const {
        return w < e.w; // Sort with smaller weight first
    }
};

vector<edge> edgeList;

struct Task {
    /*priority_queue<Task> pq;*/
    int priority;
    string value;

    // Overload the less-than operator for max-heap
    int timestamp;

    // Overload the less-than operator for a min-heap
    bool operator<(const Task& other) const {
        if (priority == other.priority) {
            return timestamp > other.timestamp;
        }
        return priority > other.priority;
    }
};
ll sum(ll x, ll y, ll mod) {
    return (x % mod + y % mod) % mod;
}
ll sub(ll x, ll y, ll mod) {
    return (x % mod - y % mod + mod) % mod;
}
ll mul(ll x, ll y, ll mod) {
    return (x % mod * y % mod) % mod;
}
ll factorial(ll n) {
    ll res = 1, i;
    for (i = 2; i <= n; i++)
        res = mul(i, res, mod);
    return res % mod;
}
ll cnt(ll num) {
    ll k = 0;
    while (num != 0) {
        int digit = num % 10; // get the rightmost digit
        num = num / 10;       // remove the rightmost digit
        if (digit == 0)
            k++;
        else
            return k;
    }
    return k;
}
long long fastPower(ll base, ll exponent) {
    long long result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = mul(result, base, mod) % mod;
        }
        base = mul(base, base, mod) % mod;
        exponent /= 2;
    }
    return result % mod;
}

vector<vector<ll>> compute2DPrefixSum(const vector<vector<ll>>& matrix) {
    ll n = matrix.size();
    if (n == 0) return {};
    ll m = matrix[0].size();

    vector<vector<ll>> prefixSum(n, vector<ll>(m, 0));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            prefixSum[i][j] = matrix[i][j];
            if (i > 0) prefixSum[i][j] += prefixSum[i - 1][j];
            if (j > 0) prefixSum[i][j] += prefixSum[i][j - 1];
            if (i > 0 && j > 0) prefixSum[i][j] -= prefixSum[i - 1][j - 1];
        }
    }

    return prefixSum;
}

ll getSubmatrixSum(const vector<vector<ll>>& prefixSum, int x1, int y1, int x2, int y2) {
    ll sum = prefixSum[x2][y2];
    if (x1 > 0) sum -= prefixSum[x1 - 1][y2];
    if (y1 > 0) sum -= prefixSum[x2][y1 - 1];
    if (x1 > 0 && y1 > 0) sum += prefixSum[x1 - 1][y1 - 1];

    return sum;
}

bool compare(const pair<string, int>& s1, const pair<string, int>& s2) {
    if (s1.second != s2.second) {
        return s1.second > s2.second;
    }
    return s1.first < s2.first;
}


int main() {

    Glitch;

    int n,m; cin>>n>>m;
    vector<int>vec1(n),vec2(m);

    set<int>set1,set2;

    for(int i = 0; i < n; i++) {
        cin >> vec1[i];
        set1.insert(vec1[i]);
    }

    for(int i = 0; i < m; i++) {
        cin >> vec2[i];
        set2.insert(vec2[i]);
    }

    set<int> intersection;

    set_intersection(set1.begin(), set1.end(),
                     set2.begin(), set2.end(),
                     inserter(intersection, intersection.begin()));

     cout<<intersection.size() <<endl;


    return 0;
}



