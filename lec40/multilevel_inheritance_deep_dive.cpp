/*
 * inheritance path in multilevel inheritance
 */
#include <iostream>

using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void Student :: set_roll_number(int roll) {
    roll_no = roll;
}

void Student :: get_roll_number(void) {
    cout << "Your roll number is " << roll_no << endl;
}

class Exam : public Student {
    protected:
        float maths;
        float physics;
    public:
        void set_marks(float, float);
        void get_marks(void);
};

void Exam :: set_marks(float m, float ph) {
    maths = m;
    physics = ph;
}

void Exam :: get_marks(void) {
    cout << "Mark of maths: " << maths << endl
        << "Mark of physics: " << physics << endl;
}

class Result : public Exam {
    private:
        float perchantage;
    public:
        void display(void);
};

void Result :: display(void) {
    get_roll_number();
    get_marks();
    perchantage = ((maths + physics) / 2);
    cout << "Your perchantage is " << perchantage << "%" << endl;
}

int main() {
    Result stu;
    stu.set_roll_number(75453);
    stu.set_marks(76, 95);
    stu.display();
    return 0;
}

