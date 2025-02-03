/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long
#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] <<endl; }

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

void merge(vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    vector<int> leftArr(n1), rightArr(n2);

    for (int i = 0; i < n1; i++)
        leftArr[i] = arr[left + i];
    for (int i = 0; i < n2; i++)
        rightArr[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            i++;
        } else {
            arr[k] = rightArr[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = leftArr[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = rightArr[j];
        j++;
        k++;
    }
}

void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        merge(arr, left, mid, right);
    }
}





int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,t; cin>>t;
    while(t--) {
        cin>>n;
        vector<ll>a(n),b(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) cin >> b[i];
        ll ans = a.back();
        for(int i= 0;i< n-1;i++) {
            ans+=max(0LL,(a[i]-b[i+1]));
        }
        cout<<ans<<endl;
    }

    
    return 0;
}