#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double x;
    while(cin >> x){
        x *= 1.6;
        x = (int)(x*10+0.5)/10.0;
        cout << fixed << setprecision(1) << x << endl;
    }
}
