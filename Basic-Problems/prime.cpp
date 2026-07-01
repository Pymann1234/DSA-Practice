#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a number n: ";
    cin >> n;

    bool isPrime = true;

    for(int i = 2; i < n ; i++){
        if(n%i == 0){
            isPrime = false;
        }
    }

    if(isPrime){
        cout << n << " " << "is a Prime Number" << endl;
    } else {
        cout << n << " " << "is not a Prime Number" << endl;
    }

}
