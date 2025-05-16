#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int id_p = 0;
int id_s = 0;

class Person {
    public:
    string name;
    int age;

    virtual void getdata() = 0;
    virtual void putdata() = 0;
};

class Professor : public Person {
    public:
    int publications;
    int cur_id;

    Professor() {
        cur_id = ++id_p;
    }

    void getdata() override {
        cin >> name >> age >> publications;
    }

    void putdata() override {
        cout << name << " " << age << " " << publications << " " << cur_id << endl;
    }
};

class Student : public Person {
    public:
    int marks[6];
    int sum;
    int cur_id;

    Student() {
        cur_id = ++id_s;
    }

    void getdata() override {
        cin >> name >> age;
        sum = 0;
        for (int i = 0; i < 6; ++i) {
            cin >> marks[i];
            sum += marks[i];
        }
    }

    void putdata() override {
        cout << name << " " << age << " " << sum << " " << cur_id << endl;
    }
};

int main(){
    int n, val;
    
    cin >> n; 
    
    Person *per[n];

    for(int i = 0; i < n; i++){
        cin >> val;
        if(val == 1){
            per[i] = new Professor;
        }
        else 
            per[i] = new Student; // Else the current object is of type Student

        per[i] -> getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i] -> putdata(); // Print the required output for each object.

    return 0;

}
