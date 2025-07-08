#include <iostream>
using namespace std;

int main()
{
    int math,phy,che,sub,total,MP;

    cout <<"Enter your marks";
    cin >> math >> phy >> che;
    total = math+phy+che;
    MP  = math+phy;

    if((math>=60 && phy>=50 && che>=40) && (total>=200 || MP>=150))
    {
        cout <<"You are eligible";
    }
    else
    {
        cout <<"You are not elgible";
    }

    return 0; 

}