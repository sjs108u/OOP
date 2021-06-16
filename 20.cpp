#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main(){
    int x, len;
    char ans[100];
    while(cin >> x){
        sprintf(ans, "%x", x);
        len = strlen(ans);
        for(int i = 0 ; i < len ; i++)
            ans[i] = toupper(ans[i]);
        cout << ans << endl;
    }
}
