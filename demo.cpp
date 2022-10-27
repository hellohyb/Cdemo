//
// Created by Huang on 2022/10/6 0006.
//

#include<iostream>
#include<Windows.h>
using namespace std;
void setWallpaper(){
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
//    ofn.nFilterIndex = 1;
//    ofn.lpstrFileTitle = NULL;
//    ofn.nMaxFileTitle = 0;
//    ofn.lpstrInitialDir = NULL;
//    ofn.Flags = OFN_PATHMUSTEXIST | OFN_FILEMUSTEXIST;
//    ofn.lpTemplateName =  MAKEINTRESOURCE(ID_TEMP_DIALOG);
    // 显示打开选择文件对话框。
    if ( GetOpenFileName(&ofn) )
    {
        //显示选择的文件。
        cout << szFile << endl;
        // 设置壁纸
        const char* path = szFile;
//      SystemParametersInfoA(0x0014,0,(PVOID)path,0x0002);
        //SPIF_UPDATEINIFILE永久设置
        SystemParametersInfoA(SPI_SETDESKWALLPAPER,0,(PVOID)path,SPIF_UPDATEINIFILE);
        //
        MessageBox(NULL,TEXT("壁纸设置成功！"),TEXT("成功"),MB_OK);
        cout<<"壁纸设置成功！";
        //
//        OutputDebugString(szFile);    //这一句是显示路径吗？为什么不显示？
//        OutputDebugString(reinterpret_cast<LPCSTR>((LPCWSTR) "\r\n"));
    }else{
        cout<<"未选择文件！";
    }

}
int main(){
    setWallpaper();
//    SystemParametersInfoA(0x0014,0,(PVOID)"https://www.bing.com/th?id=OHR.BridgeofSighs_ZH-CN5414607871_1920x1080.jpg",0x0002);
    return 0;
}