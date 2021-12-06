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
<<<<<<< HEAD
    name[0] = "zara\n";
    name[1] = "afra\n";
    name[2] = "neda\n";
    name[3] = "taraneh\n";
    name[4] = "maryam\n";

        for (int i = 0; i < name.size(); i++)
=======
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
>>>>>>> student
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
