#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int coinToss(void)
{
int randomNum;
randomNum=1+rand()%2;
return randomNum;
}

int main()
{
int Numtimes=0;
int randomNum=0;
string headtail="";
cout<<"ENTER THE NUMBER OF TIMES YOU WANT TO TOSS THE COIN"<<endl;
cin>>Numtimes;
srand((time(0)));
for(int a=1;a<=Numtimes;a++)
{
    randomNum=coinToss();
    if(randomNum==1)
        headtail="head";
    else
        headtail="tail";
    cout<<headtail<<endl;
}
return 0;
}


