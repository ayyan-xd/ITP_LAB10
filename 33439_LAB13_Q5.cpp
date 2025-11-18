#include<iostream>
using namespace std;
void SortFunction(int *arr, int *size, int order) {
    int n = *size;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            bool swapped = false;
            if (order == 1) {
                if (arr[j] > arr[j + 1]) {
                    swapped = true;
                }
            }
            else if (order == 2) {
                if (arr[j] < arr[j + 1]) {
                    swapped = true;
                }
            }
            if (swapped) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int length = 6;
    cout<<"Enter the number of elements: ";
    cin>>   length;
    int nums[length];
    for(int i=0; i<length; i++){
        cout << "Enter number " << (i+1) << ": ";
        cin >> nums[i];
    }
    cout << "Original Array: ";
    for (int i = 0; i < length; i++) cout << nums[i] << " ";
    cout << endl;

    int sortorder;
    cout << "Enter 1 for Ascending or 2 for Descending: ";
    cin >> sortorder;
    SortFunction(nums, &length, sortorder);

    cout << "Sorted Array:   ";
    for (int i = 0; i < length; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;
}