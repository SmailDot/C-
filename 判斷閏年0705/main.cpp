#include <iostream>
#include <string>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*cout << "�п�J�~��>>";
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
		cout << "�O��~" <<endl; 
	} else cout << "���O�|�~" << endl;
	*/ 
	cout << "�п�J�~��>>";
	int year;
	cin >> year ;
	
	bool answer = true ;
	if (year % 4 != 0 && year % 100 ==0 || year % 400 !=0){
		answer = false ;
	}

	if(answer){
		cout << "�O��~" <<endl; 
	} else cout << "���O�|�~" << endl;
	return 0;
}
