#include <iostream>

using namespace std;

int main(){
    int x, y, tmp;
    while(cin >> x >> y){
        while(x % y != 0){
            tmp = y;
            y = x % y;
            x = tmp;
        }
        cout << y << endl;
    }
}
