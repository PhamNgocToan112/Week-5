#include<iostream>

using namespace std;

int main(){
	int val = 3;
	int &ref = val;
	int val2 = 4;
	
	cout << val  << " " << ref << endl;
	cout << &val  << " " << &ref << endl;
	
	//int &ref2; => khong the khai bao tham chieu neu khong tham chieu toi 1 bien khac
	
	//ref = val2; => khong the tham chieu toi bien khac
	
	
	
	return 0;
}
