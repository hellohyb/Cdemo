//
// Created by Huang on 2022/10/6 0006.
//

#include<iostream>
#include<Windows.h>
#include<commdlg.h>
#include<string>
using namespace std;

int main(){
    OPENFILENAME ofn;      // �����Ի���ṹ��
    TCHAR szFile[MAX_PATH]; // �����ȡ�ļ����ƵĻ�������
    // ��ʼ��ѡ���ļ��Ի���
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
    // ��ʾ��ѡ���ļ��Ի���
    if ( GetOpenFileName(&ofn) )
    {
        //��ʾѡ����ļ���
        cout << szFile << endl;
        // ���ñ�ֽ
        const char* path = szFile;
        SystemParametersInfoA(0x0014,0,(PVOID)path,0x0002);
        //
        cout<<"��ֽ���óɹ���";
        //
        OutputDebugString(szFile);    //��һ������ʾ·����Ϊʲô����ʾ��
        OutputDebugString(reinterpret_cast<LPCSTR>((LPCWSTR) "\r\n"));
    }else{
        cout<<"δѡ���ļ���";
    }

    return 0;
}