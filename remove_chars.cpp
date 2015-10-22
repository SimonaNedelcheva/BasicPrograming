#include<iostream>
#include<string.h>
using namespace std;

void removechars(char[], int, int);

int main()
{
	char a[200];
	cout<<"Input string: ";
	cin.getline(a,200);	
	int i=0;
	for(i = 0; a[i] == ' '; i++);
	if(i > 0)
		removechars(a, 0, i);
	for(i=0; a[i] != '\0'; i++);
	int k = i;
	for(i = i-1; a[i] == ' '; i--);
	k--;
	k -= i;
	removechars(a, i+1, k);
	
	for(i = 0; a[i]!='\0';i++)
	{
		if(a[i] == ' ')
		{
			for(k = i; a[k] == ' '; k++);
			k-=i;
			if(k > 1) removechars(a, i+1, k-1);
		}
	}
	cout<<a<<endl;
 	return 0;}

void removechars(char chr[], int from, int size)
{
	int i;
	for(i = from; chr[i+size] != '\0'; i++)
		chr[i] = chr[i+size];
	chr[i] = '\0';
}


