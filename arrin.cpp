#include <iostream>
using namespace std;

int main(){
    // I want to find sum of 100 numbers.
    // Calculate average
    // find numbers which are greater than avg.

    int arr[100];

    int n;
    cin>>n;

    // input an array with n elements
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // calculate sum of elements
    int sum=0;
    for(int i=0; i<n; i++){
        sum = sum + arr[i];
    }

    // calculate average
    double avg = double(sum) / n;

    cout<<avg<<endl;

    //output an array with n elements which are greater than average
    for(int i=0; i<n; i++){
        if ( arr[i] > avg )
            cout<<arr[i]<<" ";
    }


}
