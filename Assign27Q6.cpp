#include<iostream>
#include<string.h>
using namespace std;

class CString
{
    public:
        char str[20];
    public:
        void get_string()
        {
                cout<<"\n Enter String              :   ";
                cin>>str;
        }
        void display()
        {
                cout<<str;
        }
        CString operator+(CString x)
        {
                CString s;
                strcat(str, x.str);
                strcpy(s.str, str);
                return s;
        }
        int operator==(CString &t);   //Comparing String
};
int CString::operator==(CString &t)
{
        for(int i=0; str[i]!='_'; i++)
        {
                for(int j=0; t.str[j]!='_'; j++)
                {
                        if(str[i]==t.str[j])
                        {
                                return 0;
                        }
                        else
                        {
                                return 1;
                        }
                }
        }
}
int main()
{
        CString str1, str2, str3;
        int result=0;

        str1.get_string();
        str2.get_string();

        cout<<"\n ----------------------------------------------";
        cout<<"\n\n First String is           :  ";
        str1.display();

        cout<<"\n\n Second String is          :  ";
        str2.display();
        cout<<"\n ----------------------------------------------";
        str3=str1+str2;
        cout<<"\n\n Concatenated String is    :  ";
        str3.display();

        result=str1==str2;
        if(result==0)
        {
                cout<<"\n\n Both Strings are Equal";
        }
        else
        {
                cout<<"\n\n Both Strings are Not Equal";
        }
        return 0;
}
