#include <iostream>
using namespace std;

int main(){

    // Find the largest number in an array

    //declare an array
    int numbers[1000]; // index = 0 .. 999

    int n;
    cin>>n;

    for(int i=0; i<n; i++)
        cin>>numbers[i];

    int mx = numbers[0];
    int mn = numbers[0];

    for(int i=1; i<n; i++)
    {
        if( numbers[i] > mx)
            mx = numbers[i];

        if( numbers[i] < mn)
            mn=numbers[i];
    }
    cout<<mx<<" "<<mn;

}
