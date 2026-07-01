#include <iostream>
using namespace std;

int main(){

    int i = 0;
    int sum = 0;
    int n;
    cout << "Enter a number: ";
    cin >> n;

    while (i <=n )
    {
        sum += i;
        i += 2;
    }

    cout << "The sum of even no.s is: " << sum << endl;

}
