#include <iostream>

using namespace std;

int main(){
    int x, ans;
    while(cin >> x){
        ans = (int)(x*100/(100-76.2));
        cout << ans+1 << endl;
    }
}
