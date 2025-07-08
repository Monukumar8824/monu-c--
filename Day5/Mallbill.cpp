#include <iostream>
using namespace std;


float GA(int age,int gender,float ans);
float timeSpecial_day(float time,int Special_day);
float mallbill(int age, int Special_day,float time, int gender);

int main()
{
    int age,gender,Special_day;
    float time;
    cout <<"Enter your age: "<<endl;
    cin >>age;
    cout<<"\n<-for ladies[1] -> and <- for lads[0] ->\n";
    cout <<"Enter your gender: ";
    cin >> gender;
    cout<<"\n <- for Yes drop:[1] -> or <- for NO drop [0] -> \n\n";
    cout <<"is today is any special Ocassion: ";
    cin>> Special_day;

    cout <<"Drop spended time(hrs):";
    cin>>time;
    time = time * 60;
    float bill = mallbill(age,Special_day,time,gender);
    if(bill == 0)
    {
        cout<<"Only for kids: ";
    }
    else
    {
        cout<<"your bill is: "<<bill<<"\n Thanks visit again";

    }
    return 0;
}

float GA(int age,int gender,float ans)
{
    if(age <= 18)
    {
        if(gender == 1)
        {
            return (ans*0.90) + 50;
        }else if(gender == 0)
        {
            return(ans + 50);
        }
    }
    else if(age <= 30)
    {
        if(gender == 1)
        {
            return (ans * 0.90) + 300;
        }else if(gender == 0) 
        {
            return(ans+300);
        }
    }
    else if(age>30) 
    {
        return 0;
    }
}

float timeSpecial_day(float time,int Special_day) {
    if(Special_day == 1) 
    {
        if(time <= 120) 
        {
            return time * 0.75;
        } 
        else
        {
            return 90+(time-120)*1.0;
        }
    }
}
float mallbill(int age, int Special_day,float time, int gender) {
    float ans = timeSpecial_day(time,Special_day);
    float discountbill = GA(age,gender,ans);
    return discountbill;
}