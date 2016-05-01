#include<iostream>

using namespace std;

int main (){

int iTurn,iExcersize,iChest=0,iBisceps=0,iBack=0;

cin >> iTurn;
for(int i=1;i<=iTurn;i++)
{
cin >> iExcersize;
if (i%3==1)
iChest += iExcersize;
else if (i%3==2)
iBisceps += iExcersize;
else if (i%3==0)
iBack += iExcersize;

}
if(iChest>iBisceps&&iChest>iBack)
cout << "chest";
else if(iChest<iBisceps&&iBisceps>iBack)
cout << "biceps";
else if(iChest<iBack&&iBisceps<iBack)
cout << "back";
}
