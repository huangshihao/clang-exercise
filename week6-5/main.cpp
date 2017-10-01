#include <iostream>

using namespace std;

int main() {
    int num[6];
    int maxOdd = 0,minEven = 100;
    for(int i = 0; i < 6; i++){
        cin >> num[i];
    }
    for(int i = 0; i < 6; i++){
        if(num[i] % 2 == 0 && num[i] < minEven){
            minEven = num[i];
        } else if(num[i] % 2 == 1 && num[i] > maxOdd){
            maxOdd = num[i];
        }
    }
    if(maxOdd - minEven < 0){
        cout << -(maxOdd - minEven) << endl;
    } else{
        cout << maxOdd - minEven << endl;
    }
    return 0;
}