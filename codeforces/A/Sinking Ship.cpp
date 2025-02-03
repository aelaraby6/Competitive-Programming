/*In the end, we only regret the chances we didn’t take.*/

#include <bits/stdc++.h>
#define ll long long
#define via(vec, n) { for(int i = 0; i < n; i++) cin >> vec[i]; }
#define vout(vec, n) { for(int i = 0; i < n; i++) cout<<vec[i] <<endl; }

using namespace std;


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


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    priority_queue<Task> pq;
    int n;cin>>n;
    int current_timestamp = 0;
    while (n--) {
        string a, b;
        cin >> a >> b;
        int priority = 0;
        if (b == "rat") {
            priority = 1;
        } else if (b == "woman" || b == "child") {
            priority = 2;
        } else if (b == "man") {
            priority = 3;
        } else if (b == "captain") {
            priority = 4;
        }
        pq.push({priority, a, current_timestamp++});
    }

    while (!pq.empty()) {
        Task t = pq.top();
        cout <<  t.value << endl;
        pq.pop();
    }

    return 0;
}
