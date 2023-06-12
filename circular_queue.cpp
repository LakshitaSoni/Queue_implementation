#include <iostream>
using namespace std;

int Q[10], n = 10, f = -1, r = -1;


void enqueue(){
    int x;
    if ((f==0 && r == n-1) || (f == r + 1 ))
        cout<<"Queue is full"<<endl;
    else{
        if (f == -1)
            f =  0;
        cout<<"Enter new element: "<<endl;
        cin>>x;
        if (r == n-1) r=0;
        else r++;
        Q[r] = x;
    }
}

void dequeue(){
    if(f==-1){
        cout<<"Queue is empty";
        return;
    }
    else{
        cout<<"Element deleted from queue is:"<<Q[f]<<endl;
        if(f==r) f=r=-1;
        else if(f == n-1) f = 0;
        else f++;
    }
}

void display(){
    int i;
    if(f <= r){
        for(i=f; i<=r; i++)
            cout<<Q[i]<<" ";
        cout<<endl;
    }
    else{                // if f > r
        for(i=f; i<=n-1; i++)
            cout<<Q[i]<<" ";
        for(i=0; i<=r; i++)
            cout<<Q[i]<<" ";
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
