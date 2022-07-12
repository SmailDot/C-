// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
using namespace std;

int main()
{
    //創建一個陣列
    int arr[] = { 1,3,9,8,2 };
    cout << "陣列翻轉前：";
    for (int i = 0;i < (sizeof(arr) / sizeof(arr[0]));i++)
    {
        cout<<arr[i];

    }
    
    cout << "陣列翻轉後：";
    /*for (int i = 0;i < (sizeof(arr) / sizeof(arr[0])) / 2;i++)
    {
        if ((sizeof(arr) / sizeof(arr[0])) >i) 
        {
            int temp = arr[i];
            int temp2 = arr[(sizeof(arr) / sizeof(arr[0])) - i - 1];
            arr[(sizeof(arr) / sizeof(arr[0])) - i - 1] = temp;
            arr[i] = temp2;
            
        }
        cout << arr[i];
    }*/
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0;i < (sizeof(arr) / sizeof(arr[0])) / 2;i++)
    {
        
        int temp = arr[length-i-1];
        arr[length - i - 1] = arr[i];
        arr[i] = temp;
        

        
    }
    for (int i = 0;i < (sizeof(arr) / sizeof(arr[0]));i++)
    {
        cout << arr[i];
    }
   
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
