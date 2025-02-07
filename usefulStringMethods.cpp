#include<bits/stdc++.h>
using namespace std;
int main()
{
    string name;
    cout << "Enter your name";
    getline(cin, name);

    cout << "length of string is "<< name.length() << "\n";
    cout << "Hello" << name.empty() << "\n";
    getline(cin, name);
    name.clear();
    cout << "Hello" <<"\n";
    getline(cin, name);
    name.append("@gmail.com");
    cout << "your gmail would be "<< name << "\n";
    cout << "char at index 3 is " << name.at(3) << "\n";
    cout << "inserting @ at the index 3 " << name.insert(3, "@") << "\n";
    cout << "finding the index number of '@' " << name.find('@') << "\n";
    cout << "erasing a portion of string " << name.erase(2,5) << "\n";

return 0;
}