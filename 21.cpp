#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
    int x;
    unsigned long ans;
    while(cin >> x){
        ans = 1;
        for(int i = 1 ; i <= x ; i++)
            ans *= i;
        cout << ans << endl;
    }
}
