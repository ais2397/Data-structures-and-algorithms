//program to rotate an array d times by reversing algorithm.

#include<iostream>
using namespace std;

//function for reversing the array
void reverse(int a[], int start, int end)
{
	while(start<end)
    {
		int temp= a[start];
		a[start]= a[end];
		a[end]=temp;
		start++;
		end--;
	}
}

//funtion to take elements as input
void input(int n,int a[])
{
    cout<<"enter the elements: ";
	for(int i =0; i<n; ++i)
    {
		cin>>a[i];
	} cout<<"\n";
}

//funtion to print the array elements
void print(int n, int a[])
{
    for(int i=0;i<n;++i){
		cout<<a[i]<<" " ;
	}
	cout<<"\n";
}

int main(){
	
    int n,d;

	cout<<"number of elements: ";
	cin>>n;
	cout<<"rotations: ";
	cin>>d;
	
	int a[n];
    
    input(n,a);

	reverse(a,0, d-1);
	reverse(a,d,n-1);

	cout<<"array after sectionwise rotation: ";
    print(n,a);

	reverse(a,0,n-1);

	cout<<"array after rotation: ";
	print(n,a);

	return 0;
}
