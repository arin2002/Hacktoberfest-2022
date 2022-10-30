#include <iostream>
#include <stdio.h>
#include <cstring>
using namespace std;
struct data
{
    char job[10];
    int prno , ord;

};
const int MAX=5;
class priority_queue
{
    private:
            data d[MAX];
            int front,rear;
    public:
            priority_queue()
            {
                front=rear=-1;
                for(int i=0;i<MAX;i++)
                {
                    strcpy(d[i].job,"\0");
                    d[i].prno=d[i].ord=0;
                }
            }
            void add(data dt)
            {
                if(rear==MAX-1)
                {
                    cout<<"Queue is full";
                }
                else
                {
                    rear++;
                    d[rear]=dt;
                    if(front==-1)
                    {   front=0; }

                }

            }
            void remove()
            {   
                int highestPriority = 0;
                int ind = -1;
                data temp;
                for(int i=front;i<=rear;i++)
                {
                    if (highestPriority == d[i].prno && ind > -1 && d[ind].job < d[i].job) 
                    {
                        highestPriority = d[i].prno;
                        ind = i;
                    }
                    else if (highestPriority < d[i].prno) 
                    {
                        highestPriority = d[i].prno;
                        ind = i;
                    }
                }

                if(front==-1)
                {
                    cout<<"Queue is empty";

                }

                else
                {
                        for(int i=ind;i<rear;i++)
                        {
                            d[i] = d[i + 1];

                        }

                }
                rear--;
            }

            void sort()
            {
                data temp;
                for(int i=front;i<rear;i++)
                {
                    for(int j=i+1; j<=rear;j++)
                    {
                        if(d[i].prno>d[j].prno)
                        {
                            temp=d[i];
                            d[i]=d[j];
                            d[j]=temp;
                        }
                        else if(d[i].prno==d[j].prno)
                        {
                            if(d[i].ord>d[j].ord)
                            {
                                temp=d[i];
                                d[i]=d[j];
                                d[j]=temp;
                            }
                        }
                    }
                }
                display();
            }

            void display()
            {
                if(front==-1)
                {
                    cout<<"Queue is empty";
                }
                else
                {
                    for(int i=front;i<=rear;i++)
                    {
                        cout<<d[i].job<<" ";
                    }
                }
                cout<<endl;
            }
};
int main ()
{
    priority_queue p;
    int ord=0;
    while(true)
    {
        cout<< "Priority Queue Operations :- "<<endl;
        cout<< "1 -> ADD"<<endl;//add element at end
        cout<< "2 -> REMOVE "<<endl; //removes element from front
        cout<< "3 -> DISPLAY"<<endl;//display all the elements
        cout<< "4 -> SORT BY PRIORITY "<<endl;
        cout<< "5 -> EXIT"<<endl;
          int c;
        cout<<"Enter your choice :";
        cin >>c;
        switch(c)
        {
            case 1:
                data d;
                cout<<"Enter the data : ";
                cin >>d.job;
                cout<<"Enter the Priority no : ";
                cin >>d.prno;
                d.ord=ord++;
                p.add(d);
                break;
            case 2:
                p.remove();
                break;
            case 3:
                p.display();
                break;
            case 4:
                p.sort();
                break;
            case 5:
                exit(0);
            default:
                cout<<"Invalid Input"<<endl;
                false;
                break;


        }
    }


return 0 ;  
}
