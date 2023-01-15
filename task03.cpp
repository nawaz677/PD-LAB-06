#include<iostream>
using namespace std;

string Show_Zodiac_Sign(int,string);



main()
{
    int date;
    string month;
    string sign;

    cout<<"Enter your date of birth: ";
    cin>>date;
    cout<<"Enter your month of birth: ";
    cin>>month; 

    sign=Show_Zodiac_Sign(date,month);
    cout<<"Your Zodiac Sign is: "<<sign<<endl;

}



string Show_Zodiac_Sign(int date,string month)
{
    string sign;

    if((date>=21 && month=="March") || (date<=19 && month=="April"))
    {
        sign="Aries";
    }

    else if((date>=20 && month=="April") || (date<=20 && month=="May"))
    {
        sign="Taurus";
    }

    else if((date>=21 && month=="May") || (date<=20 && month=="June"))
    {
        sign="Gemini";
    }

    else if((date>=21 && month=="June") || (date<=22 && month=="July"))
    {
        sign="Cancer";
    }

    else if((date>=23 && month=="July") || (date<=22 && month=="August"))
    {
        sign="Leo";
    }

    else if((date>=23 && month=="August") || (date<=22 && month=="September"))
    {
        sign="Virgo";
    }

    else if((date>=23 && month=="September") || (date<=22 && month=="October"))
    {
        sign="Libra";
    }

    else if((date>=23 && month=="October") || (date<=21 && month=="November"))
    {
        sign="Scorpio";
    }

    else if((date>=22 && month=="November") || (date<=21 && month=="December"))
    {
        sign="Sagittarius";
    }

    else if((date>=22 && month=="December") || (date<=19 && month=="January"))
    {
        sign="Capricorn";
    }

    else if((date>=20 && month=="January") || (date<=18 && month=="Feburary"))
    {
        sign="Aquarius";
    }

    else if((date>=19 && month=="Feburary") || (date<=20 && month=="March"))
    {
        sign="Pisces";
    }


    return sign;


}