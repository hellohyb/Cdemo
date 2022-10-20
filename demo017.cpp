//
// Created by Huang on 2022/10/20 0020.
//
#include<iostream>
#include<vector>
using namespace std;
class Parent{
public:
    string food;
    int time;
    Parent(){
        name = "hyb";
        gender = "man";
        age = 21;
        food = "orange";
    }
    void eat(){
        cout<<"eating:"<<food<<endl;
    }
    void play(){
        cout<<"play lol";
    }
    virtual void sleep(int time = 12){
        cout<<time<<"µãË¯¾õ"<<endl;
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
private:
    string name;
    string gender;
    int age;
};
class Child:public Parent{
public:
    void eat(){
        cout<<food<<endl;
    }

};
template<typename t1, typename t2>
void change(t1 s1, t2 s2){
    cout<<s1+s2<<endl;
}

int main(){
    vector<int>arr = {3,1,4,2,5,8,7,9,6,10};
    Parent parent;
    Child child;
    child.eat();
    parent.sleep();
    child.sleep(33);
    parent.maoPao(arr);
    for(int i : arr)
        cout<<i<<" ";
    return 0;
}
