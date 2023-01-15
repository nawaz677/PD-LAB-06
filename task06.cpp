#include<iostream>
using namespace std;


float calculate_price(string,int,string);

main()
{
    string month;
    int days;
    string type;
    float price;
    


    cout<<"Enter the month of stay: ";
    cin>>month;
    cout<<"Enter the number of days for stay: ";
    cin>>days;
    cout<<"Enter the type of room: ";
    cin>>type;

    price=calculate_price(month,days,type);
    cout<<"The final price is: $"<<price;

}

float calculate_price(string month,int days,string type)
{

    float price;
    
    if((month=="May" || month=="October") && (type=="Studio"))
    {
        if(days>7 && days<=14)
        {
            price=(days*50)-(0.05*days*50);
        }

        else if(days>14)
        {
            price=(days*50)-(0.3*days*50);
        }
        
        else
        {
            price=days*50;
        }

    }


    else if((month=="June" || month=="September") && (type=="Studio"))
    {
        if(days>14)
        {
            price=(days*75.20)-(0.2*days*75.20);
        }

        else
        {
            price=days*75.20;
        }

    }

    else if(type=="Apartment" && days>14)
    {
        if(month=="May" || month=="October")
        {
            price=(days*65)-(0.1*days*65);
        }

        else if(month=="June" || month=="September")
        {
            price=(days*68.70)-(0.1*days*68.70);
        }

        else if(month=="July" || month=="August")
        {
            price=(days*77)-(0.1*days*77);
        }
    }
    
return price;

 }















    







