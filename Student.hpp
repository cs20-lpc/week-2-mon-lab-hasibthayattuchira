#include <iostream>
#include <string>

using namespace std;

class Student{
    private:
        string* name;
        int* age;
    public:
        // Constructor for Student
        Student(){ 
            name = new string;
            age = new int;
            *name = "";
            *age = 0;
            cout << "Student object created!" << endl;
        }
        // Destructor for Student
        ~Student() {
            delete name;
            delete age;
            name = nullptr;
            age = nullptr;
            cout << "Student object destroyed!" << endl;
        }
        // Setters for Student
        void setName(string s){
            *name = s;
        }
        void setAge(int i){
            *age = i;
        }
        // Getters for Student
        string getName() const {
            return *name;
        }
        int getAge() const {
            return *age;
        }
};
