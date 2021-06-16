#include <iostream>
#include <iomanip>

using namespace std;
  
int main(){  
    float up, down, h;  
    //float area;  
    while(cin >> up >> down >> h){
    	cout << "Trapezoid area:" << fixed << setprecision(1) << (up+down)*h/2 << endl;
    }
    return 0;
} 
