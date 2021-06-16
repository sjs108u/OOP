#include <iostream>

using namespace std;

int main(){
    int x, sec, min, hour, day;
    while(cin >> x){
        sec = x % 60;
        x -= sec;
        x /= 60;
        min = x % 60;
        x -= min;
        x /= 60;
        hour = x % 24;
        x -= hour;
        day = x/24;
        cout << day << " days\n" << hour << " hours\n" << min << " minutes\n" << sec << " seconds\n";
    }
}
