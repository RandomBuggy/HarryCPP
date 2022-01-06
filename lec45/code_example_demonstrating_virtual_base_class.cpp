#include <iostream>

using namespace std;

class Student {
    protected:
        int roll_no;
    public:
        void setNumber(int n) {
            roll_no = n;
        }

        void printNumber(void) {
            cout << "Your roll no is " << roll_no << endl;
        }
};

class Test : virtual public Student {
    protected:
        float maths, physics;
    public:
        void setMarks(float m1, float m2) {
            maths = m1;
            physics = m2;
        }

        void printMarks(void) {
            cout << "Your obtained marks is here:" << endl
                << "Math: " << maths << endl
                << "Physics: " << physics << endl;
        }
};

class Sports : virtual public Student {
    protected:
        float score;
    public:
        void setScore(float sc) {
            score = sc;
        }

        void printScore(void) {
            cout << "Your PT score is " << score << endl;
        }
};

class Result : public Test, public Sports {
    private:
        float total;
    public:
        void display(void) {
            total = maths + physics + score;
            printNumber();
            printMarks();
            printScore();
            cout << "Your total is: " << total << endl;
        }
};

int main() {
    Result jenius;
    jenius.setNumber(85774);
    jenius.setMarks(66.34, 42.57);
    jenius.setScore(10);
    jenius.display();
    return 0;
}

