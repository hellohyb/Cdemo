//
// Created by Huang on 2022/10/21 0021.
//
#include<iostream>
using namespace std;
typedef struct Link{
    int data;
    struct Link* next;
}Link;

Link* initLink(){
    Link* L = new Link;
    L->data = 0;
    L->next = nullptr; //初始化指针域（头结点指针），防止野指针
    return L;
}
// 头插法
void insertHead(Link* L, int data){
    Link* node = new Link; //创建新结点，放在头指针后面
    node->data = data;
    node->next = L->next;
    L->next = node;
}
//尾插法
void insertTail(Link* L, int data){
    Link* node = L;
    //遍历到最后 NULL结点 之前
    while(node->next){
        node = node->next;
    }
    //插入新结点
    Link* newNode = new Link;
    newNode->data = data;
    newNode->next = nullptr;
    node->next = newNode;
}
// 删除结点
bool deleteElement(Link* L,int data){
    Link* node = L->next;
    // 遍历到最后
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

// 打印输出链表

void printLink(Link* L){
    Link* node = L->next;
    while(node){
        cout<<node->data<<"->";
        node = node->next;
    }
    cout<<"NULL";
}

int main(){
    Link* l1 = initLink();
    insertHead(l1,100);
    insertHead(l1,200);
    insertHead(l1,300);
    insertHead(l1,400);
    insertTail(l1,1);
    insertTail(l1,2);
    deleteElement(l1,200);
    deleteElement(l1,2);
    printLink(l1);
    return 0;
}

