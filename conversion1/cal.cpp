#include <iostream>
using namespace std;

void header()// print the heading
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
void newpage() //  wait for press the enter from user and return menu 
{
    cout << "\nPress Enter to return to menu";
    cin.ignore(); 
    cin.get(); 
}
void showmenu()// show the menu
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
        "7. Exit\n";
    for(int i=0; i<145; i++)
        cout << "*";
    gotoxy(20,1); //set the cursor on fixed place
}


int binaryToDecimal(int bin) {
    int dec=0, base=1, rem;
    while(bin > 0) {
        rem = bin % 10;
        dec = dec + rem * base;
        base = base * 2;
        bin = bin/10;
    }
    return dec;
}
int decimalToBinary(int dec) {
    int bin=0, base=1,rem;
    while(dec>0) {
        rem = dec % 2;
        bin = bin + rem * base;
        base = base * 10;
        dec = dec/2;

    }
    return bin;
}
int decimalTooctal(int dec) {
    int oct = 0, base=1,rem;
    while(dec>0) {
        rem = dec % 8;
        oct = oct + rem * base;
        base = base * 10;
        dec = dec / 8;
    }
    return oct;
}
int octalToDecimal(int oct) {
    int dec=0, base=1, rem;
      while(oct>0) {
        rem = oct % 10;
        dec = dec + rem * base;
        base = base * 8;
        oct = oct /10;
      }
      return dec;
}
int binaryToOctal(int bin) {
    int dec = binaryToDecimal(bin);
    return decimalTooctal(dec);
}
int octalToBinary(int oct ) {
     int dec = octalToDecimal(oct);
     return decimalToBinary(dec);
}

     int main()// Main function (menu drive logic)
{
    int choice;
    bool flag = true;
    while (flag)
    {
        showmenu(); 
        
        cin >> choice;
        if(choice>=1 && choice<=6)
        {
            system("clear");
            header();
            

            switch (choice)//alag alag case choose karne ke liye
            {  
                case 1:
                {   
                    header();
                    cout << "\n#1. BINARY TO DECIMAL \n\n";
                    int bin;
                    cout <<"Enter binary number: ";
                    cin >> bin;
                    int result = binaryToDecimal(bin);
            
                    cout<<"Decimal number is : "<<result;
                    newpage();
                    
                    break;
                }
                
                case 2:
                {
                    header();
                    cout << "\n#2. DECIMAL TO BINARY \n\n";
                    int dec;
                    cout << "Enter decimal number : ";
                    cin >> dec;
                     int result = decimalToBinary(dec);
                     cout <<"Binary num is : " <<result;
                    newpage();
                    break;
                }

                case 3: 
                {
                    header();
                    cout << "\n#3. BINARY TO OCTAL \n\n";
                    int bin;
                    cout <<"Enter binary number: ";
                    cin >> bin;
                    int result = binaryToOctal(bin);
                    cout << "Octal number is : " << result;
                    binaryToOctal(result);
                    newpage();
                    break;
                }    
                                
                case 4:
                {
                    header();
                    cout << "\n#4. OCTAL TO BINARY  \n\n";
                    int oct;
                    cout <<"Enter octal number: ";
                    cin >> oct;
                    int result = octalToBinary(oct);
                    cout << "Binary number is : " << result;
                    octalToBinary(result);
                    newpage();
                    break;
                }

                case 5:
                {
                    header();
                    cout << "\n#5. DECIMAL TO OCTAL\n\n";
                    int number;
                    cout << "Enter decimal number : ";
                    cin >> number; 
                    int result = decimalTooctal(number);
                    cout << "Octal number is : " << result;
                    newpage();
                    break;
                }

                case 6:
                {
                    header();
                    cout << "\n#6. OCTAL TO DECIMAL \n\n";
                    int oct;
                    cout <<"Enter octal number: ";
                    cin >> oct;
                    int result = octalToDecimal(oct);
                    if(result!=0)
                    {
                        cout << "Decimal number is : " <<result;
                       newpage();
                    }
                    break;
                    
                }
            }
        }
    }
}

