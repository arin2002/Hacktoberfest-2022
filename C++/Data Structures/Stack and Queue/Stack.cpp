#include<iostream>
#include<conio.h>
#define N 5

using namespace std;

class Stack{
    int *arr;
    int top;

public:
    Stack(){
        arr = new int(N);
        top=-1;
    }
    void push(int val){
        if(top == N-1){
            cout<<"Stack Overflow.\n";
            return;
        }
        top++;
        arr[top] = val;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack Empty.\n";
            return;
        }
        top--;
    }
    int front(){
        if(top == -1){
            cout<<"Stack Empty.\n";
            return -1;
        }
        return arr[top];
    }
    int size(){
        return top+1;
    }
    void display(){
        if(top == -1){
            cout<<"Stack Empty.\n";
            return;
        }
        cout<<"Stack is follows:\n";
        for(int i=0; i<N; i++)
            cout<<arr[i]<<endl;
    }
};

int main()
{
    Stack st;
    int ch;
    while (true){
        cout<<"Stack Operations :\n";
        cout<<"1. Push\n";
        cout<<"2. Pop\n";
        cout<<"3. Size\n";
        cout<<"4. Display\n";
        cout<<"5. Top\n";
        cout<<"Enter your choice: ";
        cin>>ch;

        switch(ch){
            case 1:
                int val;
                cout<<"Enter the value: ";
                cin>>val;
                st.push(val);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                cout<<"Size: "<<st.size()<<endl;
                break;
            case 4:
                st.display();
                break;
            case 5:
                cout<<"Front: "<<st.front()<<endl;
                break;
            default:
                cout<<"Wrong Inputs.\n";
        }
    }
    return 0;
}