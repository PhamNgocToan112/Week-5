#include<iostream>

using namespace std;

int main(){
	int a[20];
	char b[20];
	
	for(int i = 0; i < 3; i++)
	{
		cout << &a[i] <<" " ; 
		
	}
	
	cout << endl;	
	
	for(int i = 0; i < 3; i++){
		cout << (void*)&b[i] << " " ;
		
	}
	cout << endl;
	
	// phan dau giong nhau, phan cuoi khac nhau 
	
	a[0] = 2;
	 b[0] = 'a';
	
	
	for(int i = 0; i < 3; i++){
		cout << (void*)&a[i] << " ";
		
	}
	
	cout << endl;
	
	for(int i = 0; i < 3; i++){
		cout << (void*)&b[i] << " ";
	}
	
	
	
	// ket qua van the, khong thay doi
	
	
	
	
	
	
	
	return 0;
}
