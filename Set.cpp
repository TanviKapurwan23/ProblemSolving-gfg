#include <bits/stdc++.h>

using namespace std;

int main() {
    set<char> a;
    a.insert('A');
    a.insert('B');
    a.insert('C');
    a.insert('D');

    for(auto& str : a){
        cout<<str<<endl;
    }
    cout << "\n";
    return 0;
}


//Note:  set does not take multiple same values it only accepts a unique value; we should use Multiset to print same different value

/*
Storing order - The set stores the elements in sorted order.
Values Characteristics - All the elements in a set have unique values.
Values Nature - The value of the element cannot be modified once it is added to the set, though it is possible to remove and then add the modified value of that element. Thus, the values are immutable.
Search Technique - Sets follow the Binary search tree implementation.
Arranging order - The values in a set are unindexed.


Some Basic Functions Associated with Set: 
begin() - Returns an iterator to the first element in the set.
end() - Returns an iterator to the theoretical element that follows the last element in the set.
size() - Returns the number of elements in the set.
max_size() - Returns the maximum number of elements that the set can hold.
empty() - Returns whether the set is empty.
The time complexities for doing various operations on sets are:

Insertion of Elements - O(log N)
Deletion of Elements - O(log N)
*/