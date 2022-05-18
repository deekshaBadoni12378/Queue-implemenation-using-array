#include <iostream>
#include<conio.h>
using namespace std;
int queue[50];
int y= 50;
int front = - 1;
int rear = - 1;
//Implementation of EnQueue in C++ by T4Tutotirlas.com
void insertion() {
int x;
if (rear == y - 1)
cout<<" Overflow"<<endl;
else {
front = 0;
cout<<" insert value  : "<<endl;
cin>>x;
rear++;
queue[rear] = x;
}
}
//Implementation of DeQueue in C++ by T4Tutotirlas.com
void Deletion() {
if (front == - 1) {
cout<<" Underflow ";
return ;
} else {
cout<<"Element deleted  : "<< queue[front] <<endl;
front++;;
}
}
//Implementation of display Queue in C++ by T4Tutotirlas.com
void display () {
if (front == - 1 )
cout<<" empty"<<endl;
else {
cout<<" elements are : ";
for (int i = front; i <= rear; i++)
cout<<queue[i]<<" ";
cout<<endl;
}
}
int main() {
int option;
cout<<"1) insertion "<<endl;
cout<<"2) Deletion"<<endl;
cout<<"3) display "<<endl;
cout<<"4) Exit"<<endl;
do {
cout<<" choice : "<<endl;
cin>>option;
switch (option) {
case 1: insertion();
break;
case 2: Deletion();
break;
case 3: display ();
break;
case 4: cout<<"Exit"<<endl;
break;
default: cout<<"not found"<<endl;
break;
}
} while(option!=0);
return 0;
}
