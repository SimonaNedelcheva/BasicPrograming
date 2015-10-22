
#include<iostream>
using namespace std;
int main()
{
	int n,i,length;
	int lenght=0;
	int pos_old=0,count_old=0,count_new=0, pos_new=0;
	
	cout<<"Input the size of the array: ";
	cin>>n;
	int array[n];
	for (i=0;i<n;i++)
	{
		cout<<" array["<<i<<"]= ";
		cin>>array[i];
	}
	
	i=0;
	do
	{	
	if (array[i]==array[i+1])
	{
		pos_old=i;
		count_old=1;
		do
		{
		i++ ;
		count_old++ ;
		}	
		while ( array[i]==array[i+1] && i<(n-1));
	}
	 if (count_old > count_new )
	 {
	 count_new=count_old;
	 pos_new=pos_old;
	 }
 	i++;
	}	
 	while (i<n);

	{	cout<<"Length: "<<count_new <<"  Position: "<<pos_new;}


return 0;
}



