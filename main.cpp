#include <bits/stdc++.h>
#define endl            '\n'
#define ll              long long
#define double          long double
#define OOO             -9e18
#define OO              9e18
#define loop(i, in, n)  for (int (i) = (in); i <= (n); i++)
#define rloop(i, in, n) for (int (i) = (in); i >= (n); i--)
#define all(v)          v.begin(),v.end()
#define allr(v)         v.rbegin(),v.rend()
#define pi              3.141592653589793
#define se(n)           fixed<<setprecision(n)
#define cin(v)          for(auto&it:v)cin>>it;
#define ct(v)           for(auto it : v)cout<<it<<" ";
#define ve(n)           vector < ll > v(n);cin(v)
#define init            memset(dp, -1, sizeof dp);
#define tup             tuple < ll , ll , ll >
#define pii             pair < ll , ll >
using namespace std;

void Mentgreen() { ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); }

void solve() {

    string s, line;
    bool firstline = true;
    while (getline(cin, line)) {
        if (!firstline) s += "\n";
        s += line;
        firstline = false;
    }

    string result;
    int i = 0, index = 0, cnt = 0, n = (int)s.size();

    while (i < n) {
        if (isspace(s[i])) {
            result.push_back(s[i]);
            i++;
            continue;
        }
        int start = i;
        bool has_alphnum = false;
        while (i < n && !isspace(s[i])) {
            if (isalnum(s[i])) has_alphnum = true;
            i++;
        }
        string sub = s.substr(start, i - start);
        if (!has_alphnum) {
            result += sub;
            continue;
        }
        index++;
        bool by3 = (index % 3 == 0);
        bool by5 = (index % 5 == 0);
        if (by3 && by5) { result += "FizzBuzz"; cnt++; }
        else if (by3)   { result += "Fizz";     cnt++; }
        else if (by5)   { result += "Buzz";     cnt++; }
        else            { result += sub; }
    }
    cout << result << endl;
    cout << "count: " << cnt << endl;

}

signed main() {
    Mentgreen();
    int t = 1;
    // cin >> t;
    loop(i, 1, t) {
        solve();
    }
    return 0;
}