#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std; 
  
int main(){  
    int x, x2, x3;  
    while(cin >> x){  
        x2 = x*x;
        x3 = x*x*x;
        cout << x << " " << x2 << " " << x3 << endl;
    }  
}
