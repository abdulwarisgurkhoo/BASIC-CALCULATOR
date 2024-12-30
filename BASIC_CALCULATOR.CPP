/*****************A BASIC CALCULATOR TO FIND ADD,SUBTRACTION,DIVISION OR MULTIPLE OF  NUMBERS**********************/
#include<iostream>
using namespace std;
int main ()
    {
        int num1,num2;
        char ch;
        cout<<"enter the numbers first number please :  ";
        cin>>num1;
        cout<<"\nenter the second number please : ";
        cin>>num2;
        cout<<"please enter the algebric operation you want to perform on entered numbers as below \n1. FOR ADDITION ENTER 'A'\n2. FOR SUBTRACTION ENTER 'S'\n3. FOR MULTIPLE ENTER 'M'\n4. FOR DIVISION ENTER 'D'  \n";
        cout<<"NOTE :--> ONLY WRITE CAPITAL LETTERS\n";
        cin>>ch;
        if(ch<int(65))
        {
            cout<<"operator is invalid please try again\n(use capital letters as mentioned above\n)";
        }
        if(ch=='A')
        {
            cout<<"THE ADDITION IS : "<<num1+num2;
        }
        else if (ch=='S')
        {
            cout<<"THE SUBTRACTION IS : "<<num1-num2;
        }
        else if(ch=='M')
        {
            cout<<"THE MULTIPLICATION IS  :"<< num1*num2;
        }
        else if (ch=='D')
        {
            cout<<"THE DIVISION IS : "<<(num1/float(num2));
        }
        return 0;



    }