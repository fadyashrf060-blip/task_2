#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string line;

    ifstream file1("fruit.txt");

    while (getline(file1, line))
    {
        cout << line << endl;
    }

    file1.close();

    fstream file2;
    file2.open("fruit.txt", ios::app);

    file2 << "Fresh Fruits" << endl;

    file2.close();

    return 0;
}
