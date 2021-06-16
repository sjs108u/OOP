#include <iostream>

using namespace std;

int main(){
    int x,ans;
    while(cin >> x){
        ans = 0;
        if(x%4 == 0){
            ans = 1;
            if(x%100 == 0){
                ans = 0;
                if(x%400 == 0)
                    ans = 1;
            }
        }
        if(ans == 1)
        	cout << "Bissextile Year\n";
        else
        	cout << "Common Year\n";
    }
}
