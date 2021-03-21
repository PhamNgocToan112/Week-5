#include<iostream>

using namespace std;
int way1(int arr[], int low, int hight, int key) {
    int mid;
 
    while(low <= hight) {
        mid = (low + hight) / 2;
 
        
        if (arr[mid] == key) {
		return mid;
		} 
        else if (key > arr[mid])
            low = mid + 1;
        else
            hight = mid - 1;
    }
    return -1;
}



 
int main(){
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	
	int key = 2;
	int low = 3;
	int hight = 10;
	
	cout << way1(a, low, hight, key); 
	
	return 0;
}
