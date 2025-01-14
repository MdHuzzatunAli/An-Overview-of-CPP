#include <iostream>
using namespace std;

int main()
{
    int i;
    double f;
    char s[80];

    cout << "Enter an integer, a float and a string: ";
    cin >> i >> f >> s;

    cout << "Here is your inputs: ";
    cout << i << " " << f << " " << s;
}