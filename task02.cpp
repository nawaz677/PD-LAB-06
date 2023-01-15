#include<iostream>
using namespace std;

float marks_obtained(int,int,int,int,int);
float percentage_calculated(float,float);
string calculategrading(float);

main()
{
    string name;
    int marks_1;
    int marks_2;
    int marks_3;
    int marks_4;
    int marks_5;
    
    float total_marks=500;
    float obtained_marks;
    float percentage;
    string grade;


    cout<<"Enter the Student name: ";
    cin>>name;
    cout<<"Enter the marks of English: ";
    cin>>marks_1;
    cout<<"Enter the marks of Maths: ";
    cin>>marks_2;
    cout<<"Enter the marks of Chemistry: ";
    cin>>marks_3;
    cout<<"Enter the marks of Social Science: ";
    cin>>marks_4;
    cout<<"Enter the marks of Biology: ";
    cin>>marks_5;


    obtained_marks=marks_obtained(marks_1,marks_2,marks_3,marks_4,marks_5);
    cout<<"The Marks Obtained by the Student are: "<<obtained_marks<<endl;

    percentage=percentage_calculated(obtained_marks,total_marks);
    cout<<"The Total Percentage of the Marks of Student is: "<<percentage<<endl;

    grade=calculategrading(percentage);
    cout<<"The Grade of the Student is: "<<grade;

}

float marks_obtained(int marks_1,int marks_2,int marks_3,int marks_4,int marks_5)
{
    float obtained_marks;
    obtained_marks=marks_1+marks_2+marks_3+marks_4+marks_5;

    return obtained_marks;
}



float percentage_calculated(float obtained_marks,float total_marks)
{
    float percentage;
    percentage=(obtained_marks/total_marks)*100.0;

    return percentage;
}


string calculategrading(float percentage)
{
    
    string grade;

    
    if(percentage>=90 && percentage<=100)
    {
        grade="A+";
    }

    else if(percentage>=80 && percentage<90)
    {
        grade="A";
    }

    else if(percentage>=70 && percentage<80)
    {
        grade="B+";
    }

    else if(percentage>=60 && percentage<70)
    {
        grade="B";
    }

    else if(percentage>=50 && percentage<60)
    {
        grade="C";
    }

    else if(percentage>=40 && percentage<50)
    {
        grade="D";
    }

    else if(percentage<40)
    {
        grade="F";
    }


    return grade;


}





