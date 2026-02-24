#include<iostream>
using namespace std;
float *sumAll(float *arr , int size){
    float sum=0;
    for(int i=0 ; i<size ; i++){
        sum+=*(arr+i);
}
float* res=new float(sum);
return res;
}
int main(){
    float arr[] = {4.5,3.3,0.5,4.57};
    cout<<*sumAll(arr,4);
    return 0;
}
