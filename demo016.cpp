//
// Created by Huang on 2022/10/19 0019.
//
#include<iostream>
#include<vector>
using namespace std;

class Calculates{
public:
    Calculates(){
        cout<<"开始"<<endl;
    }
    ~Calculates(){
        cout<<"程序结束"<<endl;
    }

    void maoPao(vector<int>&arr){
        int len = arr.size();
        for (int i = 0; i < len; ++i)
            for(int j = 0; j < len - i - 1; j++)
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }
    void binarySearch(vector<int>arr, int n){
        int low = 0;
        int high = arr.size() - 1;
        int mid = 0;
        while(low <= high){
            mid = (high + low) / 2;
            if(arr[mid] > n)
                high = mid - 1;
            else if(arr[mid] < n)
                low = mid + 1;
            else{
                cout<<mid<<endl;
                break;
            }
        }
    }
};

int main(){
    Calculates calculates;
    vector<int>arr = {3,4,1,2,6,7,9,8,5,10};
    calculates.maoPao(arr);
    for(int i: arr)
        cout<<i<<" ";
    cout<<endl;
    calculates.binarySearch(arr,7);
    return 0;
}
