#include<string>
#include <set>
#include <iostream>
using namespace std;
int main() {
std::set<char> charSet;
string input;
cin >> input;


for (char a:input)
{
    charSet.insert(a);
}
int b;
b=charSet.size();
if (b%2==0)
{
    cout << "CHAT WITH HER!";
}
else
{
    cout << "IGNORE HIM!";
}

    return 0;
}
