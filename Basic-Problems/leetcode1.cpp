#include <iostream>
#include <cstdint>
using namespace std;

class Solution
{
public:

    // Q1. Given an integer number 'n', return the difference between the product of its digits and the sum of its digits...
    // A1
    int diffBwProdSum(int n)
    {
        int sum = 0;
        int prod = 1;

        while (n != 0)
        {
            int digit = n % 10;
            sum = sum + digit;
            prod = prod * digit;
            n = n / 10;
        }
        int diff = prod - sum;
        return diff;
    }

    // Q2. Number of 1 Bits: Write a function that takes an unsigned integer and returns the number of '1' bits it has (also known as the Hamming Weight).
    // A2
    int hammerWeight(uint32_t n){
        int count = 0;
        while(n!=0){
            if(n&1){
                count += 1;
            }
            n = n >> 1; //  Right shift until it becomes zero (till no digits are left)
        }
        return count;
    }
};


int main()
{

    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;
    // int result = obj.diffBwProdSum(n);
    // cout << result << endl;

    int result = obj.hammerWeight(n);
    cout << result << endl;

    return 0;
}
