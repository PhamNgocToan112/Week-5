#include<iostream>

using namespace std;

int factorial(int x){
	if(x == 1)return 1;
	else cout << "x = " << x * factorial(x - 1) << " at " << &x << endl;
	

	return x* factorial(x - 1);
	
	
	
}



int main(){
	cout <<	factorial(3);
	
	
	
	
	
	return 0;
}
