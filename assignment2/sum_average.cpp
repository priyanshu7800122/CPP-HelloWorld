// Write a C++ program to calculate the sum and average of all elements in an array.
#include<iostream>
using namespace std;
int main(){
int nums[5];
    cout<<"enter the 5 numbers";
    for(int i =0; i<5; i++){
        cin>>nums[i];

    }
    int sum= nums[0] + nums[1]+ nums[2]+ nums[3]+nums[4]; 
    int average = sum/5;
    cout<< "sum:"<< sum << endl;
    cout<< "average:"<< average << endl;
    return 0;
}