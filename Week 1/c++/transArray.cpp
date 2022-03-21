#include <iostream>

using namespace std;

int main(){
	int arr[5];
	
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	
	//accessing the elements of the specified array
	for (int i=0; i<5; i++){
		cout<<"Element at index "<<i <<" : "<<arr[i]<<endl;
	}
}