﻿// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;
int main()
{
    //1.將所有百位數進行輸出 (100~999)
    int start = 0;
    cout << "請輸入要查找到的水仙花數上限：";
    cin >> start;
    int num = 100;
    int d = 0;//計數器
    do 
    {
        //2.在所有三位數中找到水仙花數
        int a = 0;//個位
        int b = 0;//十位
        int c = 0;//百位

        a = num % 10;           //可以得到百位數的個位數
        b = num / 10 % 10;      //可以得到百位數的十位數
        c = num / 100;          //可以得到百位數的百位數
        
        if ((a * a * a + b * b * b + c * c * c) == num)
        {
            cout << num << '\n';
            d++; //只要有1個就會+1
        }//如果是水仙花數，才輸出
        num++;
    } while (num < start);
    cout << "有以上這"<<d<<"個";
    

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
