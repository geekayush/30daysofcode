#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
        int T;
        string str;
        char odd[5000];
        char even[5000];
        cin>>T;
        while (T > 0) {
          cin >> str;
          for(int i=0;i<str.length();i++)
          { int j=0;
            if (i % 2 == 0) {
              even[j] = str[i];
              j++;
              cout << even;
            }
          }
          cout<<" ";
          for (int i = 0; i < str.length(); i++) {
            int k = 0;
            if (i % 2 != 0) {
              odd[k] = str[i];
              k++;
              cout << odd;
            }
          }
          cout<<endl;
          T--;
          
        }

    return 0;
}
