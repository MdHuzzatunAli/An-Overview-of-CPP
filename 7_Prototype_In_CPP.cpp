#include <iostream>
using namespace std;

int sum (int a, int b); // Without this prototype, CPP will not work

int main()
{
    int a, b, c;
    cin >> a >> b;

    c = sum (a, b);
    cout << c;

    return 0;
}

int sum (int a, int b)
{
    return a+b;
}