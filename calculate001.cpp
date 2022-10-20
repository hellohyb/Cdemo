//
// Created by Huang on 2022/10/13 0013.
//
#include<iostream>
#include "cmath"
#include<vector>
using namespace std;
class Calculate{
public:
    void maoPao(vector<int>&arr){
        int len = arr.size();
        for (int i = 0; i < len; i++)
            for (int j = 0; j < len - 1 - i; j++)
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
    }
    void yangHui(){
        int n;
        cout<<"请输入行数：";
        cin>>n;
        int arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 1; j < i; j++){
                //当前元素值为 上一行左上角元素arr[i-1][j-1] 与 上一行和自己并列的元素arr[i-1][j] 之和
                arr[i][j] = arr[i - 1][j - 1] +arr[i - 1][j];
            }
            arr[i][0] = arr[i][i] = 1;
        }
        for(int i = 0; i < n; i++) {
            for (int j = 0; j <= i; j++) {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
    }
    vector<int> calculates(vector<int>&num,int k){
        int len = num.size();
        int sum = 0;
        int i = 0;
        while(len){
            sum += num[i] * pow(10,--len);
            i++;
        }
        sum+=k;
        for(int j = num.size() - 1;j >= 0; j--){
            num[j] = sum % 10;
            sum = sum / 10;
            cout<<sum;
        }
        return num;
    }
};
int main(){
    vector<int>arr = {2,1,5};
    Calculate calculate;
//    calculate.yangHui();
//    calculate.maoPao(arr);
//    for(int i = 0; i < arr.size(); i++)
//        cout<<arr[i]<<" ";

//    int arr[] = {4,5,1,3,6,7,2,8,9,10}; //定义一个数组，当然也可以自定义输入
//    int len = sizeof(arr) / sizeof(int); // 计算数组元素个数
//    for(int i = 0; i < len; i++){
//        for(int j = 0; j < len - 1 - i; j++){
//            if(arr[j] > arr[j + 1]){    //顺序排序，大于号改成小于号，则为降序排序
//                int temp = arr[j];  // 交换元素
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    //打印输出
//    for(int i = 0; i < len; i++){
//        cout<<arr[i]<<" ";
//    }
    calculate.calculates(arr,806);
    return 0;
}