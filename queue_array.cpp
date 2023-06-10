/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

int Q[100], n = 100, start = -1, rear = -1;


void enqueue(){
    int x;
    if (rear == n-1)
        cout<<"Queue is full"<<endl;
    else{
        if (start == -1)
            start =  0;
        cout<<"Enter new element: "<<endl;
        cin>>x;
        rear++;
        Q[rear] = x;
    }
}

void dequeue(){
    if(start==-1){
        cout<<"Queue is empty";
        return;
    }
    else{
        cout<<"Element deleted from queue is:"<<Q[start]<<endl;
        start++;
    }
}

void display(){
    if(start == -1)
        cout<<"Queue is empty"<<endl;
    else{
        cout<<"Queue elements are :";
        for(int i = start ; i<=rear ; i++){
            cout<<Q[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int ch;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter your choice : ";
      cin>>ch;
      switch (ch) {
         case 1: enqueue();
         break;
         case 2: dequeue();
         break;
         case 3: display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      }
   } while(ch!=4);
   return 0;
}
