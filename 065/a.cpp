#include <bits/stdc++.h>
using namespace std;
int main()
{
    string S;
    cin >> S;
    int i = S.size();
    while (i >= 1)
    {
        if (i - 6 >= 0 && S.substr(i - 6, 6) == "eraser")
        {
            i -= 6;
            continue;
        }
        else if (i - 5 >= 0 && S.substr(i - 5, 5) == "erase")
        {
            i -= 5;
            continue;
        }
        else if (i - 7 >= 0 && S.substr(i - 7, 7) == "dreamer")
        {
            i -= 7;
            continue;
        }
        else if (i - 5 >= 0 && S.substr(i - 5, 5) == "dream")
        {
            i -= 5;
            continue;
        }
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
}
