#include <iostream>

using namespace std;

int main() {
    int n, a = 0, b = 0,c;
    cin >> n;


    for(int i = n; i > 100; i = i - 100){
        a++;
    }
    for(int i = n - a * 100; i > 10 ; i = i - 10){
        b++;
    }
    cout << a << endl;
    cout << b << endl;
    cout << n - a * 100 - b * 10 << endl;

    return 0;
}