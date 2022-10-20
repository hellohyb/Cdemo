//
// Created by Huang on 2022/10/17 0017.
//
#include<iostream>
#include<vector>
using namespace std;

class Calculate{
public:
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
    void pyramid(int n){
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < n - i; j++)
                cout<<" ";
            for(int k = 0; k < 2*i - 1; k++)
                cout<<"*";
            cout<<"\n";
        }
    }
    int binarySearch(vector<int>&arr,int target){
        int low = 0;
        int high = arr.size() - 1;
        int mid = 0;
        while(low <= high){
            mid = (low + high) / 2;
            if(arr[mid] < target){
                low = mid + 1;
            }else if(arr[mid] > target){
                high = mid - 1;
            }else{
                return mid;
            }
        }
        return -1;
    }
    vector<int> coin(vector<int> typeArr,int change){
        vector<int> changeArr(0);
        if(change < 1) {
            cout<<"金额太小！无法找零！";
            return changeArr;
        }
        int i = 0; //币种 数组索引
        int num; //张数
        int one_hundred=0,fifty=0,twenty=0,ten=0,five=0,one = 0; // 初始化各币种张数
        while(change){
            if(change / typeArr[i] == 0){
                i++;
            }else{
                num = change / typeArr[i];
                for(int j = 0; j < num; j++){
                    changeArr.push_back(typeArr[i]);
                    switch (typeArr[i]) { //记录各币种找零的张数。
                        case 100:one_hundred++;break;
                        case 50:fifty++;break;
                        case 20:twenty++;break;
                        case 10:ten++;break;
                        case 5:five++;break;
                        case 1:one++;break;
                        default:break;
                    }
                }
                change = change - num * typeArr[i];
            }
        }
        cout<<"应找零：";
        for(int i = 0; i < changeArr.size();i++){
            cout<<changeArr[i]<<" ";
        }
        cout<<endl<<"明细："<<endl;
        cout<<"100元："<<one_hundred<<"张；"<<endl;
        cout<<"50元："<<fifty<<"张；"<<endl;
        cout<<"20元："<<twenty<<"张；"<<endl;
        cout<<"10元："<<ten<<"张；"<<endl;
        cout<<"5元："<<five<<"张；"<<endl;
        cout<<"1元："<<one<<"张。"<<endl;
        return changeArr;
    }
private:
    string name;
    int age;
    string gender;
};

int main(){
    Calculate calculate;
//    vector<int>arr = {1,3,2,6,4,9,8,5,7,10};
    vector<int>money = {100,50,20,10,5,1};
    //    calculate.maoPao(arr);
//    for(int i = 0; i < arr.size(); i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<endl<<calculate.binarySearch(arr,4);
        calculate.coin(money,834);
//    calculate.pyramid(5);
    return 0;
}
