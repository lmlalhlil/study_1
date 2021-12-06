#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <map>
using std::map;
#include <string>
using std::string;

int main() {

    cout << "welcom\n" << endl;

    map <int, string> name;
    name[0] = "zara";
    name[1] = "afra";
    name[2] = "neda";
    name[3] = "taraneh";
    name[4] = "maryam";
    name[5] = "yasman";

    vector<int>age;
    age[0] = 8;
    age[1] = 7;
    age[2] = 6;
    age[3] = 6;
    age[4] = 7;
    age[5] = 7;

    for (int i = 0; i < name.size(); i++)
    {
        cout << name[i] << "=" << age[i] << endl;
    }


    return 0;
}
