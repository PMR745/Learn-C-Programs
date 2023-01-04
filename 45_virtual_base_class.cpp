#include<iostream>
using namespace std;

/*
student --> Test
student --> sports
test --> result
sports --> result
*/
class Student {
    protected:
        int roll_no;
    public:
        void set_number(int a) {
            roll_no = a;
        }
        void print_number() {
            cout << "Your roll no is " << roll_no << endl;
        }
};

class Test : virtual public Student {
    protected:
        float maths, physics;
        public:
            void set_marks(float m1, float m2) {
                maths = m1;
                physics = m2;
            }
            void print_marks() {
                cout << "Your result is here: " << endl << "Maths: " << maths << endl << "Physics: " << physics << endl;
            }
};

class Sports: virtual public Student {
    protected:
        float score;
    public:
        void set_score(float sc) {
            score = sc;
        }
        void print_score() {
            cout << "Your PT score is " << score <<endl;
        }
};

class Result : public Test, public Sports {
    private:
        float total;
    public:
        void display() {
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout << "Your Total score is " << total << endl;
        }
};

int main(){
    Result pmr;
    pmr.set_number(19);
    pmr.set_marks(88, 82);
    pmr.set_score(9);
    pmr.display();
    return 0;
}