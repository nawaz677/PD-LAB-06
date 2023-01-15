#include<iostream>
using namespace std;

float calculate_bill(char,char,int,float,float);


main()
{
    char service_code;
    char time;
    int minutes;
    float regular=10;
    float premium=25;
    float charges;

    cout<<"Enter the service code (R/P): ";
    cin>>service_code;
    cout<<"Enter the time of the day you used the service: ";
    cin>>time;
    cout<<"Enter the number of minutes the service was used: ";
    cin>>minutes;



    charges=calculate_bill(service_code,time,minutes,regular,premium);
    cout<<"The Charges are: $"<<charges;

}




float calculate_bill(char service_code,char time,int minutes,float regular,float premium)
{
    float charges;

    if(service_code=='R')
    {
        if(minutes<=50)
        {
            charges=regular;
        }

        else
        {
           charges=(regular)+(0.20*(minutes-50));
        }
    }


    if(service_code=='P')
    {
        if(time=='D' && minutes<=75)
        {
            charges=premium;
        }

        else if(time=='D' && minutes>75)
        {
            charges=(premium)+(0.10+(minutes-75));
        }
    }


    if(service_code=='P')
    {
        if(time=='N' && minutes<=100)
        {
            charges=premium;
        }

        else if(time=='N' && minutes>100)
        {
            charges=(premium)+(0.05+(minutes-100));
        }
    }

return charges;


}

