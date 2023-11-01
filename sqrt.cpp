#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int x, y;
    // for (int i = 0; i <= 5; i++)
    // {
    //     cout << i << " " << sqrt(i) << endl;
    // };
    cout << "Enter number range that you want Sqrt : " << endl;
    cin >> x >> y;

    if (y > x)
    {
        for (int i = x; i <= y; i++)
        {
            cout << i << " = " << sqrt(i) << endl;
        }
    }else{
        for (int i = y; i <= x; i++)
        {
            cout << i << " = " <<sqrt(i)<<endl;
        }
        
    }
}
