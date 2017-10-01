#include <iostream>

using namespace std;

int main() {
    int apples, bugHour, totalHour, surplus;
    cin >> apples >> bugHour >> totalHour;
    if((totalHour / bugHour) >= apples){
        cout << 0 << endl;
    } else{
        if(totalHour % bugHour == 0){
            surplus = apples - totalHour / bugHour;
        } else{
            surplus = apples - totalHour / bugHour - 1;
        }
        cout << surplus << endl;
    }

    return 0;
}