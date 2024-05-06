#include<vector>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the no of elements: ";
    cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int m;
        cin>>m;
        v.push_back(m);
    }
    for(int i = 0;i<n;i++){
        int min_index = i;
        for(int j = i;j<n;j++){
            if(v[min_index] > v[j]){
                min_index = j;
            }
        }
        if(min_index != i){
            int temp = v[i];
            v[i] = v[min_index];
            v[min_index] = temp;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}