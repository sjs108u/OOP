#include <iostream>

using namespace std; 

int main(){
    int i, j, ans;
    while(cin >> i){
        ans = 1;
        if(i > 31){
        	cout << "Value of more than 31\n";
            continue;
        }
        else{
            for(j = 0 ; j < i ; j++){
                ans *= 2;
            }
        }
        cout << ans << endl;
    }
}
