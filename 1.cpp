#include <bits/stdc++.h>
using namespace std;

#define forn(i,n) for(int i = 2; i < n; i++)

void fbn(int n){
    int first = 0, second = 1, ans = 0;
    cout << first << endl << second << endl;
    forn(i, n){
        ans = first + second;
        first = second;
        second = ans;
        cout << ans << endl;
    }
}
int main(){
    cout << "Hello, world!" << endl;
    int n; cin >> n;
    fbn(n);
    return 0;
}
