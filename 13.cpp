#include <iostream>

using namespace std;

int main(){
    int start_h, start_m, end_h, end_m;
    int hour, min, half;
    int dollar;
    while(cin >> start_h >> start_m >> end_h >> end_m){
        hour = end_h - start_h;
        min = end_m - start_m;

        min += hour * 60;
        half = min/30;

        if(half <= 4)
            dollar = half * 30;
        else if(half <= 8){
            dollar = (half-4)*40 + 30*4;
        }
        else{
            dollar = 30*4 + 40*4 + (half-8)*60;
        }
        cout << dollar << endl;
    }
}
