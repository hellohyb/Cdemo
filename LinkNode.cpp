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
//尾插法
void insertTail(Link* L, int data){
    Link* node = L;
    //遍历到最后
    while(node->next){
        node = node->next;
    }
    //定义新结点，放在node（此时node结点已经在尾端）后面
    Link* newNode = new Link;
    newNode->data = data;
    newNode->next = NULL;
    node->next = newNode;
}
// 删除元素
bool deleteElement(Link* L, int data){
    Link* node = L->next;
    while(node){
        if(node->data == data){
            L->next = node->next;
            delete(node);
            return true;
        }
        L = node;
        node = node->next;
    }
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
    insertHead(l1,6);
    deleteElement(l1,3);
    deleteElement(l1,1);
    insertTail(l1,100);
    print(l1);
    return 0;
}
