#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    double x, ans;
    while(cin >> x){
        ans = x*x;
        ans = (int)(ans*10+0.5)/10.0;
        cout << fixed << setprecision(1) << ans << endl;
    }
	return 0;
}
