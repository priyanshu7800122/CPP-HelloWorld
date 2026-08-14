#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter numbers ="<<endl;
    cin>>n;
    vector<int>vec(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }
    vector<int> unique;

    for (int i = 0; i < vec.size(); i++) {
        bool duplicate = false;

        for (int j = 0; j < unique.size(); j++) {
            if (vec[i] == unique[j]) {
                duplicate = true;
                break;
            }
        }

        if (!duplicate) {
            unique.push_back(vec[i]);
        }
    }
    cout << "After removing duplicates: ";

    for (int i = 0; i < unique.size(); i++) {
        cout << unique[i] << " ";
    }
    return 0;
}