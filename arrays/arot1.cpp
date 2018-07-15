#include <bits/stdc++.h>
using namespace std;

void print(int a[])
{
   for(int i = 0; i<5; ++i)
   {
        cout<<a[i]<<" ";
    }
	cout<<"\n"; 
}

int main(){
	
	int arr[]={1,2,3,4,5};
	//if rotation =2
    int temp[]={1,2}; //store 1st two elements in temp array
	
	cout<<"array before rotation: ";
    print(arr);
	
	cout<<"array after rotation: ";
	for (int i=2; i<5; ++i)
        cout<<arr[i]<<" ";
	
	for(int i =0;i<2;++i)
		cout<<temp[i]<<" ";

	cout<<"\n";

	return 0;

}

