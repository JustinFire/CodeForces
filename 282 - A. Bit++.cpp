#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

void solve(){

    int x = 0, n;
    string ops;

    cin >> n;


    for (int i = 0; i < n; i++) {
        cin >> ops;
        if(ops[1] == '+') {
            x++;
        } else{
            x--;
        }
    }
    cout << x;

}

int main() {

    solve();

    return 0;
}
