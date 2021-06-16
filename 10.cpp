#include <iostream>
#include <iomanip>

using namespace std; 

int main(){  
    double c, f;  
    while(cin >> c){  
        f = 1.8 * c + 32;  
        f = (int)(f*10+0.5)/10.0;
        cout << fixed << setprecision(1) << f << endl;
    }  
}
