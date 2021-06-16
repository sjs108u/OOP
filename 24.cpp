#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int hour, salary;
    double dollar;
    while(cin >> hour >> salary){
        if(hour <= 60)
            dollar = salary * hour;
        else if(hour <= 120)
            dollar = salary * 60 + salary * (hour-60) * 1.33;
        else
            dollar = salary * 60 + salary * 60 * 1.33 + (hour-120) * salary * 1.66;
        cout << fixed << setprecision(1) << dollar << endl; 
    }
}
