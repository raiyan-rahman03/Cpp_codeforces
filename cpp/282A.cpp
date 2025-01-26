// #include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
   int n;
   cin >> n;
   int b;
   b=0;


   for (int i = 0; i < n; i++)
   {
    string a;
    cin >> a;
    if (a=="++X" or a=="X++")
    {
        b+=1;
    }
    else if (a=="--X" or a=="X--")
    {
       b-=1;
    }    
   }
     cout << b;



    return 0;
}