#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <string>
using std::string;

int main() {

    cout << "welcom\n" << endl;

    vector<string>student(5);
    student[0] = "zara\n";
    student[1] = "afra\n";
    student[2] = "neda\n";
    student[3] = "taraneh\n";
    student[4] = "maryam";

    for (int i = 0; i < student.size(); i++)
    {
        cout << student[i];
    }

    return 0;
}
