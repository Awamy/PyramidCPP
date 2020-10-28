#include <iostream>
using namespace std;
int main()
{
    int blank, rows;
    char symbol
    ;

    cout <<"How many rows? : ";
    cin >> rows;

    cout <<"What's Your Favourite Symbol? : ";
    cin >> symbol
    ;

    for(int i = 1, k = 0; i <= rows; ++i, k = 0)
    {
        for(blank = 1; blank <= rows-i; ++blank)
        {
            cout <<"  ";
        }
        while(k != 2*i-1)
        {
            cout << symbol
            ;
            ++k;
        }
        cout << endl;
    }    
    return 0;
}
