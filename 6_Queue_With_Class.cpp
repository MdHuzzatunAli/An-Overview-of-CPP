#include <iostream>
using namespace std;

#define SIZE 5

class queue{
    char arr[SIZE];
    int front, num;
    bool initialized;
public:
    void init();
    void enqueue(char ch);
    char dequeue();
    bool isEmpty();
};

void queue::init()
{
    initialized = true;
    front = num = 0;
}

void queue::enqueue(char ch)
{
    if (!initialized){
        cout << "The queue is not initialized\n";
        return;
    }

    if (num == SIZE){
        cout << "The queue is full\n";
        return;
    }

    arr[(front+num)%100] = ch;
    num++;
}

char queue::dequeue()
{
    if (!initialized){
        cout << "The queue is not initialized\n";
        return '\0';
    }

    if (num == 0){
        cout << "The queue is empty\n";
        return '\0';
    }

    char ret = arr[front];
    front = (front + 1) % 100;
    num--;

    return ret;
}

bool queue::isEmpty()
{
    if (!initialized){
        cout << "The statck is not initialized\n";
        return true;
    }

    if (num == 0) return true;
    return false;
}

int main()
{
    queue q1;

    q1.init();

    for(int i=0; i<4; i++){
        q1.enqueue('a');
        q1.enqueue('b');
        q1.enqueue('c');
    }

    for(int i=0; i<6; i++)  cout << q1.dequeue() << "\n";

    return 0;
}