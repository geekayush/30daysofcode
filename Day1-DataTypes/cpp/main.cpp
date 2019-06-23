#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j;
    double dd;
    
    string s1;
    cin>>j;
    cin>>dd;
    cin.ignore(256, '\n');
    getline(cin, s1);
    cout<<i+j<<endl;
    cout <<setprecision(1)<<fixed<< d + dd << endl;
    cout << s + s1;
    return 0;

}