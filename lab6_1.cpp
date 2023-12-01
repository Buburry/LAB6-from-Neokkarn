#include<iostream>
using namespace std;

int main(){
    int num=1, Even=0, Odd=0;
    while (num != 0)
    {
        cout << "Enter an integer:: ";
        cin >> num;

        if (num %2 == 0)
        {
            Even++;
        } else {
            Odd++;
        }
        
    }
    
    cout << "#Even numbers = " << Even-1 << endl;
    cout << "#Odd numbers = " << Odd << endl;
    return 0;
}