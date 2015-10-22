#include<iostream>
using namespace std;

int checkDate(int day, int month, int year)
{
    if (month <= 12 && month > 0)
    {
        switch (month)
        {
            case 2:
				
                return day <= 28 + (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0));
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                return day > 0 && day <= 30;
                break;
            
            default:
                return day > 0 && day <= 31;
                break;
        };
    }
    else return 0;
};

int main()
{
    int day, month, year;
    cout<<"Input first number: ";cin>>day;
    cout<<"Input second number: ";cin>>month;
    cout<<"Input third number: ";cin>>year;
    cout<<endl;
    
    if(day < 0 || month < 0 || year < 0) cout<<"The date is incorrect!"<<endl;
    else
    {
        if(checkDate(day,month,year)) cout<<"The date is correct in format: DD MM YYYY"<<endl; else
        
        if(checkDate(month,day,year)) cout<<"The date is correct in format: MM DD YYYY"<<endl; else
        
        if(checkDate(year,month,day)) cout<<"The date is correct in format: YYYY MM DD"<<endl; else
            cout<<"The date is incorrect!"<<endl;
    };
    
    system("pause");
    return 0;
};
