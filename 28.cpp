#include <iostream>

using namespace std;

int main(){
    int x, count;
    while(cin >> x){
        count = 0;
        for(int i = 1 ; i <= x ; i++){
            if(i % 35 == 0){
                count++;
                if(count == x/35){
                	cout << i;
                }
                else
                	cout << i << " ";
            }   
        }
        cout << endl;
    }
}
