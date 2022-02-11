#include <iostream>
#include <algorithm>

using namespace std;

class Student {
public:
    string name;
    int score;
    Student(string name, int score) {
        this->name = name;
        this->score = score;
    }

    bool operator <(Student &student) {
        return this->score < student.score;
    }
};

bool compare(int a, int b) {
    return a > b;
}

int main(void) {
    // int a[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};
    // sort(a, a+10, compare);
    // for (int i = 0; i < 10; i++) {
    //     cout << a[i] << ' ';
    // }
    Student students[] = {
        Student("Steven", 90),
        Student("Reina", 95),
        Student("Kim", 97),
        Student("Sam", 87),
        Student("Mena", 92)
    };
    sort(students, students+5);
    for(int i = 0; i < 5; i++) {
        cout << students[i].name << ' ';
    }
}