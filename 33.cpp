#include <iostream>

using namespace std;

int isperfect(int x){
    if(x == 0) return 0;
    int sum = 0;
    int y = x/2;
    for(int i = 1 ; i <= y ; i++){
        if(x % i == 0)
            sum += i;
    }
    if(sum == x)
        return 1;
    return 0;
}

int main(){
    int x, last;
    while(cin >> x){
        for(int i = x ; i >= 1 ; i--){
            if(isperfect(i) == 1){
                last = i;
                break;
            }
        }
        for(int i = 6 ; i < x ; i++){
            if(isperfect(i) == 1){
                if(i == last)
                	cout << i;
                else
                	cout << i << " ";
            }
        }
        cout << endl;
    }
}
