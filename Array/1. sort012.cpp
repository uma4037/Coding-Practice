//Leetcode
//Given an array nums with n objects colored red, white, or blue, sort them in-place
//so that objects of the same color are adjacent, with the colors in the order red, white, and blue.
//We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.


#include <iostream>
using namespace std;

void swap(int &a, int &b) {
   int temp = a;
   a = b;
   b = temp;
}

void sort012(int arr[], int n){
    int low=0;
    int mid=0;
    int high= n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }

        else if(arr[mid]==1){
            mid++;
        }

        else{
            swap(arr[high], arr[mid]);
            high--;
        }
    }
}

int main(){
    int arr[] = { 0, 1, 2, 1, 2, 0, 0, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);

    sort012(arr, n);

    for(int i=0; i< n; i++){
        //cout<<"i="<<i<<endl;
        cout<<arr[i]<< " ";
    }

return 0;
}
