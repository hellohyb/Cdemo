//
// Created by Huang on 2022/10/18 0018.
//
#include<iostream>
#include<vector>
using namespace std;
class Calculate{
public:
    void demo01_maoPao(vector<int>&arr){
        int len = arr.size();
        for(int i = 0; i < len; i++)
            for (int j = 0; j < len - i - 1; ++j)
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }
    void demo02_jzt(int n){
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < n-i; j++)
                cout<<" ";
            for (int k = 0; k < 2*i - 1; ++k) {
                cout<<"*";
            }
            cout<<endl;
        }
    }
};
int main(){
    Calculate calculate;
    vector<int>arr = {4,5,1,2,6,9,8,7,10,3};
    calculate.demo01_maoPao(arr);
    calculate.demo02_jzt(6);
//    for (int i = 0; i < arr.size(); ++i)
//        cout<<arr[i]<<" ";
    return 0;
}
