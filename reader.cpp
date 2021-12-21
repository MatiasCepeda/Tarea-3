#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char word[40];

    cout << "introduce una palabra: ";
    cin >> word;
    int n=strlen(word), i=0, m, result=1;
    if (n%2 == 0)
    {
        m=n;
    }
    else{
        m=n+1;
    }

    while ( i < m/2 )
    {
        if (word[i] != word[n-i-1])
        {
            result=0;
        }
        i++;
    }
    cout << "result: " << result << endl;
    if (result==1)
    {
        cout << "La palabra " << word << " es un palindromo" << endl;
    }
    else
    {
        cout << "La palabra " << word << " no es un palindromo" << endl;
    }
    return 0;
}