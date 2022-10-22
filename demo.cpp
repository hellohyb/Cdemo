//
// Created by Huang on 2022/10/6 0006.
//

#include<iostream>
#include<Windows.h>
using namespace std;
int main(){
    const char* path = "C:\\Users\\Administrator\\Desktop\\picture\\±ÚÖ½\\wallhaven-dgekog.jpeg";
    SystemParametersInfoA(0x0014,0,(PVOID)path,0x0002);
    return 0;
}