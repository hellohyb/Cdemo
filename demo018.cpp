//
// Created by Huang on 2022/10/22 0022.
//
#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Demo{
public:
    Demo(){
        cout<<"开始"<<endl;
    }
    ~Demo(){
        cout<<"程序结束"<<endl;
    }
    void maoPao(vector<int>&arr){
        int len = arr.size();
        for(int i = 0; i < len; i++)
            for(int j = 0; j < len - i - 1; j++)
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }
    void jzt(int n){
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < n - i; j++)
                cout<<" ";
            for(int k = 0; k < 2*i - 1; k++)
                cout<<"*";
            cout<<endl;
        }
    }
};

int main(){
//    vector<int>arr = {3,1,2,5,7,6,4,9,8,10};
//    Demo demo;
//    demo.maoPao(arr);
//    for (int i: arr)
//        cout<<i<<" ";
//    cout<<endl;
//    demo.jzt(5);

    unordered_map<int,int>kw;
    kw.insert(pair<int,int>(1,100));
    kw.insert(pair<int,int>(2,200));
    kw[5] = 66;
    cout<<kw[5];
    return 0;
}
