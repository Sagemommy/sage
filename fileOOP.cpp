#include <iostream>
#include <fstream> 
#include <string>
using namespace std;

class Employee {
public:
    string name;
    int id;
    float salary;

    void acceptDetails() {
        cout << "Enter employee name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee salary: ";
        cin >> salary;
    }

    void writeToFile(ofstream &outfile) {
        outfile << "Name: " << name << endl;
        outfile << "ID: " << id << endl;
        outfile << "Salary: " << salary << endl;
        
    }
};

int main() {
    string filename = "employee_details.txt";
    ofstream outfile(filename); 

   

    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee emp;
    for (int i = 0; i < n; i++) {
        cout << "\nEntering details for employee " << (i + 1) << ":" << endl;
        emp.acceptDetails();
        emp.writeToFile(outfile);
    }

    cout << "\nEmployee details written to the file successfully." << endl;
    outfile.close();

    
    ifstream infile(filename); 

    if (infile.is_open()) {
        cout << "\nReading employee details from the file:\n";
        string line;
        while (getline(infile, line)) {
            cout << line << endl;
        }
        infile.close();
    } 

    return 0;
}









Here is the algorithm for the given program:

 Algorithm:
1. Start
2. Declare an `Employee` class with:
   - Attributes: `name`, `id`, `salary`.
   -methods
     - `acceptDetails()` to input employee details.
     - `writeToFile(ofstream &outfile)` to write employee details to a file.

3. In the `main` function:
   1. Declare a string variable `filename` and initialize it with `"employee_details.txt"`.
   2. Open an output file stream (`ofstream`) for writing to the file.
   3. If the file cannot be opened:
      - Display an error message.
      - Exit the program.
   4. Prompt the user to enter the number of employees (`n`).
   5. For each employee (`i` from 0 to `n-1`):
      - Create an object of `Employee` class.
      - Call `acceptDetails()` to input employee details.
      - Call `writeToFile(outfile)` to write the details to the file.
   6. Display a message indicating that employee details have been written successfully.
   7. Close the output file.

4. Open an input file stream (`ifstream`) to read from the file.
   - If the file can be opened:
     1. Read the file line by line using `getline()`.
     2. Display each line on the console.
     3. Close the input file.
   - If the file cannot be opened:
     - Display an error message.

5. **End** 

