#include<iostream>
#include<string>
using namespace std;

int marks[8] = {0};

void gpa(int marks[])
{
    for(int i = 0; i < 8; i++)
    {
        int num = marks[i];
        if(num<=100 && num >= 90)
            marks[i] = 10;
        else if(num<90 && num >= 80)
            marks[i] = 9;
        else if(num<80 && num >= 70)
            marks[i] = 8;
        else if(num<70 && num >= 60)
            marks[i] = 7;
        else if(num<60 && num >= 50)
            marks[i] = 6;
        else if(num<50 && num >= 40)
            marks[i] = 5;
        else if(num<40)
            marks[i] = 0;
        else
            marks[i] = 0;
    }
    
}

void cse(void)
{
    cout<<"ENTER YOUR MARKS"<<endl;
    cout<<"Programming for Problem Solving Lab : ";
    cin>>marks[0];
    cout<<"APPLIED PHYSICS LAB : ";
    cin>>marks[1];
    cout<<"GENDER SENSITIZATION : ";
    cin>>marks[2];
    cout<<"MATHEMATICS ĪĪ : ";
    cin>>marks[3];
    cout<<"APPLIED PHYSICS : ";
    cin>>marks[4];
    cout<<"PROGRAMMING FOR PROBLEM SOLVING : ";
    cin>>marks[5];
    cout<<"ENGINEERING GRAPHICS : ";
    cin>>marks[6];
    
    gpa(marks);
    float total = marks[0]*1.5 + marks[1]*1.5 + marks[2]*0 + marks[3]*4 + marks[4]*4 + marks[5]*4 + marks[6]*3;
    float cgpa = total / 18;
    cout<<"Your CGPA = "<<cgpa;
}

void ece(void)
{
    cout<<"ENTER YOUR MARKS"<<endl;
    cout<<"ENGINEERING WORKSHOP : ";
    cin>>marks[0];
    cout<<"ENGINEERING CHEMISTRY LAB : ";
    cin>>marks[1];
    cout<<"ENGLISH LANGUAGE COMMUNICATION SKILLS LAB : ";
    cin>>marks[2];
    cout<<"BASIC ELECTRICAL ENGINEERING LAB : ";
    cin>>marks[3];
    cout<<"MATHEMATICS ĪĪ : ";
    cin>>marks[4];
    cout<<"CHEMISTRY : ";
    cin>>marks[5];
    cout<<"BASIC ELECTRICAL ENGINEERING : ";
    cin>>marks[6];
    cout<<"ENGLISH : ";
    cin>>marks[7];
    
    gpa(marks);
    float total = marks[0]*2.5 + 1.5*marks[1] + 1*marks[2] + 1*marks[3] + 4*marks[4] + 4*marks[5] + 3*marks[6] + 2*marks[7];
    float cgpa = total/19;
    cout<<"YOUR CGPA = "<<cgpa;

}

void mech(void)
{
    cout<<"ENTER YOUR MARKS"<<endl;
    cout<<"ENGINEERING WORKSHOP : ";
    cin>>marks[0];
    cout<<"ENGINEERING CHEMISTRY LAB : ";
    cin>>marks[1];
    cout<<"ENGLISH LANGUAGE AND COMMUNICATION SKILLS LAB : ";
    cin>>marks[2];
    cout<<"MATHEMATICS ĪĪ : ";
    cin>>marks[3];
    cout<<"CHEMISTRY : ";
    cin>>marks[4];
    cout<<"ENGLISH : ";
    cin>>marks[5];
    cout<<"ENGINEERING MECHANICS : ";
    cin>>marks[6];
    
    gpa(marks);
    float total = marks[0]*2.5+marks[1]*1.5 + marks[2]*1 + marks[3]*4 + marks[4]*4 + marks[5]*2 + marks[6]*4;
    float cgpa = total / 19;
    
    cout<<"YOUR CGPA = "<<cgpa;

}

void civil(void)
{
    cout<<"ENTER YOUR MARKS"<<endl;
    cout<<"ENGINEERING WORKSHOP : ";
    cin>>marks[0];
    cout<<"ENGINEERING CHEMISTRY LAB : ";
    cin>>marks[1];
    cout<<"ENGLISH LANGUAGE AND COMMUNICATION SKILLS LAB : ";
    cin>>marks[2];
    cout<<"MATHEMATICS ĪĪ : ";
    cin>>marks[3];
    cout<<"CHEMISTRY : ";
    cin>>marks[4];
    cout<<"ENGLISH : ";
    cin>>marks[5];
    cout<<"ENGINEERING MECHANICS : ";
    cin>>marks[6];
    
    gpa(marks);
    float total = marks[0]*2.5+marks[1]*1.5 + marks[2]*1 + marks[3]*4 + marks[4]*4 + marks[5]*2 + marks[6]*4;
    float cgpa = total / 19;
    
    cout<<"YOUR CGPA = "<<cgpa;
}

int main()
{
    string name1,name2;
    string roll_no;
    cout<<"Enter Your Name : ";
    cin>>name1>>name2;
    cout<<"Enter Your Roll Number : ";
    cin>>roll_no;
    if(roll_no[7] == '1')
        civil();
    else if(roll_no[7] == '3')
        mech();
    else if(roll_no[7] == '4')
        ece();
    else if(roll_no[7] == '5')
        cse();
    else
        cout<<"Invalid Roll Number"<<endl;
    return 0;
}