
#include <iostream>
#include <fstream>
using namespace std;

struct student {
    int roll;
    char name[30];
    float marks;
};

int main() {
    student s;
    ofstream fout("student.dat", ios::binary | ios::app);

    cout << "Enter Roll: ";
    cin >> s.roll;
    cin.ignore();
    cout << "Enter Name: ";
    cin.getline(s.name, 30);
    cout << "Enter Marks: ";
    cin >> s.marks;

    fout.write((char*)&s, sizeof(s));
    fout.close();
    cout << "Record added successfully.\n";

    ifstream fin("student.dat", ios::binary);
    cout << "\n------------------------ Student Records----------------------------------\n";
    while (fin.read((char*)&s, sizeof(s))) {
        cout << "Roll: " << s.roll << endl;
        cout << "Name: " << s.name << endl;
        cout << "Marks: " << s.marks << endl;
        cout << "------------------------------------------------------------------------\n";
    }
    fin.close();

    return 0;
}

