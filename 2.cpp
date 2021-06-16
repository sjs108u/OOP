#include <iostream>
#include <iomanip>

using namespace std;

int main(){  
    float a, h;
    while(cin >> a >> h){  
    	cout << fixed << setprecision(1) << a*h/2 << endl; 
    } 
    return 0;  
} 
