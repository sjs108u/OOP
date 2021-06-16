#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int min;
    double dollar;
    while(cin >> min){
        if(min <= 800)
            dollar = min * 0.9;
        else if(min < 1500)
            dollar = min * 0.9 * 0.9;
        else
            dollar = min * 0.9 * 0.79;
        cout << fixed << setprecision(1) << dollar << endl;
    }
}
