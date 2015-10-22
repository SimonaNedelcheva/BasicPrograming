#include <iostream>
using namespace std;
int main()
{    int i,m ,n ,p,s,w,width=0;

    cout<<"enter size of the array  "<<'\n';
    cin>>m;
	cout <<"x";
	cin>>p;
    n=m*p;
	 int k[n];
        
    if (k==0) cout <<"error";
        else
        {for (i=0;i<n;i++) cin>>k[i];
        
        cout <<"array is";
        for (i=0;i<n;i++) {if (i%p!=0) cout<<k[i]<<",";
                            else cout <<'\n'<<k[i]<<",";}
        
       int height=m ;
       int** aa = new int*[ height ];
         for (s=0;s<m;s++)
            { width=0;
            for (i=(s*p)+1;i<p*(s+1);i++)
            {bool mach=false;
            for (n=s*p;((n<i)&&(mach==false));n++) if (k[i]==k[n]) mach=true;
                 if (!mach) { width++; w=width;
                 }aa[s]=new int[width]; 
                      }}

 cout <<'\n'<<"rezult";
     for (s=0;s<m;s++)
         {cout<<'\n'; aa[s][0]=k[s*p];  cout<< aa[s][0];width=0;
           for (i=(s*p)+1;i<p*(s+1);i++)
             {bool mach=false;
             for (n=s*p;((n<i)&&(mach==false));n++) if (k[i]==k[n]) mach=true;
                  if (!mach) { width++; w=width;
                               aa[s][w]=k[i]; cout<<" ," <<aa[s][w];}
             }
         }
       }
   return 0;
}

