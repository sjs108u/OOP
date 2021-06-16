#include <iostream>

using namespace std;

int isprime(unsigned long int x){
    if(x == 1) return 0;
    if(x == 2) return 1;
    for(unsigned long int i = 2 ; i < x ; i++)
        if(x%i == 0)
            return 0;
    return 1;
}

int main(){
    unsigned long int x;
    while(cin >> x){
        if(isprime(x))
        	cout << "YES\n";
        else
            cout << "NO\n";
    }
}
