#include <iostream>

using namespace std;

int main(){
    int tmp, x, ans[8], cur;
    while(cin >> x){
        tmp = (x>=0)?x:x*(-1);
        cur = 7;
        while(tmp != 0){
            ans[cur] = tmp%2;
            tmp /= 2;
            cur--;
        }
        for(int i = 0 ; i <= cur ; i++)
            ans[i] = 0;
        if(x >= 0){
            for(int i = 0 ; i < 8 ; i++)
            	cout << ans[i];
            cout << endl;
        }
        else{
            for(int i = 0 ; i < 8 ; i++){
                if(ans[i] == 1)
                    ans[i] = 0;
                else if(ans[i] == 0)
                    ans[i] = 1;
            }
            ans[7] += 1;
            cur = 7;
            while(ans[cur] == 2 && cur > 0){
                ans[cur] = 0;
                ans[cur-1] += 1;
                cur--;
            }
            
            for(int i = 0 ; i < 8 ; i++)
                cout << ans[i];
            cout << endl;
        }
    }
}
