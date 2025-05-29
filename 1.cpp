#include <bits/stdc++.h>
using namespace std;

int fbn(int n){
    if (n == 1 || n == 2) return 1;
    return (fbn(n - 2) + fbn(n - 1));
}
int main(){
    cout << "Hello, world!" << endl;
    int n; cin >> n;
    cout << fbn(n);
    return 0;
}
