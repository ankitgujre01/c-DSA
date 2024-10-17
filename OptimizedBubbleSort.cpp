#include<iostream>
using namespace std;
int main(){
	float arr[] = {1.963, 23,55,8,9.9,1.1011};
	int size = sizeof(arr)/sizeof(arr[0]);
	
	cout<<"original array elements :\n";
	
	for(int i = 0; i<size; i++){
		cout<<arr[i]<<"\t";
	}
	cout<<"\nAfter Bubble sort :\n";
	
	for(int i = 0; i<size-1; i++){
		int swapCounter = 0;
		
		for(int j = 0; j<size-i-1; j++){
			if(arr[j]>arr[j+1]){
				float tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
				swapCounter++;
			}
		}
		if(swapCounter == 0){
			break;
		}
	}
		//print the sorted array
		for(int i = 0; i<size; i++){
			cout<<arr[i]<<"\t";
		}
	}

