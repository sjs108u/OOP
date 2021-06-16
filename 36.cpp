#include <iostream>

using namespace std;

int main(){
    int x;
    while(cin >> x){
        if(x == 3 || x == 4 || x == 5)
        	cout << "Spring\n";
        else if(x == 6 || x == 7 || x == 8)
        	cout << "Summer\n";
        else if(x == 9 || x == 10 || x == 11)
        	cout << "Autumn\n";
        else if(x == 12 || x == 1 || x == 2)
        	cout << "Winter\n";
    }
}
