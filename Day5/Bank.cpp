#include <iostream>
using namespace std;
 float amount = 3000;
int main() 
{
    float  withdrawl;
    int choice, temp;
    cout <<"Choose your option: " <<endl;
    cout <<"1.Check Statement \n";
    cout <<"2.Deposit \n";
    cout <<"3.Withdraw \n";
    cout <<"4.Exit \n";
    cin >>choice;
    
    switch(choice)
    {
        case 1:  cout <<"Your balance is " << amount;
                 main();
                 break;
        case 2:
                 cout <<"Enter Deposit amount : "; 
                 cin >> temp;
                 amount = amount + temp;
                 cout <<"After Deposit New Balance: " <<amount <<endl;
                 main();
                 break;
        
        case 3: int temp; 
                cout <<"Enter Withdrawl amount: " <<endl;
                cin >> temp;
                if(amount >= temp)
                {
                    amount = amount - temp;
                    cout <<"Remainig Amount is: " <<amount <<endl;
                }
                else
                {
                    cout <<"Insuffecient Balance" <<endl;;
                }
                main();
                break;
                
        case 4:  cout <<"Exit: ";
                 main();
                 break;
                 
              
    }
    return 0;


}