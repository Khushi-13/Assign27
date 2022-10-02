#include<iostream>
#include<stdio.h>
using namespace std;

class fraction
{
    private:
        long num, deno;
    public:
        fraction(long int n=0, long int d=0)
        {
                num=n;
                deno=d;
        }
        friend void operator>>(istream &in, fraction &f)
        {
                cout<<"\n Numerator    :   ";
                in>>f.num;
                cout<<"\n Denominator  :   ";
                in>>f.deno;
        }
        friend void operator<<(ostream &out, fraction &f)
        {
                out<<f.num<<"/"<<f.deno;
        }
        fraction operator++()
        {
                ++num;
                ++deno;
                return (*this);
        }
        fraction operator++(int s)
        {
                fraction tmp=*this;
                this->num++;
                this->deno++;
                return tmp;
        }
};
int main()
{
        fraction f1,f2;
        cout<<"\n f1    :  ";
        cout<<f1;
        cout<<"\n f2    :  ";
        cout<<f2;
        cout<<"\n\n Enter 1st Fraction Value \n";
        cin>>f1;
        cout<<"\n f1++  :  ";
        f1++;
        cout<<f1;
        cout<<"\n ++f1  :  ";
        ++f1;
        cout<<f1;
        cout<<"\n\n Enter 2nd Fraction Value \n";
        cin>>f2;
        f2=++f1;
        cout<<"\n f2 = ++f1";
        cout<<"\n f1    :   ";
        cout<<f1;
        cout<<"\n f2    :   ";
        cout<<f2;
        f2=f1++;
        cout<<"\n\n f2 = f1++";
        cout<<"\n f1    :  ";
        cout<<f1;
        cout<<"\n f2    :  ";
        cout<<f2;
        return 0;
}
