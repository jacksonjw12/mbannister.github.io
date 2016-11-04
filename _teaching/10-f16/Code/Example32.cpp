//
// Example 31
//
// This is just some code we played with while learning about structs.
//
#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
};

void print_student(Student s);
Student bday(Student s);

int main() {
    Student bob;
    bob.name = "Bob Smith";
    bob.age = 19;
    print_student(bob);
    bob = bday(bob);
    print_student(bob);
    return 0;
}

void print_student(Student s) {
    cout << "name = " << s.name << "; age = " << s.age << endl;
}

// Instead of returning s here it would be possible to use pass-by-reference.
Student bday(Student s) {
    s.age++;
    return s;
}
