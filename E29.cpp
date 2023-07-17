/*Queues are frequently used in computer programming, and a typical example is the
creation of a job queue by an operating system. If the operating system does not use
priorities, then the jobs are processed in the order they enter the system. Write C++
program for simulating job queue. Write functions to add job and delete job from queue*/

#include<iostream>
#define size 10
using namespace std;
class queue{
public:
    int array[size];
    int front,rear;
    queue()
    {front = -1;rear = -1;};
    void enqueue(int x);
    int dequeue();
    void display();
};

void queue::enqueue(int x)
    {
        if(rear == size-1){
            cout<<"queue is full"<<endl;
        }
        else
        {
         rear++;
        array[rear]=x;
        }
    }
int queue::dequeue(){
        if(front==rear){
            cout<<"queue is empty"<<endl;
        }
        else
        {
        front++;
        array[front];
        }
    }
void queue::display(){
        int i;
        if(front==rear)
	    {
	        cout<<"Queue is Empty.";
        }
	    else
        {
            cout<<" queue contains:";
            for(int i=front+1;i<=rear;i++)
            {
                cout<<array[i]<<" ";
            }
        }
    }

int main(){
    queue obj;
	int ch,x;
	do{    cout<<"\n 1. Add job\n 2.delete job\n 3.display\n 4.Exit\n Enter your choice:";
	       cin>>ch;
	switch(ch)
	{
     case 1:
	    cout<<"\n Enter data:";
        cin>>x;
        obj.enqueue(x);
        break;

     case 2:
             obj.dequeue();
             obj.display();
            break;
	  case 3:
            obj.display();
	        break;
	  case 4: cout<<"\n Exit";
        }
      }while(ch!=4);
return 0;
}

