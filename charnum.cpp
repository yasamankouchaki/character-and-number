//which is character number is true.
#include <iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    if(c<= '0'&& c> '9'){
        cout<<"Its Digit.";
    }else{
        cout << "Bad Input";
    }
    return 0;
}
