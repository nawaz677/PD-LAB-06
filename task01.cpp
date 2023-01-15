#include<iostream>
using namespace std;


string printactivity(string,string);

main()
{
    string temp;
    string humidity;
    string activity;
    cout<<"Enter the temperature: ";
    cin>>temp;
    cout<<"Enter the humidity: ";
    cin>>humidity;


    activity=printactivity(temp,humidity);
    cout<<"The activity is: "<<activity;
}


string printactivity(string temp,string humidity)
{   
    string activity;

    if(temp=="warm" && humidity=="dry")
    {
        activity="Play Tennis";
    }

    else if(temp=="warm" && humidity=="humid")
    {
        activity="Swim";
    }

    else if(temp=="cold" && humidity=="dry")
    {
        activity="Play Basketball";
    }

    else if(temp=="cold" && humidity=="humid")
    {
        activity="Watch tv";
    }

    return activity;


}