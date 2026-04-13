#include <iostream>
using namespace std;

int main()
{
    int n;
    // TODO: ask user for input
    cout <<"Input: " << endl;
    cin >> n;
    // TODO: outer loop for each row
    for(int i = 1; i <= n; i++) {
        for(int j = 0; j < i; j++) {
            if(j!= 0) 
            cout << " ";
            cout << (char) ('A' + j);
        }
        cout << endl;
    }
    return 0;
}
