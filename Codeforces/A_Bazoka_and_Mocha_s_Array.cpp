//   ___  _                     __  __           ____        _     _           _       
//  / _ \| |__   ___ _   _     |  \/  | ___     / ___| _   _| |__ (_) ___  ___| |_ ___ 
// | | | | '_ \ / _ \ | | |    | |\/| |/ _ \    \___ \| | | | '_ \| |/ _ \/ __| __/ __|
// | |_| | |_) |  __/ |_| |    | |  | |  __/     ___) | |_| | |_) | |  __/ (__| |_\__ \
//  \___/|_.__/ \___|\__, |    |_|  |_|\___|    |____/ \__,_|_.__// |\___|\___|\__|___/
//       ___  _      |___/          __  __          __        __|__/     _     _       
//      / _ \| |__   ___ _   _     |  \/  | ___     \ \      / /__  _ __| | __| |      
//     | | | | '_ \ / _ \ | | |    | |\/| |/ _ \     \ \ /\ / / _ \| '__| |/ _` |      
//     | |_| | |_) |  __/ |_| |    | |  | |  __/      \ V  V / (_) | |  | | (_| |      
//      \___/|_.__/ \___|\__, |    |_|  |_|\___|       \_/\_/ \___/|_|  |_|\__,_|      
//                       |___/                                                         
#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define deb(x) cout << #x << "=" << x << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, false, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define mod 1000000007
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
bool isSorted(queue<int>& q) {
    int n = q.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = q.front();
        q.pop();
        q.push(v[i]);
    }
    for (int i = 1; i < n; i++) {
        if (v[i] < v[i - 1]) {
            return false;
        }
    }
    return true;
}

bool canBeSortedByRotation(queue<int>& q) {
    int n = q.size();
    if (isSorted(q)) {
        return true;
    }
    for (int i = 0; i < n - 1; i++) {
        int front = q.front();
        q.pop();
        q.push(front);
        if (isSorted(q)) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        queue<int> q;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            q.push(x);
        }
        if (canBeSortedByRotation(q)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}