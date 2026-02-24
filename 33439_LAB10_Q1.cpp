#include<iostream>
using namespace std;
void swapPtr(int *&a, int *&b){
int *temp=a;
  a=b;
  b=temp;
}
int main(){
    int a=5 , b=10;
    int*ptrA=&a;
    int*ptrB=&b;
    cout<<"Before Swap : \n";
    cout<<a<<" \t\t"<<b;
    cout<<"\n"<<ptrA<<"\t"<<ptrB;
    swapPtr(ptrA , ptrB);
    cout<<"\nAfter Swap : ";
    cout<<"\n"<<a<<"\t\t"<<b;
    cout<<"\n"<<ptrA<<"\t"<<ptrB;
    return 0;
}
