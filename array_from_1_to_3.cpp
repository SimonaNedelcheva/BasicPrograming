
#include<iostream>
using namespace std;
int main()
{
	int n,temp,i,j,a;
	cout<<"Enter the size of the array: ";
	cin>>n;
    int arr[n];
    i=0 ;
    do
	{
	    cout <<"Position number: "  << i << " enter number from 1 to 3= ";
	    cin >>a;
	    if ((a<4) && (a>0))
  	     {
				arr[i]=a;
				i++;
		}
		else cout <<"wrong number. enter new\n";

		
	} while (i < n);
	
	
	for( i=0;i<n;i++)
	{
		temp=arr[n];
	 int a=i;
		for ( j=i+1;j<n;j++)
		if (arr[j]<temp)
		{
			temp=arr[j];
			a=j;
		}
		swap(arr[a],arr[i]);
	}

	for( i=0;i<n;i++)
	cout<<arr[i]<<"\n";

return 0;
}
