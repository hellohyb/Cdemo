//
// Created by Huang on 2022/8/8 0008.
//
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

typedef struct Link{
    int data;
    struct Link* next;
    Link(int x):
        data(x),next(NULL){

    }
}Link;

int Max(int a, int b){
    return a>b?a:b;
}
double Max(double a, double b, double x = 1.2, double y = 1.1){
    return a>b?a:b;
}
int main(){
    int num;
    cin>>num;
    Link* head = new Link(num);
    Link* p = head;

    while (cin>>num){
        Link* q = new Link(num);
        p->next = q;
        p = p->next;
    }

    Link* m = head;
    while(m != nullptr){
        cout<< m->data << endl;
        m = m->next;
    }
    int *pn;
    int i = 1;
    pn = new int[5];
    *pn = 5;
    while(i != 5){
        *(pn+1) = i;
        i++;
    }
    cout<<pn[1];
    delete pn;
    return 0;
}
