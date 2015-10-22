
#include<iostream>
using namespace std;
int main()
{
	int n,j,i;
	cout<<"Enter size of the square: ";
	cin>>n;
	int arr[n][n];
	for ( i=0;i<n;i++)
	{	
			for ( j=0;j<n;j++)
		{	
			cout <<" square[" << i << "] [ "<< j <<"]=";
        	cin>>arr[i][j];
		}
	}
	int sum[n+n+2];
	
	for(i=0;i<n+n+2;i++) sum[i] = 0;

	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n;j++)
	    {
		    sum[2*i] += arr[i][j];
			sum[2*i+1] += arr[j][i];
	    }
	
	    sum[n+n] += arr[i][i];
	
		sum[n+n+1] += arr[i][n-1-i];
	}
	
	for(i=0;i<n+n+1;i++)
	{
	    if(sum[i] != sum[i+1])
	    {
 		    cout<<"Not magical"<<endl;
 		    return 0;
 		}
	}
	cout<<"Enter the size of the array!"<<endl;
	return 0;
}



