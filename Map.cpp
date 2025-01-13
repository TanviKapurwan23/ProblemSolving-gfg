#include <iostream>
#include <iterator>
#include <map>

using namespace std;

int main() {

    // Creating an empty map container
    map<int, int> studentGrades;

    // Insert elements in random order
    studentGrades.insert(pair<int, int>(1, 40));
    studentGrades.insert(pair<int, int>(2, 30));
    studentGrades.insert(pair<int, int>(3, 60));
    studentGrades.insert(pair<int, int>(4, 20));
    studentGrades.insert(pair<int, int>(5, 50));
    studentGrades.insert(pair<int, int>(6, 50));
    
    // Another way of inserting a value in a map
    studentGrades[7] = 10;    

    // Printing the contents of the map studentGrades
    map<int, int>::iterator it;
    cout << "\nThe map studentGrades is : \n";
    cout << "\tKEY\tGRADE\n";
    for (it = studentGrades.begin(); it != studentGrades.end(); ++it) {
        cout << '\t' << it->first << '\t' << it->second << '\n';
    }
    cout << endl;

    // Assigning the elements from studentGrades to newGrades
    map<int, int> newGrades(studentGrades.begin(), studentGrades.end());

    // Printing all elements of the map newGrades
    cout << "\nThe map newGrades after assignment from studentGrades is : \n";
    cout << "\tKEY\tGRADE\n";
    for (it = newGrades.begin(); it != newGrades.end(); ++it) {
        cout << '\t' << it->first << '\t' << it->second << '\n';
    }
    cout << endl;

    // Removing all elements up to the element with key=3 in newGrades
    cout << "\nnewGrades after removal of elements less than key=3 : \n";
    cout << "\tKEY\tGRADE\n";
    newGrades.erase(newGrades.begin(), newGrades.find(3));
    for (it = newGrades.begin(); it != newGrades.end(); ++it) {
        cout << '\t' << it->first << '\t' << it->second << '\n';
    }

    // Removing the element with key = 4
    int removedCount;
    removedCount = newGrades.erase(4);
    cout << "\nnewGrades.erase(4) : ";
    cout << removedCount << " removed \n";
    cout << "\tKEY\tGRADE\n";
    for (it = newGrades.begin(); it != newGrades.end(); ++it) {
        cout << '\t' << it->first << '\t' << it->second << '\n';
    }

    cout << endl;

    // Finding the lower bound and upper bound for key = 5 in studentGrades
    cout << "studentGrades.lower_bound(5) : "
         << "\tKEY = ";
    cout << studentGrades.lower_bound(5)->first << '\t';
    cout << "\tGRADE = " << studentGrades.lower_bound(5)->second << endl;
    cout << "studentGrades.upper_bound(5) : "
         << "\tKEY = ";
    cout << studentGrades.upper_bound(5)->first << '\t';
    cout << "\tGRADE = " << studentGrades.upper_bound(5)->second << endl;

    return 0;
}
