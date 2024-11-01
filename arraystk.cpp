#include <iostream>
using namespace std;
#define MAX 100

class Stack {
    int top;
    int arr[MAX];
    public :
    Stack()
    {
        top=-1;
    }
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};
bool Stack::push(int x)
{
    if(top >= (MAX-1))
    {
        cout<<"Stack Overflow";
        return false;
    }
    else
    {
        arr[++top]=x;
        cout << x << " pushed into stack\n";
        return true;
    }
}
int Stack::pop()
{
    if(top<0)
    {
        cout<<"Stack UnderFlow";
    }
    else
    {
        int x = arr[top--];
        return x;
    }
}
int Stack::peek()
{
    if(top<0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = arr[top];
        return x;
    }
}
bool Stack::isEmpty()
{
    return (top<0);
}
bool Stack::isFull()
{
    return (top>=MAX-1);
}
int main()
{
    Stack stk;
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";
  
    
    cout << "Top element is : " << s.peek() << endl;
  
    
    cout <<"Elements present in stack : ";
    while(!s.isEmpty())
    {

        cout << s.peek() <<" ";
    
        s.pop();
    }

    return 0;

}

