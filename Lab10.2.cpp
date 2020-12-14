/*
Дано текстовий файл t.
Групи  символів,  відокремлені  пробілами  (одним  або  кількома)  і  які  не  містять пробілів, будемо називати словами.
Знайти останнє слово, яке починається з букви “a”.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


string ProcessTXT(char* fname) {
    ifstream fin(fname);
    string s;
    string w;
    int k = 0;
    while (fin >> s)
    {
        if (s[0] == 'a') {
            w = s;
        }
    }
    return w;
}




int main()
{
    char name[6] = "t.txt";
    cout << "Last word start of 'a': " << ProcessTXT(name) << endl;

    cin.get();
    return 0;
}

