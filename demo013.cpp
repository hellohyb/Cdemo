//
// Created by Huang on 2022/10/14 0014.
//

#include "iostream"
#include<vector>
//#include<queue>
#include<bits/stdc++.h>
using namespace std;
class Hyb{
public:
    // Ñî»ÔÈý½Ç
    void yangHui(){
        int n;
        cout<<"ÇëÊäÈëÐÐÊý£º";
        cin>>n;
        int arr[n][n];
        for(int i = 0; i < n; i++){
            for(int j = 1; j <= i; j++){
                arr[i][j] = arr[i-1][j] + arr[i-1][j-1];
            }
            arr[i][0] = arr[i][i] = 1;
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j <= i; j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    // Ã°ÅÝÅÅÐò
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
    //½ð×ÖËþ
    void Pyramid(int n){
        for (int i = 1; i <= n; i++){
            for(int j = n - i; j > 0; j--)
                cout<<" ";
            for(int k = 0;k < 2 * i - 1;k++)
                cout<<"*";
            cout<<endl;
        }
    }
    void ciphertext(string str){
        for(int i = 0; i < str.length(); i++){
            if(str[i] >= 'A' && str[i] <= 'Z')
                str[i] = 155 - str[i];
            else if(str[i] >= 'a' && str[i] <= 'z')
                str[i] = 219 - str[i];
        }
        cout<<"½âÃÜºó£º"<<str;
    }
private:
    string name;
    int age;
    string gender;
};
int main(){
    Hyb hyb;
//    hyb.yangHui();
    vector<int> arr = {3, 1, 2, 6, 5, 4, 7, 8, 10, 9};
//    hyb.maoPao(arr);
//    for(int i = 0; i < arr.size(); i++){
//        cout<<arr[i]<<" ";
//    }
    queue<int> a;
    a.push(1);
    a.push(2);
    a.push(3);
    a.push(4);

//    while(a.size()){
//        cout<<a.front()<<" ";
//        a.pop();
////        a.pop();
//    }
    const char* s1 = "dzz";
    const char* s2 = "def";
    int w = strcmp(s2,s1);
    hyb.Pyramid(10);
//    hyb.ciphertext("abcdef");
    return 0;
}