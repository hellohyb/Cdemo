//
// Created by Huang on 2022/10/6 0006.
//

#include<iostream>
#include<Windows.h>
#include<commdlg.h>
#include<string>
using namespace std;

int main(){
    OPENFILENAME ofn;      // 公共对话框结构。
    TCHAR szFile[MAX_PATH]; // 保存获取文件名称的缓冲区。
    // 初始化选择文件对话框。
    ZeroMemory(&ofn, sizeof(OPENFILENAME));
    ofn.lStructSize = sizeof(OPENFILENAME);
    ofn.hwndOwner = NULL;
    ofn.lpstrFile = szFile;
    ofn.lpstrFile[0] = '\0';
    ofn.nMaxFile = sizeof(szFile);
    ofn.lpstrFilter = reinterpret_cast<LPCSTR>((LPCWSTR) "*.jpg\0*.jpeg\0*.png\0\0");
    ofn.nFilterIndex = 1;
    ofn.lpstrFileTitle = NULL;
    ofn.nMaxFileTitle = 0;
    ofn.lpstrInitialDir = NULL;
    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
    //ofn.lpTemplateName =  MAKEINTRESOURCE(ID_TEMP_DIALOG);
    // 显示打开选择文件对话框。
    if ( GetOpenFileName(&ofn) )
    {
        //显示选择的文件。
        cout << szFile << endl;
        // 设置壁纸
        const char* path = szFile;
        SystemParametersInfoA(0x0014,0,(PVOID)path,0x0002);
        //
        cout<<"壁纸设置成功！";
        //
        OutputDebugString(szFile);    //这一句是显示路径吗？为什么不显示？
        OutputDebugString(reinterpret_cast<LPCSTR>((LPCWSTR) "\r\n"));
    }else{
        cout<<"未选择文件！";
    }

    return 0;
}