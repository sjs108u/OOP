#include <iostream>

using namespace std;

int main(){
    int x, y;
    while(cin >> x >> y){
        if(x*x + y*y <= 10000)
            cout << "inside\n";
        else
            cout << "outside\n";
    }
}
