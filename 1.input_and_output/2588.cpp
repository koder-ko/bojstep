#include <iostream>
using namespace std;
main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a;
    cin >> b;
    cout << a * (b % 10) << "\n" << a * (b / 10 - (b / 100) * 10) << "\n" << a * (b / 100) << "\n" << a * b;
}