/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long
#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }

using namespace std;


int n;
int binarySearch(const vector<int>& A, int left, int right, int X) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (A[mid] == X) return mid;
    if (A[mid] > X) return binarySearch(A, left, mid - 1, X);
    return binarySearch(A, mid + 1, right, X);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    vector<int> vec(n);
    via(vec, n);

    int q;
    cin >> q;
    while (q--) {
        int x;
        cin >> x;
        int res =binarySearch(vec,0,n-1,x);
        (res == -1) ? cout<<-1<<endl : cout<<res+1 << endl;
    }

    return 0;
}
