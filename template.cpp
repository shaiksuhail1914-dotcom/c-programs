#include <iostream>
using namespace std;

template <class T>
T maximum(T a, T b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    cout << "max of 20 and 30 = " << maximum(20, 30) << endl;
    cout << "max of 2.2 and 3.0 = " << maximum(2.2, 3.0) << endl;
    cout << "max of A and B = " << maximum('A', 'B') << endl;

    return 0;
}
