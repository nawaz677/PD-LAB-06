#include<iostream>
using namespace std;


float calculate_price(string,string,float);


main()
{

    string fruit;
    string day;
    float quantity;
    float price;
    string invalid;

    cout<<"Enter the name of the fruit: ";
    cin>>fruit;
    cout<<"Enter the name of weekday: ";
    cin>>day;
    cout<<"Enter the quantity of the fruit: ";
    cin>>quantity;

    price=calculate_price(fruit,day,quantity);
    cout<<"The price of the Fruit is: "<<price<<endl;


}


float calculate_price(string fruit,string day,float quantity)
{
    float price; 


    if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday")
    {
        if(fruit=="banana")
        {
            price=quantity*2.50;
        }
        
        else if (fruit=="apple")
        {
            price=quantity*1.20;
        }

        else if(fruit=="orange")
        {
            price=quantity*0.85;
        }

        else if(fruit=="grapefruit")
        {
            price=quantity*1.45;
        }

        else if(fruit=="kiwi")
        {
            price=quantity*2.70;
        }

        else if(fruit=="pineapple")
        {
            price=quantity*5.50;
        }

        else if(fruit=="grapes")
        {
            price=quantity*3.50;
        }
    }

        if(day=="Saturday" || day=="Sunday")
        {

            if(fruit=="banana")
            {
                price=quantity*2.70;
            }

            else if(fruit=="apple")
            {
                price=quantity*1.25;
            }

            else if(fruit=="orange")
            {
                price=quantity*0.90;
            }

            else if(fruit=="grapefruit")
            {
                price=quantity*1.60;
            }

            else if(fruit=="kiwi")
            {
                price=quantity*3.00;
            }

            else if(fruit=="pineapple")
            {
                price=quantity*5.60;
            }

            else if(fruit=="grapes")
            {
                price=quantity*4.20;
            }

        }

return price;


}


