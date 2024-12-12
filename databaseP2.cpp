#include <iostream>
#include <string>
using namespace std;

class Student;

class Display {
public:
    void showStudent(const Student &s);
};

class Student {
private:
    string name;
    int rollNumber;
    float marks;
    static int count;

public:
    Student() {
        name = "";
        rollNumber = 0;
        marks = 0.0;
        count++;
    }

    Student(string n, int r, float m) {
        name = n;
        rollNumber = r;
        marks = m;
        count++;
    }

    ~Student() {
        count--;
    }

    static int getCount() {
        return count;
    }

    void setData(string n, int r, float m) {
        this->name = n;
        this->rollNumber = r;
        this->marks = m;
    }

    void* operator new(size_t size) {
        void *p = ::operator new(size);
        return p;
    }

    void operator delete(void *p) {
        ::operator delete(p);
    }

    friend class Display;
};

int Student::count = 0;

void Display::showStudent(const Student &s) {
    cout << "Name: " << s.name << endl;
    cout << "Roll Number: " << s.rollNumber << endl;
    cout << "Marks: " << s.marks << endl;
}

int main() {
    Student *s1 = new Student("John", 101, 89.5);
    Student *s2 = new Student("Alice", 102, 92.0);

    Display d;
    d.showStudent(*s1);
    d.showStudent(*s2);

    cout << "Total Students: " << Student::getCount() << endl;

    delete s1;
    delete s2;

    cout << "Total Students after deletion: " << Student::getCount() << endl;

    return 0;
}






ALGORTIHM :

### **Algorithm for the Code**

1. **Start.**

2. **Define the `Student` class**:
   - Declare private attributes: `name`, `rollNumber`, and `marks`.
   - Declare a static variable `count` to track the number of objects.
   - Implement:
     - Default constructor to initialize attributes with default values and increment `count`.
     - Parameterized constructor to initialize attributes with specific values and increment `count`.
     - Destructor to decrement `count` when an object is deleted.
     - A static function `getCount()` to return the total number of active `Student` objects.
     - Overload `new` and `delete` operators for dynamic memory allocation.

3. **Define the `Display` class**:
   - Add a `showStudent()` method to access and display private members of `Student` using a `friend` relationship.

4. **In the `main` function**:
   - Dynamically allocate two `Student` objects using `new`.
   - Use the `Display` object to call `showStudent()` and display the details of the `Student` objects.
   - Use `getCount()` to display the total number of `Student` objects.
   - Delete the dynamically allocated objects using `delete`.
   - Again, use `getCount()` to show the updated total number of objects.

5. **End.**