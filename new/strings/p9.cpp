#include<iostream>
#include<cstring>
using namespace std;

void findLargestAndSmallestWords(string s, string& largestWord, int& largestSize, string& smallestWord, int& smallestSize)
{
    int i, j, count = 0, max = -1, in = 0, min = 100000, in1 = 0;
    largestSize = 0;
    smallestSize = 100000;

    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            count++;

            if (max < count)
            {
                max = count;
                in = i;
            }

            if (min > count)
            {
                min = count;
                in1 = i;
            }
        }
        else
        {
            if (max == count)
            {
                largestWord = s.substr(in - largestSize, largestSize);
            }

            if (min == count)
            {
                smallestWord = s.substr(in1 - smallestSize, smallestSize);
            }

            count = 0;
        }
    }

    if (max == count)
    {
        largestWord = s.substr(in - largestSize, largestSize);
    }

    if (min == count)
    {
        smallestWord = s.substr(in1 - smallestSize, smallestSize);
    }
}

int main()
{
    string s;
    getline(cin, s);

    string largestWord, smallestWord;
    int largestSize, smallestSize;

    findLargestAndSmallestWords(s, largestWord, largestSize, smallestWord, smallestSize);

    cout << "Largest word: " << largestWord << " (" << largestSize << " characters)" << endl;
    cout << "Smallest word: " << smallestWord << " (" << smallestSize << " characters)" << endl;

    return 0;
}