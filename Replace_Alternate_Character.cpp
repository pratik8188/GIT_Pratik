/*Write a program scan string and replace alternate character by $ sign using function*/

#include<iostream>
using namespace std;
string character(string str)
{
    for(inti=1;i<str.length();i+=2) 
	{
        str[i] = '$';
    }
    return str;
}
int main() 
{
	string inputString;
    cout << "Enter a string: ";
    getline(cin, inputString);
    string modified = character(inputString);
    cout<<"Modified string: "<< modified<<endl;
}
