#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int a, b;
    while(cin >> a >> b){
    	cout << a << "+" << b << "=" << a + b << endl;
    	cout << a << "*" << b << "=" << a * b << endl;
    	cout << a << "-" << b << "=" << a - b << endl;
        if(b > 0){
			if(a % b >= 0)
				cout << a << "/" << b << "=" << a/b << "..." << a%b << endl;
			else
				cout << a << "/" << b << "=" << a/b - 1 << "..." << a%b + b << endl;
		}
		else{
			if(a % b >= 0)
				cout << a << "/" << b << "=" << a/b << "..." << a%b << endl;
			else
				cout << a << "/" << b << "=" << a/b + 1 << "..." << a%b - b << endl;
		}
    }
    return 0;
}
