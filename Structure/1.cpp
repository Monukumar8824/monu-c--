/*#include <iostream>
using namespace std;

struct Student {
    int rollno;
    int marks[3]; // array within structure for 3 subjects
};

int main() {
    Student s[2]; // array of 5 students
    int total[2];
    float percentage[2];

    for(int i = 0; i < 2; i++) {
        cout << "\nEnter details of Student " << i + 1 << ":\n";
        cout << "Enter roll number: ";
        cin >> s[i].rollno;

        total[i] = 0; //intialize total for each student

        cout << "Enter marks of 3 subjects:\n";
        for(int j = 0; j < 3; j++) {
            cout << "Subject " << j + 1 << ": ";
            cin >> s[i].marks[j];
            total[i] += s[i].marks[j]; // calculate total marks 
        }

        percentage[i] = total[i] / 3.0;
    }

    
    for(int i = 0; i < 2; i++) {
        cout << "\nStudent " << i + 1 << ":\n";
        cout << "Roll Number: " << s[i].rollno << endl;
        cout << "Total Marks: " << total[i] << endl;
        cout << "Percentage: " << percentage[i] << "%" << endl;
    }

    return 0;
}   */
/*#include <iostream>
using namespace std;

struct emp
{
    int emp_number;
    char name[10];
    int basic;
    struct perks
    {
        float DA;
        float TA;
        float HRA;
    }  p;
    float net_salary;
} e;
int main() 
{
    cout <<"Enter emp number: ";
    cin >> e.emp_number;
    cout <<"Enter emp name: ";
    //getline(cin, e.name);
    cin.getline(e.name,10);
    cout <<"Enter basic: ";
    cin >> e.basic;

    e.p.DA = e.basic*0.1;  // 10% 
    e.p.TA = e.basic*0.2;  // 20% 
    e.p.HRA = e.basic*0.3;  // 30%
    e.net_salary = e.p.DA + e.p.TA + e.p.HRA + e.basic;

    cout <<"Your emp number:  "<<e.emp_number;
    cout <<"Your DA =  "<< e.p.DA;
    cout <<"Your TA =  "<< e.p.TA;
    cout <<"Your HRA = "<< e.p.HRA;
    cout <<"Your net_salary = "<< e.net_salary;

}  */
#include <iostream>
using namespace std;
struct complex {
    int real;
    int img;
}
void input(complex);
void output(complex);
complex sum(complex,complex);

int main()
{
    complex c1, c2, c3;
    input(c1);
    input(c2);
    c3 = sum(c1,c2);
    output(c3);
}
void input(complex &T)
{
    cin>>T.real;
    cin>>T.img;
}
void output(complex O)
{
    cout <<O.real;
    cout <<O.img;
}
complex sum (complex p1, complex p2)
{
    complex p3;
    p3.real = p1.real + p2.real;
    p3.img = p1.img + p2.img;
    return p3;
}

