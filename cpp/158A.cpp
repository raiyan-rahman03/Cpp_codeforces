#include <iostream>
using namespace std;

int main() {
    int n,a,x;
    x=0;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int ch:arr)
    {
        if (ch>0 && ch>=arr[a-1])
        {
           x+=1;
        }
        
    }
    cout << x;
    return 0;
}