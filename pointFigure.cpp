#include<iostream>
using namespace std;

int main()
{
    double x,y;
    cout<<"Input point X: ";cin>>x;
    cout<<"Input point Y: ";cin>>y;
  
    if(x * y >= 0)
    {
        if  (x*x + y*y < 49) cout<<"The point lies inside the figure"<<endl;
        else
            if (x*x + y*y == 49) cout<<"The point lies on the line"<<endl;
            else cout<<"The point lies outside the figure"<<endl;
    }else
    {
        if (x*x < 49 && y*y < 49) cout<<"The point lies inside the figure"<<endl;
        else
            if (x*x > 49 && y*y > 49) cout<<"The point lies outside the figure"<<endl;
            else cout<<"The point lies on the line"<<endl;
    };
    
    return 0;
};
