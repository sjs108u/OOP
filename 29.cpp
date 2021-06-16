#include <iostream>

using namespace std;

int isprime(int x){
    if(x == 1) return 0;
    if(x == 2) return 1;
    for(int i = 2 ; i < x ; i++)
        if(x%i == 0)
            return 0;
    return 1;
}

int main(){
    int x;
    while(cin >> x){
        for(int i = x-1 ; i >= 1 ; i--){
            if(isprime(i)){
            	cout << i << endl;
                break;
            }
        }
            
    }
}
