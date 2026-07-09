#include <iostream>
using namespace std;

class Solution
{
public:
    void pattern1(int n)
    {

        int i = 1;
        int count = 1;

        while (i <= n)
        {

            int j = 1;

            while (j <= n)
            {
                cout << count << " ";
                count++;
                j++;
            }
            cout << "\n";
            i++;
        };
    };

    void pattern2(int n)
    {

        int i = 1;

        while (i <= n)
        {
            int j = 1;
            while (j <= i)
            {
                cout << "*";
                j++;
            }
            cout << "\n";
            i++;
        };
    };

    void pattern_n(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    };

    void right_angle(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
            cout << "\n";
        }
    };

    void pattern3(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i;
            }
            cout << "\n";
        }
    };

    /* void count(int n){
        int i = 1;
        while(i <= n){
            int j = 1;
            int count = i;
            while(j<= i){
                cout << count;
                count++;
                j++;
            }
            cout <<"\n";
            i++;
        }
    }; */

    void count(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
            };
            cout << "\n";
        };
    };

    // void home_work(int n){ // Champ!! You got the right answer!!
    //      int i = 1;
    //     while(i <= n){
    //         int j = 1;
    //         while(j <= i){
    //             cout << i + (j - 1);
    //             j++;
    //         }
    //         cout << "\n";
    //         i++;
    //     };
    // };

    void home_work(int n)
    { // Champ!! You got the right answer!!
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << i + (j - 1);
            };
            cout << "\n";
        };
    };
};

int main()
{
    int n;
    cin >> n;

    // Solution pattern_n;
    // pattern_n.pattern_n(n);

    Solution pattern_one;
    pattern_one.pattern1(n);

    // Solution pattern_two;
    // pattern_two.pattern2(n);

    // Solution rightangle;
    // rightangle.right_angle(n);

    // Solution pattern_three;
    // pattern_three.pattern3(n);

    // Solution count;
    // count.count(n);

    // Solution hw;
    // hw.home_work(n);

    return 0;
}
