// ConsoleApplication1.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <stack>
using namespace std;
bool isValid(string s) {
    //用stack運行
    stack <char> ans;

    for (auto i : s) //讓i 帶入s的值 遞迴整個陣列
    {
        if (i == '(') //如果i帶入的值 = "(" 
        {
            ans.push(')'); //push一個 ")"進入堆疊
        }
        else if (i == '[')//如果i帶入的值 = "[" 
        {
            ans.push(']');//push一個 "]"進入堆疊
        }
        else if (i == '{')//如果i帶入的值 = "{" 
        {
            ans.push('}');//push一個 "}"進入堆疊
        }
        else {
            if (ans.empty()) { //因為i有值 但是都不是左括號，然後堆疊處又是空的
                return false;  //所以回傳false
            }
            if (i == ans.top()) //當i=堆疊處最新的資料的時候
            {
                ans.pop(); //移除i和堆疊處top的值
            }
            else {
                return false;
            }
        }
    }
    if (ans.empty()) {
        return true;
    }
    else return false;
}

int main()
{

    int arr[] = { 1,2,3 };
    string s = { ")" };
    cout << isValid(s);
    return 0;
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
