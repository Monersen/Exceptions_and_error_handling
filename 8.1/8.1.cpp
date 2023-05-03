#include <iostream>
#include <windows.h>

using namespace std;

int function(string str, int forbidden_length)
{
    int len = static_cast<int>(str.length());

    if (forbidden_length == len)
        throw runtime_error("bad_length");

    return len;
}

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    //setlocale(LC_ALL, "Russian");

    int len;

    while (true)
    {
        cout << "Введите запретную длину: ";

        if (cin >> len)
        {
            if (len <= 0)
                cout << "Ошибка ввода" << endl;
            else
                break;
        }
       
        cin.clear();
        
    }

    string word;
    while (true)
    {
        cout << "Введите слово: ";
        cin >> word;

        try {
            size_t wordLen = function(word, len);

            cout << "Длина слова " << word << " равна "
                << wordLen << endl;

        }
        catch (exception& ex) {

            cout << "[" << ex.what() << "] ";
            cout << "Вы ввели слово запретной длины! До свидания"
                << endl;
            return -1;
        }
    }

    return 0;
}