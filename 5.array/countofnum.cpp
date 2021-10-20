#include <iostream>
using namespace std;

main(){
    ios :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int numArr[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int a, b, c, n;

    cin >> a >> b >> c;

    n = a * b * c;

    for(int i = 1; n / i != 0; i *= 10){
        numArr[(n / i) % 10] += 1;
    }
    for(int j = 0; j < 10; j++){
        cout << numArr[j] << "\n";
    }
}
