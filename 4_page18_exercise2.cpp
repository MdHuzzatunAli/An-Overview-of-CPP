#include <iostream>
using namespace std;

int main()
{
    float ft;

    cout << "This program changes ft to inches. Input 0 to end the program:\n";
    do{
        cout << "Enter in ft : ";
        cin >> ft;
        cout << ft << " ft is " << ft * 12 << " inches\n\n";
    } while (ft !=0);

    return 0;
}