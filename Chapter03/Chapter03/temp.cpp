#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    const char a[] = "Hello, World";
    const string b = "Hello, World";

    cout << a << endl;
    cout << b << endl;

    string name;
    string age;

    cout << "�̸�: ";
    getline(cin, name);

    cout << "����: ";
    getline(cin, age);

    cout << name << " " << age << endl;

    return 0;
}