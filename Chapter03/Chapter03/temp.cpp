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

    cout << "이름: ";
    getline(cin, name);

    cout << "나이: ";
    getline(cin, age);

    cout << name << " " << age << endl;

    return 0;
}