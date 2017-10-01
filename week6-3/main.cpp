#include <iostream>

using namespace std;

int main() {
    int h, r;
    cin >> h >> r;

    for(int i = 0; i <= 7000 ; i++){
        if((20 * 1000) <= 3.14159 * r * r * h * i){
            cout << i << endl;
            break;
        }
    }
    return 0;
}