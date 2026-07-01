#include <iostream>
using namespace std;

int main(){

    int i = 2;
    int sum = 0;

    int n;
    cout << "Enter a number n: ";
    cin >> n;

    while(i <= n){
        sum += i;
        i+= 2;
    }

    cout << "Sum of the even no.s in the given number is: " << sum << endl;

    return 0;
}
