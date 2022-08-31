#include <iostream>
// #include <cstring>
using namespace std;

int main()
{
    // Various constructor of string class

    // Initialization with raw string
    string str1("first string");

    // Initialization by another string
    string str2(str1);

    // Initialization by character with number of occurence
    // This method is showing error
    // string str3(5, "#");
    // cout << str3;

    // Initialization by part of another string
    string str4(str1, 6, 6);
    cout << str4 << endl;

    // Initialization by part of another string: iterator version
    string str5(str2.begin(), str2.begin() + 5);
    cout << str5 << endl;

    // assignment operator
    string str6 = str4;

    // clear funnction deletes all the characters from string
    str4.clear();

    // both size() anf length() returns length of the string
    int len = str6.length();
    cout << "The length of the string is " << len << endl;

    // a particular char can be accessed using at operator
    char ch = str6.at(2); // Same as "ch = str6[2]"
    cout << "Third char of the string is " << ch << endl;

    // c_str returns null terminated char array version of string
    const char *charstr = str6.c_str();
    printf("%s\n", charstr);

    // append adds the argument string at the end
    str6.append(" extension");
    cout << str6 << endl;
    // same as str6 += " extension"

    // another version of append, which appends parts of other string
    str4.append(str6, 0, 6); // At 0th position 6 character
    cout << str6 << endl;
    cout << str4 << endl;

    // find returns index where pattern is found
    // If pattern is not there it returns predefined
    // constant npos whose value is -1
    if (str6.find(str4) != string::npos)
        cout << "str4 found in str6 at " << str6.find(str4) << " pos" << endl;
    else
        cout << "str4 not found in str6" << endl;

    // substr(a,b) function returns a substring of b
    // starting from index a
    cout << str6.substr(7, 3) << endl;

    // erase(a,b) deletes b characters at index a
    cout << str6.erase(7, 4) << endl;

    // iterator version of erase
    str6.erase(str6.begin() + 5, str6.begin() - 3);
    cout << str6 << endl;

    str6 = "This is a example";

    // replace(a,b,str) replaces b charater from a index by str
    str6.replace(2, 7, "ese are test");
    cout << str6 << endl;
    return 0;
}