
#include<iostream>
using namespace std;
int main(){
int nums[5];
int even = 0;
int odd = 0;
    cout<<"enter the 5 numbers";
    for(int i =0; i<5; i++){
        cin>>nums[i];
        if (nums[i] % 2 == 0) {
            even++;
        }else {
            odd++;
        }

    }
    cout << "Number of even elements = " << even << endl;
    cout << "Number of odd elements = " << odd << endl;

    return 0;
    
}