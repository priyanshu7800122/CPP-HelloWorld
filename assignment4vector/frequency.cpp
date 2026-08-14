#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout << "Enter size of vector: ";
    cin >> n;
    vector<int>vec(n);
    cout << "Enter elements: ";

    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    
    int target;
    cout << "Enter element to count: ";
    cin >> target;
    int frequency =0;

    for(int i = 0; i<vec.size(); i++ ){
        if(vec[i]==target){
            frequency++;

        
        }

    }
    cout<<"frequency = "<<frequency;
    return 0;




}

