#include <iostream>
#include <string>
using namespace std;

int main() {
int n;
cin >> n;
string arr[n];

for (int i = 0; i < n; i++)

{
   cin >> arr[i];
}

for (string i:arr)
{
 for (int j = i.length()-1; j >= 0; j--) {
            if(i[j] == 'w'){
                cout << 'w';
            } else if(i[j] == 'p'){
                cout << 'q';
            } else{
                cout << 'p';
            }
       
}

 cout << endl;


    }

    return 0;
}
