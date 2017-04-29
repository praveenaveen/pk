#include<iostream>
#include<cstring>
using namespace std;
class zooanimal
{
char*name;
int weightdate,weight,cageno;
public:
zooanimal(char*n,int wd,int w,int c)
{
name=new char[20];
strcpy(name,n);
weightdate=w,d;
weight=w;
cageno=c;
}
void print_det()
{
cout<<"\n animal name:"<<name<<endl;
cout<<"\n animal weightdate:"<<weightdate<<endl;
cout<<"\n animal weight"<<weight<<endl;
cout<<"\n animal cageno."<<cageno;
}
};
int main()
{
int n,i,aweight,awd,acgno;
char*aname;
zooanimal*a[10];
cout<<"\n enter no.of animals"<<i<<"name";
cin>>aname;
cout<<"\n enter aanimal weight";
cin>>aweight;
cout<<"\n enter animal weight:date";
cin>>awd;
cout<<"\n enter cageno.:";
cin>.acegno;
a[i]=new animal(aname,awd,aweight,acgno);
i++;
}
}
