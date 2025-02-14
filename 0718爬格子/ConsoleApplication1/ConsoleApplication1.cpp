﻿// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "請問你要爬的目標格子是：";
    int n = 0;
    cin >> n;
    vector <int> f (n + 1, 0);
    //f[i]= f[i-1] + f[i-2] 費波那契數
    //因為怕會越界(異位) 所以這邊給他一個初始值
    f[0] = 1;//當目標是0格樓梯 ，所以不用爬也是一種解 所以=1
    f[1] = 1;
    for (int i = 2;i <= n;++i) //從目標是N=2的時候開始
    {
        f[i] = f[i - 1] + f[i - 2];
    }
   // return f[n];
    cout << "總共有" << f[n] << "個解";
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
