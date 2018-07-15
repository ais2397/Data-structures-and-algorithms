//program to make d rotations in the array.
#include<iostream>
using namespace std;

int main(){
	
	int n, d, temp;

	cout<<"enter the number of elements ";
	cin>>n;

	int arr[n];
    
    cout<<"enter the elements ";
	for(int i=0;i<n;++i){
		
		cin>>arr[i];
	}

	cout<<"how many rotations? ";
	cin>>d;


	for(int i=0;i<d;++i)
	{	temp=arr[0];
		for(int j=0;j<n;++j)
		{
			arr[j]=arr[j+1];
		}
		arr[n-1]=temp;
	}

	cout<<"array after rotation: ";
	for(int i = 0;i<n;++i){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	return 0;
}
