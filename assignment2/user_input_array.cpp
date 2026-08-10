#include<iostream>
using namespace std;
int main(){
    int nums[5];
    cout<<"enter the 5 numbers";
    for(int i =0; i<5; i++){
        cin>>nums[i];

    }

    cout<<"the elements of the array are :";

    for(int i=0; i<5; i++){
        cout<<nums[i]<<"";

    }
    return 0;
}