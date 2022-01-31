#include<iostream.h>
#include<conio.h>


int main(){
clrscr();
int u;
int l,m,n;

cout<<"Number of lines - ";
cin>>u;
for(l=1;l<=u;l++){

for(n=u-l;n<=u;n++)
cout<<" ";
for(m=u-l;m>0;m--)
cout<<"* ";
cout<<endl;
}
getch();
return 0;
}