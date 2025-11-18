#include <iostream>
using namespace std;
float* findSecond(float* arr, int size){
    float *max1=arr, *max2=nullptr;
    for(float* i=arr+1 ; i<arr+size ; i++){
        if(*i>*max1){
            max2=max1;
            max1=i; 
            }
        else if(!max2 || (*i>*max2 && *i<*max1)) max2=i;
    }
    return max2;
}
int main(){
    float arr[]={4.5, 3.3, 0.5, 4.57};
    float* result=findSecond(arr, 4);
    cout <<"Second highest = "<<*result;
}