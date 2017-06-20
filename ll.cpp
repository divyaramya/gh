#include<iostream.h>
#include<conio.h>
void main()
{
int a,b,c,largest;
clrscr();
cout<<"ENTER THE 3 NUMBERS";
cin>>a>>b>>c;
largest=(a>b)?(a>c?a:c):(b>c?b:c);
cout<<"LARGEST NUMBER:"<<largest;
getch();
}
