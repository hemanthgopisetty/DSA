#include <iostream>
using namespace std;
class Node
{
    public :
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = nullptr;
    };
};
class Stack
{
    Node *top;

public:
    Stack()
    {
        this->top = nullptr;
    }
    void push(int x);
    void pop();
    int peek();
    bool isEmpty();
};
void Stack::push(int x)
{
    Node *new_node = new Node(x);
    if (!new_node)
    {
        cout << "Stack Overflow\n";
        return ;
    }
    new_node->next = top;
    top=new_node;
    return ;
}
void Stack::pop()
{
    if(top==nullptr)
    {
        cout<<"Stack UnderFlow"<<endl;
        return ;
    }
    Node* temp = top;
    top=top->next;
    delete temp;
    return ;
}
bool Stack::isEmpty()
{
    return top==nullptr;
}
int Stack::peek()
{
    if(!isEmpty())
    {
        return top->value;
    }
    else
    {
        cout<<"Stack UnderFlow"<<endl;
        return -1;
    }
}
int main()
{
    Stack stk;
    // int n;
    // cout<<"Enter no of elements to get stacked\n";
    //     cin>>n;
    // while((n-->=0))
    // {
    //     int temp;
    //     cin>>temp;
    //     stk.push(temp);
    // }
    // cout<<"Succesfully stacked\n";
    // cout<<"Let's pop out\n";
    // while(!stk.isEmpty())
    // {
    //     cout<<stk.peek()<<endl;
    //     stk.pop();
    // }
    stk.push(1);
    cout<<stk.peek()<<endl;
    stk.push(2);
    cout<<stk.peek()<<endl;
    stk.push(3);
    cout<<stk.peek()<<endl;
    cout<<"Pop\n";
    stk.pop();
    cout<<stk.peek()<<endl;
    stk.pop();
    cout<<stk.peek()<<endl;
    stk.pop();
    cout<<stk.peek()<<endl;
    return 0;
}