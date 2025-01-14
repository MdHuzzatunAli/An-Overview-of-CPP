#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch[50];

    cout << "Enter keys, x to stop.\n";

    do{
        cin >> ch;
        cout << ch << "current\n";
    } while (strcmp(ch, "x") !=0 ); // while(ch == 'x'); for character

    return 0;
}