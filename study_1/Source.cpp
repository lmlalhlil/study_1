#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <map>
using std::map;
#include <string>
using std::string;

class Exam {
public:
    
    void test_1() { cout << "Write the answers to the following questions?\n"; }
    void test_2() {cout << "2+2=\n";}
    void test_3() { cout << "5_3=\n"; }
};

int main() {

    map <int, string> name;
    name[0] = "zara\n";
    name[1] = "afra\n";
    name[2] = "neda\n";
    name[3] = "taraneh\n";
    name[4] = "maryam\n";

        for (int i = 0; i < name.size(); i++)
    {
        cout << name[i];
    }


cout << "welcom\n" << endl;

        Exam pass;
    pass.test_1();
    pass.test_2();
    pass.test_3();

    cout << endl << "Good luck";


    return 0;
}
