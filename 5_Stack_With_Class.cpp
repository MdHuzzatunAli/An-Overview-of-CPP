#include <iostream>
using namespace std;

#define SIZE 10 // MACRO

class stack{
    char arr[SIZE];
    int pos;
    bool initialized = false;
public:
    void init();
    void push(char ch);
    char pop();
};

void stack::init()
{
    initialized = true;
    pos = 0;

    cout << "The stack is initialized\n";
}

void stack::push(char ch)
{
    if(!initialized){
        cout << "The statck is not initialized\n";
        return;
    }

    if(pos==SIZE){
        cout << "The statck is full\n";
        return;
    }

    arr[pos++] = ch;
}

char stack::pop()
{
    if(!initialized){
        cout << "The statck is not initialized\n";
        return '\0';    // Returning special character as null
    }

    if(pos==0){
        cout << "The statck is empty\n";
        return '\0';    // Returning special character as null
    }

    pos--;
    return arr[pos];
}

int main()
{
    stack stack1;

    stack1.init();

    for(int i=0; i<4; i++){
        stack1.push('a');
        stack1.push('b');
        stack1.push('c');
    }
    
    for(int i=0; i<4; i++)  cout << stack1.pop() << "\n" ;

    return 0;
}
