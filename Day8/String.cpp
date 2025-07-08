/*#include <iostream>
using namespace std;
int main() {
    string s = "Hello";
    cout << s.length();
} //Output:- 5  */
/*#include <iostream>
 using namespace std;
 int main() {
    string s = "abc";
    s[0] = 'z';
    cout << s;
 }  //Output:- zbc  */
/*#include <iostream>
using namespace std;
int main() {
    string s = "Test";
    cout << s[2];
}  //Output:- s  */
/*#include <iostream>
using namespace std;
int main() {
    string s = "123";
    cout << s + "456";
}  //Output:- 123456  */
/*#include <iostream>
using namespace std;
int main() 
{
    string s = "C++";
for (int i = 0; i < s.length(); i++)
{
    cout << s[i] << "-";
} 
}  // Output:- C-+-+-   */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int count = 0;
    for(char c : s) {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    cout << "Number of vowels: " << count << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int digits = 0, alphabets = 0, special = 0;
    for(char c : s) {
        if(isdigit(c))
            digits++;
        else if(isalpha(c))
            alphabets++;
        else
            special++;
    }

    cout << "Digits: " << digits << endl;
    cout << "Alphabets: " << alphabets << endl;
    cout << "Special characters: " << special << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, rev = "";
    cout << "Enter a string: ";
    getline(cin, s);

    for(int i = s.length() - 1; i >= 0; i--)
        rev += s[i];

    cout << "Reversed string: " << rev << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for(char &c : s)
        c = toupper(c);

    cout << "Uppercase: " << s << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for(char &c : s)
        c = tolower(c);

    cout << "Lowercase: " << s << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char ch;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Enter character to count: ";
    cin >> ch;

    int count = 0;
    for(char c : s)
        if(c == ch)
            count++;

    cout << "Frequency of '" << ch << "': " << count << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    int n = s.length();
    bool isPalindrome = true;
    for(int i = 0; i < n / 2; i++) {
        if(s[i] != s[n - 1 - i]) {
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        cout << "String is a palindrome." << endl;
    else
        cout << "String is not a palindrome." << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, noSpace = "";
    cout << "Enter a string: ";
    getline(cin, s);

    for(char c : s)
        if(c != ' ')
            noSpace += c;

    cout << "String without spaces: " << noSpace << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    bool found = false;
    for(int i = 0; i < s.length(); i++) {
        bool isUnique = true;
        for(int j = 0; j < s.length(); j++) {
            if(i != j && s[i] == s[j]) {
                isUnique = false;
                break;
            }
        }
        if(isUnique) {
            cout << "First non-repeating character: " << s[i] << endl;
            found = true;
            break;
        }
    }
    if(!found)
        cout << "No non-repeating character found." << endl;
    return 0;
} */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for(char &c : s)
        if(c == ' ')
            c = '-';

    cout << "String after replacing spaces: " << s << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    for(char &c : s) {
        if(islower(c))
            c = toupper(c);
        else if(isupper(c))
            c = tolower(c);
    }

    cout << "Toggled case string: " << s << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    int count = 0;
    bool inWord = false;

    for(char c : s) {
        if(c != ' ' && !inWord) {
            inWord = true;
            count++;
        }
        else if(c == ' ')
            inWord = false;
    }

    cout << "Number of words: " << count << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    if(s1.length() != s2.length()) {
        cout << "Not anagrams." << endl;
        return 0;
    }

    int freq[256] = {0};
    for(char c : s1)
        freq[(int)c]++;
    for(char c : s2)
        freq[(int)c]--;

    for(int i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            cout << "Not anagrams." << endl;
            return 0;
        }
    }
    cout << "Strings are anagrams." << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);

    for(char c : s) {
        if(result.find(c) == string::npos)
            result += c;
    }

    cout << "String after removing duplicates: " << result << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    bool capitalize = true;
    for(char &c : s) {
        if(c == ' ')
            capitalize = true;
        else if(capitalize && isalpha(c)) {
            c = toupper(c);
            capitalize = false;
        }
    }

    cout << "Capitalized sentence: " << s << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a sentence: ";
    getline(cin, s);

    bool capitalize = true;
    for(char &c : s) {
        if(c == ' ')
            capitalize = true;
        else if(capitalize && isalpha(c)) {
            c = toupper(c);
            capitalize = false;
        }
    }

    cout << "Capitalized sentence: " << s << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    cout << "All substrings:" << endl;
    int n = s.length();
    for(int i = 0; i < n; i++) {
        for(int len = 1; len <= n - i; len++) {
            cout << s.substr(i, len) << endl;
        }
    }
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Enter first string: ";
    getline(cin, s1);
    cout << "Enter second string: ";
    getline(cin, s2);

    cout << "Common characters: ";
    for(char c : s1) {
        if(s2.find(c) != string::npos)
            cout << c << " ";
    }
    cout << endl;
    return 0;
}  */
/*#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    bool isDigits = true;
    for(char c : s) {
        if(!isdigit(c)) {
            isDigits = false;
            break;
        }
    }

    if(isDigits)
        cout << "String contains only digits." << endl;
    else
        cout << "String does not contain only digits." << endl;
    return 0;
}  */



















