#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Record {
    int id;
    string name;
};

bool compare(Record a, Record b) {
    return a.id < b.id;
}

int main() {
    vector<Record> records = {
        {3, "Alice"},
        {1, "Bob"},
        {2, "Charlie"}
    };

    sort(records.begin(), records.end(), compare);

    cout << "Sorted records: \n";
    for (const auto& record : records) {
        cout << record.id << " " << record.name << "\n";
    }

    int searchId = 2;
    auto it = find_if(records.begin(), records.end(), [searchId](Record r) { return r.id == searchId; });

    if (it != records.end()) {
        cout << "Record found: " << it->id << " " << it->name << "\n";
    } else {
        cout << "Record not found\n";
    }

    return 0;
}






 Algorithm for Sorting and Searching User-Defined Records Using STL in C++:
 
1 create a struct with fields name age mark
2 Use STL container such as vector list map to store multiple record
3 use a loop to input end records for the user and insert them into container four use the STD::sort function
4 if the container is sorted use binary search to efficiently search for record by a key 
5 display the result and print all records in sorted order