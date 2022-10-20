//
// Created by Huang on 2022/9/19 0019.
//

#include<iostream>

using namespace std;
class Person{
public:
    virtual void SendMessage(){
        cout<<"It's Massages"<<endl;
    }
};
class Student:Person{
public:
    void SendMessage(){
        cout<<"ok!"<<endl;
    }
    void eat(){
        int x,y,n;
        for(x = 1, n = 0; n < 9; y = (x + 1) * 2, x = y, n++);
        cout<<"第一天摘了："<<x<<endl;
    }
};

int main(){
//    int arr[4] = {1,2,3,6};
//    int *pa = arr;
//    for(int i = 0; i < 4; i++){
//        cout<<*(pa + i)<<"\t";
//    }
    Student stu;
//    stu.eat();
    string s = "abc";
    int a = s.size();
    cout<<a;
    return 0;
}