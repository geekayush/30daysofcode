#include <bits/stdc++.h>

using namespace std;

int main()
{
    int maxCount = 0;
    int count = 0;
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    vector<int> binary;
    vector<int>::iterator itr;
    while (n)
    {
        binary.insert(binary.begin(), n % 2);
        n /= 2;
    }
    for (itr = binary.begin(); itr != binary.end(); itr++)
    {
        if (*itr == 1)
        {
            count += 1;
        }
        else
            count = 0;
        if (count > maxCount)
        {
            maxCount = count;
        }
    }
    cout << maxCount;
    return 0;
}
