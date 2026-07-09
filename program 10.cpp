#include <iostream>
using namespace std;

int main()
{
    cout << "10 + 2 * 5 = " << 10 + 2 * 5 << endl;
    cout << "(10 + 2) * 5 = " << (10 + 2) * 5 << endl;
    cout << "20 / 4 + 3 * 2 = " << 20 / 4 + 3 * 2 << endl;
    cout << "20 / (4 + 3) * 2 = " << 20 / (4 + 3) * 2 << endl;

    int a = 10;
    float b = 3.5;
    float result = (a + b) * 2 - 5 / 2.0;

    cout << "Complex expression ((10 + 3.5) * 2 - 5 / 2.0) = "
         << result << endl;

    return 0;
}