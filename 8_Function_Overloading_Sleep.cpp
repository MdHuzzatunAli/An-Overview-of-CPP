#include <iostream>
#include <cstring>
using namespace std;

int stringToInt (const char *str)
{
    int len = strlen(str);

    for (int i=0; i<len; i++)   if(str[i]<48 && str[i]>57)  return -1;

    int val = 0;

    for (int i=0; i<len; i++){
        val *= 10;
        val = val + str[i] -48;
    }

    return val;
}

// Also Sleep(ms) of windows.h could be used

void sleep ();
void sleep (const char *str);

int main()
{
    char arr[10];
    cout << "Enter your sleep in seconds: ";
    cin >> arr;

    sleep();
    cout << "Hello World";
    sleep(arr);
    cout << "Hello World";

    return 0;
}

void sleep ()
{
    for (int i=0; i<1000000000; i++);
}

void sleep (const char *str)
{
    int multiplier = stringToInt (str);
    cout << "\n" << multiplier << "\n";
    if(stringToInt(str)< 0) multiplier *= -1;

    for (int i=0; i<multiplier; i++)    sleep(); 
}