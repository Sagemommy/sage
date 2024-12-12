#include <iostream>
#include <map>

using namespace std;

int main() {
    map<int, string> studentMap;

    
    studentMap[101] = "John";
    studentMap[102] = "Emma";
    studentMap[103] = "Sophia";
    studentMap[104] = "Michael";

    
    cout << "Student IDs and Names:" << endl;
    for (auto it = studentMap.begin(); it != studentMap.end(); ++it) {
        cout << "ID: " << it->first << ", Name: " << it->second << endl;
    }


    int searchId = 102;
    if (studentMap.find(searchId) != studentMap.end()) {
        cout << "Student with ID " << searchId << " is " << studentMap[searchId] << endl;
    } else {
        cout << "Student with ID " << searchId << " not found." << endl;
    }

    return 0;
}



ALGORITHM:
Declare a map with key-value pairs.
Insert key-value pairs using the subscript operator.
Iterate over the map to display its contents.
Search for a specific key using find().
Display the results of the search.

