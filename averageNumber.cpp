
#include<iostream>
using namespace std;
int main()
{
	int n = 101;
	do
	{
	    cout<<"Input count elements (max 100):" ;
		cin>>n;
    }
    while(n>100 || n<1);

	int arr[100];
	int i;
	for(i=0;i<n;i++)
	{
		cout<<"Input element  ["<<i<<"]= "; 
		cin>>arr[i];
	}
	double avg,sum = 0;
	for(i=0;i<n;i++)
	    sum+=arr[i];
	avg=sum/n;
	cout<<"Average = "<<avg<<endl;
	int k;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>avg)
		{
			for(k=i;k<n-1;k++)
				swap(arr[k],arr[k+1]);
			n--;
			
			i--;
	    }
	}
	for(i=0;i<n;i++)
	cout<<arr[i]<<" ";
	return 0;
}



