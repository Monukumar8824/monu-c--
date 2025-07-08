#include <iostream>
using namespace std;

void header();
void showmenu()// Menu show karta hai
{
    system("clear"); //for clear screen
    header();
    cout << "\n# MAIN MENU #\n";
    for(int i=0; i<100; i++)
        cout << "-";
    cout <<
        "\n\nEnter your choice: \n\n\n\n"
        " 1. Binary to decimal\n"
        " 2. Decimal to binary\n"
        " 3. Binary to octal\n"
        " 4. Octal to binary\n"
        " 5. Decimal to octal\n"
        " 6. Octal to decimal\n"
        "13. Exit\n";
    for(int i=0; i<100; i++)
        cout << "*";
    gotoxy(20,8); // Cursor ko set karta hai fixed jagah par
}

/*int main()// Main function (menu drive logic)
{
    int choice;
    bool flag = true;
    while (flag)
    {
        showmenu(); 

        cin >> choice;
        if(choice>=1 && choice<=13)
        {
            system("clear");

            switch (choice)//alag alag case choose karne ke liye
            {  
                case 1:
                {   
                    header();
                    cout << "\n#1. BINARY TO DECIMAL \n\n";
                    int result = binary_to_decimal();

                    if(result!=0)
                    {
                        cout<<"Decimal number is : "<<result2;
                        newpage();
                    }
                    break;
                }
                
                case 2:
                {
                    header();
                    cout << "\n#2. DECIMAL TO BINARY \n\n";
                    int num;
                    cout << "Enter decimal number : ";
                    cin >> num;
                    decimal_to_binary(num);
                    break;
                }

                case 3: 
                {
                    header();
                    cout << "\n#3. BINARY TO OCTAL \n\n";
                    int result = binary_to_decimal();
                    binary_to_octal(binary_to_decimal());
                    break;
                }    
                                
                case 4:
                {
                    header();
                    cout << "\n#4. OCTAL TO BINARY  \n\n";
                    decimal_to_binary(octal_to_decimal());
                    break;
                }

                case 5:
                {
                    header();
                    cout << "\n#5. DECIMAL TO OCTAL\n\n";
                    cout << "Enter decimal number : ";
                    int number;
                    cin >> number; 
                    decimal_to_octal(number);
                    break;
                }

                case 6:
                {
                    header();
                    cout << "\n#6. OCTAL TO DECIMAL \n\n";
                    int result = octal_to_decimal();
                    if(result!=0)
                    {
                        cout << "Decimal number is : " <<result;
                        newpage();  
                    }
                    break;
                }
                 case 7:
                    cout << "THANK YOU \nVISIT AGAIN....";
                    flag = false;
                    cin.get(); 
                    break; 
            }  
        }
        else
        {
            cout<<"please choose correct choice .";
            newpage();
        }
    }
    return 0;
}
        }
    }
} */
int main() 
{
    int choice;
    bool flag = true;
    while(flag) {
        showmenu();
        cout <<"Choice: ";
        cin >> choice;
        system("clear");

        switch(choice) {
            case1:  {
                header();
                cout << "#1. Binary To Decimal\n";
                int result = binary_to_Decimal();

            }
        }
    }
}
