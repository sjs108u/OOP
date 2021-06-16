#include <iostream>

using namespace std;

int main(){
    int x, x1, x2, x3;
    while(cin >> x){
        x1 = x%10;
        x2 = ((x - x1)/10)%10;
        x3 = (x - (x % 100))/100;
        if(x1*x1*x1 + x2*x2*x2 + x3*x3*x3 == x)
        	cout << "Yes\n";
        else
            cout << "No\n";
    }
}
