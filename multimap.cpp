#include <iostream>
#include <map>
#include <string>

using namespace std;
// Fork this repo
// Read: https://www.geeksforgeeks.org/cpp/multimap-associative-containers-the-c-standard-template-library-stl/
// If you have question about the code, please ask to the TA
// Implement a multimap to store student IDs and their names. A multimap allows multiple values for the same key,
//  which is useful in this case since multiple students can have the same ID.
// You can see more information: https://cplusplus.com/reference/map/multimap/
// Add a comment before main about what was the most easy and challenging part
// After you finish, type in the terminaL:
// git add .
// git commit -m "Implement multimap for student IDs and names"
// git push origin main


int main() {
    // Create a multimap where the key is student ID (int) and value is student name (string)
    multimap<int, string> mm;

    // Insert students with their IDs into the multimap
   mm.insert({101, "Bert"});
   mm.insert({102, "Sandy"});
   mm.insert({103, "James"});
   mm.insert({103, "Molly"});
   mm.insert({104, "Sam"});

    // Display all students sorted by their student IDs
   for(auto x: mm)
        cout << x.first << ": " << x.second << endl;

    return 0;
}

// Comment: The easiest part of this exercise was programming the insertion of each ID number and student name, as
// once I have the function written, it can be easily repeated. The most difficult part of this was understanding
// that I needed to access namespace std for the code to work. Otherwise, the program wouldn't understand what 
// multimap does. 