#include<iostream.h>
#include<string.h>
#include<graphics.h>


void deti();
void mali();
class room
{
protected:
int deti;
int mali;
int no;
char type[20];
public:
char r_type[20];
char getavail()
{
return(r_avail);
}


void putinfo()
{
cout<<"\n"<<vendi<<"\t "<<no<<;

}

void modify()
{
cout<<"\n Miresevini";
cout<<"\n____________________________________________________________________________";
cout<<"\n Nese deshironi qe te keni dhome nga deti shkruani 1 :";
cout<<"\n Nese deshironi qe te keni dhome nga mali shkruani 2 :";
cin>>vendi;
if ( vendi==1)
{
	cout<<"Zgjidhni dhomen nga 1-9 qe deshironi te keni me pamje nga deti: ";
	cin>>no;
}else
{	cout<<"Zgjidhni dhomen nga 10-15 qe deshironi te keni me pamje nga mali: ";
	cin>>no;
}
cout<<"\n... Dhoma juaj u rezervua me pamje nga "<<vendi<<" me dhomen numer "<<no<<;

else
{
cout<<"\n GABIM : Zgjidhni nje dhome tjeter sepse nuk eshte e lire ...";
}
}

void main()
{
int i,ch;
bill R[5];
char c;
getch();
xyz:
clrscr();
cout<<"\n Dhomat e lira ";
cout<<"\n ----------------- ";
for(i=0;i<=4;i++)
{
R[i].check();
}
cout<<"\n ";

void mali()
{
clrscr();
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n Dhomat me pamje nga Deti ";
cout<<"\n\n Ka dhoma nga 1 deri ne 9";

}

void deti()
{
clrscr();
cout<<"\n------------------------------------------------------------------";
cout<<"\n\n Dhomat me pamje nga Mali ";
cout<<"\n\n Ka dhoma nga 10 deri ne 15";
}

