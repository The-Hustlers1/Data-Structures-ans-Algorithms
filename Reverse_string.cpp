#include <bits/stdc++.h>
using namespace std;
void reversestr(string str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
    {
        char temp=str.at(i);
        str.at(i)=str.at(str.length()-1-i);
        str.at(str.length()-1-i)=temp;
    }
    for (int i = 0; i < n ; i++){
        cout<<str.at(i);
    }
    
}
int main()
{
    string str;
    getline(cin, str);
    reversestr(str);
    return 0;
}
