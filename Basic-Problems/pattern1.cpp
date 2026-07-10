#include <iostream>
using namespace std;

class Solution
{
public:
    void patternOne(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                char ch = 'A' + i - 1;
                cout << ch;
            }
            cout << "\n";
        }
    }

    void patternTwo(int n)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                char ch = 'A' + j - 1;
                cout << ch;
            }
            cout << "\n";
        }
    }

    void patternThree(int n)
    {
        char ch = 'A';
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << ch << " ";
                ch++;
            }
            cout << "\n";
        }
    }

    void numbers(int n){
        int num = 1;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                cout << num;
                num++;
            }
            cout <<"\n";
        }
    }

    void alphabets(int n){ // Formula: 'A' + i + j - 2;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n; j++){
                char ch = 'A' + i + j - 2;
                cout << ch << " ";
                ch++;
            }
            cout << "\n";
        }
    }

    void triangle(int n){
        char ch = 'A'; // Starts here!!
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << ch; // this will keep on changing with respect to the 'ch++'
            }
            ch++;
            cout <<" \n";
        }
    }

    void triangle1(int n){
        char ch = 'A'; // Starts here!!
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout << ch; // this will keep on changing with respect to the 'ch++'
                ch++; // increments to the next letter and then
            }
            cout <<" \n";
        }
    }

    void triangle2(int n){
        for(int i=1; i<=n; i++){
            char start = 'A' + n - i;
            for(int j=1; j<=i; j++){
                cout << start;
                start++;
            }
            cout << "\n";
        }
    }

    void stars(int n){
        int i = 1;
        while(i <= n){

            // First Loop - "Spaces"
            int space = n-i;
            while(space){
                cout << " ";
                space = space - 1;
            }

            // Second Loop - "Stars"
            int j= 1;
            while(j <= i){
                cout << "*";
                j++;
            }
            cout << "\n";
            i++;
        }
    }

    // void starsHw1(int n){
    //     int i = 1;
    //     while(i<=n){
    //         int j = i;
    //         while(j<=n){
    //             cout << "*";
    //             j++;
    //         }
    //         cout << "\n";
    //         i++;
    //     }
    // }

    void starsHw1(int n){ // alternate, using formulae method!!
        for(int i=1; i<=n; i++){
            int star = n-i+1;
            for(int j=1; j<=star; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }

    void starHw2(int n){
        for(int i = 1; i<=n; i++){
            int space = i - 1;
            for(int j = 1; j <= space; j++){
                cout << " ";
            }
            int stars = n - i + 1;
            for(int j = 1; j <= stars; j++){
                cout << "*";
            }
            cout << "\n";
        }
    }

    void numHw(int n){
        for(int i=1; i<=n; i++){
            int space = i - 1;
            for(int j=1; j<= space; j++){
                cout << " ";
            }
            int stars = n - i + 1;
            for(int j=1; j <= stars; j++){
                cout << j;
            }
            cout << "\n";
        }
    }

    void numHw2(int n){
        for(int i=1; i <= n; i++){
            int space = n - i;
            for(int j =1; j <= space; j++){
                cout << " ";
            }
            for(int j = 1; j <= i; j++){
                cout << j;
            }
            cout << "\n";
        }
    }

    void numHw3(int n){
        for(int i=1; i<=n; i++){
            int num = i;
            // spaces
            int space = i-1;
            for(int j=1; j<=space; j++){
                cout << " ";
            }
            // initialise a num
            // nums
            int nums = n-i+1;
            for(int j=1; j<=nums; j++){
                cout << num;
                num++;
            }
            cout << "\n";
        }
    }

    void numHw4(int n){
        int num = 1; // this is here before entering any loop, coz, it starts from 1, and increment so on...
        for(int i=1; i<=n; i++){
            // Spaces
            for(int j=1; j <= n-i; j++){
                cout << " ";
            }

            // Nums
            for(int j=1; j <=i; j++){
                cout << num;
                num++;
            }
            cout << "\n";
        }
    }

    void pyramid(int n){

        for(int i=1; i<=n; i++){
            // Print Spaces
            for(int j=1; j<=n-i; j++){
                cout << " ";
            }

            // Print First Triangle
            for(int j=1; j<=i; j++){
                cout << j;
            }

            // Print Second Triangle
            for(int j=i-1; j>0; j--){
                cout << j;
            }

            cout << "\n";
        }
    }

    void dabang(int n){

        // Outer Loop
        for(int i=1; i<=n; i++){

            // First Triangle
            for(int j=1; j<=n-i+1; j++){
                cout << j;
            }

            // Starts - Second Rightangled Triangle
            for(int s = 1; s <= (i-1) * 2; s++){
                cout << "*";
            }

            // Third Triangle
            for(int j = n - i + 1; j>0; j--){
                cout << j;
            }
            cout << "\n";
        }
    }

};

int main()
{
    int n;
    cin >> n;


    Solution pattern;

    pattern.dabang(n);
    // pattern.pyramid(n);
    // pattern.numHw4(n);
    // pattern.numHw3(n);
    // pattern.numHw2(n);
    // pattern.numHw(n);

    // pattern.starsHw1(n);

    // pattern.starHw2(n);

    // pattern.stars(n);

    // pattern.starsHw1(n);



    // pattern.patternOne(n);

    // pattern.patternTwo(n);

    // pattern.patternThree(n);

    // pattern.numbers(n);

    // pattern.alphabets(n);

    // pattern.triangle(n);

    // pattern.triangle1(n);

    // pattern.triangle2(n);

};
