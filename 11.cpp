#include <iostream>

using namespace std; 

int main(){
    int dollar, N10, N5, N1;
    while(cin >> dollar){
        N10 = dollar/10;
        dollar -= N10 * 10;
        N5 = dollar/5;
        dollar -= N5 * 5;
        N1 = dollar;
        cout << "NT10=" << N10 << endl << "NT5=" << N5 << endl << "NT1=" << N1 << endl; 
    }
}
