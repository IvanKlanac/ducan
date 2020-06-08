#include <iostream>
#include<cmath>
using namespace std;
double jabuke;
double bomboni;
double jagode;
double krafne;
double novcanik=100;
float userchoice;

int main()
{
    while(novcanik>=0)
{
   cout<<"\n\nDobrodosli u Trgostil!\n\n";
   cout<<"Izbornik:\n\n";
   cout<<"1    Jabuke       10 kn\n";
   cout<<"2    Bomboni       15 kn\n";
   cout<<"3    Jagode       7 kn\n";
   cout<<"4    Krafne       10 kn\n\n";
   cout<<"Imate\n"<<jabuke<< "Jabuke\n"<<bomboni<< "Bomboni\n" <<jagode<< "Jagode\n"<<krafne<< "Krafne\n\n";
   cout<<"Preostalo novaca  kn "<<novcanik<<".\n\n";
   cout<<"Napisite broj koji predstavlja proizvod koji zelite ili napisite broj 5 za provjeru.\n\n\n";
   cin>>userchoice;
   if(userchoice==1)
{
 jabuke++;
 novcanik=novcanik-10;
}
   if(userchoice==2)
{
 bomboni++;
 novcanik=novcanik-15;
}
   if(userchoice==3)
{
 jagode++;
 novcanik=novcanik-7;
}
   if(userchoice==4)
{
 krafne++;
 novcanik=novcanik-10;
}
   if(userchoice==5)
{
 cout<<"\n\n Ugodan ostatak dana!\n\n";
 cin.get();
  return 0;
}
}
}
