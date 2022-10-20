//
// Created by Huang on 2022/8/5 0005.
//
#include "iostream"
template<class K>
int compare(const K & left, const K & right){
    if(left < right) return -1;
    if(right < left) return 1;
    return 0;
}
using namespace std;
class A{
public:
    virtual void foo(){
        cout<<"1\n";
    }
    virtual void fun(){
        cout<<"2\n";
    }
};
class B:public A{
public:
    void foo(){
        cout<<"3\n";
    }
    void fun(){
        cout<<"4\n";
    }
    //99乘法表
    void jisuan(){
        for(int i = 1; i < 10; i++){
            for(int j = 1; j <= i; j++){
                cout << j << "*" << i << "=" << j*i <<"\t";
            }
            cout<<"\n";
        }
    }
    //杨辉三角
    void sanjiao(){
        int n;
        cout<<"请输入杨辉三角的行数：";
        cin>>n;
        int i,j;
        int array[n][n];

        for(i = 0; i < n; i++){
            for(j = 1; j <= i; j++){
                array[i][j] = array[i - 1][j - 1] + array[i - 1][j];
            }
            array[i][0] = array[i][i] = 1;
        }
        for(i=0;i<n;i++){
            cout<<"\n";
            for(j=0;j<=i;j++){
                cout<<array[i][j]<<" ";
            }
            cout<<"\n";
        }
    }
};
int main()
{
//    string ss = "fewfew";
//    cout<<"字符串的长度为："<<ss.length();


//    A a;
//    B b;
//    A *p = &a;
//    p->foo();
//    p->fun();
//    p = &b;
//    p->foo();
//    p->fun();
//    B *s = &b;
//    s->jisuan();
//    s->sanjiao();
    cout<< compare<int>(1,2);
    return 0;
}