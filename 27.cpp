#include <iostream>

using namespace std;

int main(){
    int x, y ,temp, sum;
    while(cin >> x >> y){
        if(x > y){
            temp = x;
            x = y;
            y = temp;
        }
        sum = 0;
        for(int i = x ; i <= y ; i++){
            sum += i;
        }
        cout << sum << endl;
    }
}
