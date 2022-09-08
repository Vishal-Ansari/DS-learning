#include <iostream>
using namespace std;
int main() {
int ch;
cout<<"\n NAME : Tejaswani Upadhyay ; SECTION : H  ; ROLL NO. : 54 ; SSTUDENT_ID : 200121265\n";
cout<<"| MENU |\n";
cout<<"<----------------------->\n";
cout<<"| 1.Int |\n";
cout<<"| 2.Unsigned int |\n";
cout<<"| 3.Signed int |\n";
cout<<"| 4.Char |\n";
cout<<"| 5.Unsigned char |\n";
cout<<"| 6.Unsigned char |\n";
cout<<"| 7.Float |\n";
cout<<"| 8.Double |\n";
cout<<"| 9.Exit |\n";
cout<<"<----------------------->\n";
while(1) {
cout<<"Enter your choice (1-8)::";
cin>>ch;
switch (ch)
{
case 1: cout<<sizeof(int)<<"\n"; break;
case 2: cout<<sizeof(unsigned int)<<"\n"; break;
case 3: cout<<sizeof(signed int)<<"\n"; break;
case 4: cout<<sizeof(char)<<"\n"; break;
case 5: cout<<sizeof(unsigned char)<<"\n"; break;
case 6: cout<<sizeof(signed char)<<"\n"; break;
case 7: cout<<sizeof(float)<<"\n"; break;
case 8: cout<<sizeof(double)<<"\n"; break;
case 9: exit(0);
}
}
}