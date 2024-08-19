#include <iostream> 
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int number = 1235436922;
    int length = to_string(number).length();
    int heighest = 0;
    for(int i = length; i >= 0; i--) {
        if(heighest < number % 10) {
            heighest = number % 10;
        }
        number/= 10;
    }
    cout << heighest << endl;

    // sqaure and cube root
    cout << sqrt(36) << endl << cbrt(8) << endl;

    int num1 = 10;
    double dub1 = 3.0;

    cout << num1 / dub1 << endl;

    // static_cast<double>(num1);

    double newDouble = 13.123123123;

    cout << setprecision(4) << newDouble << endl;

    long long value1 = 9'223'372'036'854'775'807LL;

    // make long numbers more readable by using single quotation marks at 
    // consistent intervals

    long myLong = 123'321'321;

    
    
}

