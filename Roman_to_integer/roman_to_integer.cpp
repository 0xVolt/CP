#include<bits/stdc++.h>
#include<string>
#include<iostream>


using namespace std;
class roman_to_integer{
    public:
    int sum=0;
    int num;
    int romanToInt(string s)//IV
    {
        //cout<<"Inside the function"<<endl;
        for(int i=0;i<s.length(); )
        {
            if(i==s.length()-1||roman((s[i]))>=roman(s[i+1]))
            {
                num=roman(s[i]);
                i++;

            }
            else
            {
                num=roman(s[i+1])-roman(s[i]);
                i=i+2;
            }
            sum=sum+num;
        }
        return sum;
        


    }

    int roman(char st)
    {
        int n;
        if(st=='V')
        {
            n=5;
        }
        else if(st=='L')
        {
            n=50;
        }
        else if(st=='I')
        {
            n=1;
        }
        else if(st=='X')
        {
            n=10;
        }
        else if(st=='C')
        {
            n=100;
        }
        else if(st=='D')
        {
            n=500; 
        }
        else if(st=='M')
        {
            n=1000;
        }
        else
        {
            exit(0);
        }
        return n;
    }

   

}R;//creating object R of class roman_to_integer
 int main()
    {
        string sm;
        cout<<"Enter the string"<<endl;
        getline(cin,sm);
        int f= R.romanToInt(sm);
        cout<<f<<endl;
        return 0;
        

    }