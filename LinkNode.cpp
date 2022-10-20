//
// Created by Huang on 2022/10/20 0020.
//
#include<iostream>
using namespace std;
typedef struct Link{
    int data;
    struct Link* next;
}Link;
//初始化链表
void initLink(Link &L){
    L.data = 0;
    L.next = NULL;
}
//头插法
void insertHead(Link* L, int data){
    Link* node = new Link;
    node->data = data;
    node->next = L->next;
    L->next = node;
}
//打印输出链表
void print(Link* L){
    Link* node = L->next;
    while(node){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}
int main(){
    Link* l1 = new Link;
    initLink(*l1);
    insertHead(l1,1);
    insertHead(l1,2);
    insertHead(l1,3);
    insertHead(l1,4);
    insertHead(l1,5);
    print(l1);
    return 0;
}
