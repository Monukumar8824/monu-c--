#include<iostream>
#include<string>
#include <cctype>
using namespace std;

void header()// Heading print karta hai
{
    for(int i=0; i<145; i++)
        cout << "=";
    cout << "# NUMBER CONVERSIONS #  \n";
    for(int i=0; i<145; i++)
        cout << "=";
    cout << endl;
}

void gotoxy(int x, int y)// Cursor ko terminal me (x, y) position par le jata hai (Linux terminal ke liye)
{
    cout<<"\033["<<y<<";"<<x<<"H"; 
}

void newpage()// User se Enter dabwane ke liye wait karta hai, fir menu par return
{
    cout << "\nPress Enter to return to menu";
    cin.ignore(); 
    cin.get(); 
}

void showmenu()// Menu show karta hai
{
    system("clear"); //for clear screen
    header();
    cout << "\n# MAIN MENU #\n";
    for(int i=0; i<145; i++)
        cout << "-";
    cout <<
        "\n\nEnter your choice: \n\n\n\n"
        " 1. Binary to decimal\n"
        " 2. Decimal to binary\n"
        " 3. Binary to octal\n"
        " 4. Octal to binary\n"
        " 5. Decimal to octal\n"
        " 6. Octal to decimal\n"
        " 7. Decimal to hexadecimal\n"
        " 8. Hexadecimal to decimal\n"
        " 9. Hexadecimal to binary\n"
       "10. Hexadecimal to octal\n"
       "11. Binary to Hexadecimal\n"
       "12. Octal to Hexadecimal\n"
       "13. Exit\n";
    for(int i=0; i<145; i++)
        cout << "*";
    gotoxy(20,8); // Cursor ko set karta hai fixed jagah par
}

int binary_to_decimal()// Binary number (string) ko decimal number me convert karta hai
{
    string binary;
    bool change = true;
    cout << "Enter binary number : ";
    cin >> binary;
    
    for(int i = 0; i < binary.size(); i++)// Sirf 0 ya 1 hi allow hai, warna invalid
    {
        if(!((binary[i] - '0') == 0 || (binary[i] - '0') == 1))
        {
            cout << "Invalid, closing program ";
            change = false;
            newpage();
            break;
        }
    }

    int base = 1, decimal = 0;
    if(change == true)
    {
        for(int i = binary.size() - 1; i >= 0; i--)
        {
            decimal += (binary[i] - '0') * base;
            base *= 2;
        }
    }

    return decimal;  
}

void decimal_to_binary(int number)// Decimal ko binary me convert karta hai aur print karta hai
{
    int binary[100], size = 0;
    bool run = true;
    for(int i=0; number >= 1; i++)
    {
        run = false;
        binary[i] = number % 2;
        number = number / 2;
        size++;
    }
    if(run == false)
    {
        cout << "Binary number is : ";
        for(int i = size - 1; i >= 0; i--)
        {
            cout << binary[i];
        }
        newpage();   
    }  
}

void decimal_to_octal(int number)// Decimal ko octal me convert karta hai
{
    int size = 0, arr[100];
    bool run = true;
    for(int i = 0; number >= 1; i++)
    {
        run = false;
        arr[i] = number % 8;
        number = number / 8;
        size++;
    }
    if(run == false)
    {
        cout << "Octal number is : ";
        for(int i = size - 1; i >= 0; i--)
        {
            cout << arr[i];
        }
        newpage(); 
    }  
}

int octal_to_decimal()// Octal number ko decimal me convert karta hai
{
    bool change = true;
    string octal;
    int base = 1, decimal = 0;
    cout << "Enter octal number (0 to 7): ";
    cin >> octal;
    int size = octal.size();

    for(int i = 0; i < size; i++)// Check if input 0-7 ke beech hai
    {
        if(!((octal[i] - '0') >= 0 && (octal[i] - '0') <= 7))
        {
            cout << "Invalid, closing program ";
            change = false;
            newpage();
            break;
        }
    }

    if(change == true)
    {
        for(int i = size - 1; i >= 0; i--)
        {
            decimal += (octal[i] - '0') * base;
            base *= 8;
        }
    } 
    return decimal;
}

void decimal_to_hexadecimal(int dec_num )// Decimal to Hexadecimal converter
{
    string hexa;
    int temp = dec_num;
    string hexadecimal = "0123456789ABCDEF";
    int i = 0;
    while(dec_num > 0)
    {
        hexa += hexadecimal[dec_num % 16];
        dec_num /= 16;
        i++;
    }
        i--;
    if(temp!=0)
    {
        cout << "Hexadecimal number is : ";
        for(; i >= 0; i--)
        {
            cout << hexa[i];
        }
        newpage();
    }
}

int Hexadecimal_to_decimal()// Hexadecimal to decimal converter
{
    string hexa;
    cout << "Enter hexadecimal number : ";
    cin >> hexa;
    int size = hexa.size();

    for(int i = 0; i < size; i++)
    {
        hexa[i] = toupper(hexa[i]); // Lowercase ko uppercase bana raha hai
    }

    int base = 1, sum = 0;
    bool change = true;

    for(int i = size - 1; i >= 0; i--)
    {
        if(hexa[i] >= '0' && hexa[i] <= '9')
        {
            int a = (hexa[i] - '0'); //'2' = 50 -> 50 - 48 = 2
            sum += (a * base);
            base *= 16;    
        }
        else if(hexa[i] >= 'A' && hexa[i] <= 'F')
        {
            int a = (hexa[i] - '7'); // 'A' = 65 → 65 - 55 = 10
            sum += a * base;
            base *= 16;
        }
        else
        {
            change = false;
            cout << "Invalid input, program closing ";
            sum=0;
            newpage();
            break;
        }
    }
return sum;
}

int main()// Main function (menu drive logic)
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
                    int result2 = binary_to_decimal();
                    if(result2!=0)
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
                    decimal_to_octal(binary_to_decimal());
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
                {
                    header();
                    cout << "\n#7. Decimal to Hexadecimal \n\n";
                    int dec_num;
                    cout << "Enter a decimal number : ";
                    cin >> dec_num;
                    decimal_to_hexadecimal(dec_num);
                    break;
                }
                
                case 8:
                {
                    header();
                    cout << "\n#8. Hexadecimal to Decimal \n\n";
                    int result1 = Hexadecimal_to_decimal();
                    if(!(result1 == 0))
                    {
                        cout<<"Decimal number is : "<<result1;
                        newpage();
                    }
                    break;
                }

                case 9:
                {
                    header();
                    cout<< "\n#9. Hexadecimal to binary \n\n";
                    int result = Hexadecimal_to_decimal();
                    if(result!=0)
                    {
                       decimal_to_binary(result);
                    }
                    break; 
                }

                case 10:
                {
                    header();
                    cout<< "\n#10. Hexadecimal to Octal \n\n";
                    int result = Hexadecimal_to_decimal();
                    if(result!=0)
                    {
                       decimal_to_octal(result);
                    }
                    break;  
                }

                case 11:
                {
                    header();
                    cout<< "\n#11. Binary to Hexadecimal  \n\n";
                    decimal_to_hexadecimal(binary_to_decimal());
                    break;  
                }   

                case 12:
                {
                    header();
                    cout<< "\n#12. Octal to Hexadecimal  \n\n";
                    decimal_to_hexadecimal(octal_to_decimal());
                    break;      
                }
                
                case 13:
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