#include <iostream>
#include <string>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*cout << "請輸入年份>>";
	int year;
	cin >> year ;
	
	bool answer = true ;
	if (year % 4 != 0){
		answer = false ;
	}
	if (year % 100 == 0 ){
		answer = false ;
	}
	if (year % 400 ==0 ){
		answer = true ;
	}
	if(answer){
		cout << "是潤年" <<endl; 
	} else cout << "不是閏年" << endl;
	*/ 
	cout << "請輸入年份>>";
	int year;
	cin >> year ;
	
	bool answer = true ;
	if (year % 4 != 0 && year % 100 ==0 || year % 400 !=0){
		answer = false ;
	}

	if(answer){
		cout << "是潤年" <<endl; 
	} else cout << "不是閏年" << endl;
	return 0;
}
