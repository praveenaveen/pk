#include<iostream;
using namespace std;
int main()
{
int a,b,c;
char choice;
cout<<"enter choice";
cin>>choice;
cout<<"enter two numbers:";
cin>>a>>b;
switch (choice)
{
			case '+' : c=a+b;
                    cout<<c;
						  break;
         case '-' : c=a-b;
						  cout<<c;
                    break;
         case '*' : c=a*b;
                    cout<<c;
                    break;
         case '/' : c=a/b;
                    cout<<c;
                    break;
default : cout<<"syntax error";
}
return o;
}
