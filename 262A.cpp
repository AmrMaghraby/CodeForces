#include<iostream>

using namespace std;

int main()
{

int iN ,KD,Input;

cin >> iN >> KD;

int x=0,cnt=0,y=0;

for(int i=0;i<iN;i++)
{
cnt=0;
cin >> Input;
while(Input!=0)
{
x=Input%10;
Input/=10;
if(x==4 ||  x==7)
cnt++;
}
if (cnt<=KD)
y++;

}

cout <<y;


}
