#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
const int N = 2e5 + 10;
const int MOD = 1e9 + 7;
#define endl '\n'
#define PY puts("Yes")
#define PN puts("No")
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    set<int> st;
    int n;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        st.insert(v);
    }
    cout << st.size() << endl;
    for (auto it = st.begin(); it != st.end(); ++it)
        cout << *it << " ";
    return 0;
}
