#include <iostream>

using namespace std;

int main(){
	int arr[5];
	
	//accessing the elements of the specified array
	for(int i = 0; i<5; i++){
		cout<<"Enter the element for index "<< i<<endl;
	 	cin>>arr[i];
	}
	
	for (int i = 0; i<5; i++){
		cout<<"Element at index "<< i <<" : "<<arr[i]<<endl;
	}
}