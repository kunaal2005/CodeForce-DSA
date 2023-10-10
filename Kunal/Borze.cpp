#include <iostream>
using namespace std;
int main()
{
    // char arr[200];
    // int i = 0;
    // while (cin >> arr[i])
    // {
    //     i++;
    // }
    int i = 0;
    string str1;
    string str2 = "";
    cin >> str1;
    for (int i = 0; i < str1.length(); i++)
    {
        if (str1[i] == '.')
        {
            str2 += "0";
        }
        if (str1[i] == '-')
        {
            if (str1[i + 1] == '.')
            {
                str2 += "1";
                i++;
            }
            else
            {
                str2 += "2";
                i++;
            }
        }
    }
    cout << str2;
    return 0;
}