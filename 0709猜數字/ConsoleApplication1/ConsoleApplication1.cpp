// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
//隨機數的頭文件
#include <cstdlib>
using namespace std;
//系統時間的頭文件
#include <ctime>
int main()
{
    //添加隨機數的種子 作用利用當前系統時間生成隨機數字，防止每次的隨機數都回事一樣的
    srand((unsigned int)time(NULL));
    int num = rand() %100+1 ; //rand() % 100生成0~99，所以+1就會=1~100的隨機數字
    cout << "請輸入數字：";
    int ans = 0; //初始化輸入的數字
    int a = 0; //計數器 紀錄猜的次數
    while (1) 
    {
        
        cin >> ans;
        
        if (ans == num)
        {
            break;

        }
        cout << "輸入的數字為：";
        if (ans < num)
        {
            a++;
            cout << ans<<'\t' << "猜得比隨機數小" << endl<<endl;
            
        }
        else
        {
            a++;
            cout << ans << '\t' << "猜得比隨機數大" << endl<<endl;
            
        }
        cout << "請繼續猜數字：";
    
    }

    cout  << "恭喜你猜對了，總共猜了" << a << "次";

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
