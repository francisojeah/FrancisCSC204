#include <iostream>

using namespace std;

int main() {
	int arr[] = {5,6,3,2,1,4,7,8};
	int value;

	cout<<"Enter the value you want to search: ";
	cin>>value;

	for (int i=0; i<9; i++) {
		if(arr[i]==value) {
			cout<<"Element found at index "<< i <<" : "<< arr[i]<<endl;
			break;
		}
		if(i==8) {
			cout<<"Value not in array"<<endl;
		}
	}
}