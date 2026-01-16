//Vector

#include <bits/stdc++.h>
using namespace std;
int main() {
vector<int> v = {5,2,8,6,1};

// Sorting
sort(v.begin(),v.end()); // {1,2,5,6,8}
// Adding elements
v.push_back(10); // {1,2,5,6,8,10}
// Removing the last element
v.pop_back(); // {1,2,5,6,8}
// Printing elements
for (int x : v) cout << x << " "; //output: 1 2 5 6 8 
return 0;
}

Operation                            Syntax
Declare                           vector<int> v;
Initialize                        vector<int>v(n, val);
Access Element                    v[i] or v.at(i)
Add Element                       v.push_back(x);
Remove Last                       v.pop_back();
Insert at Pos                     v.insert(it, x);
Erase Element                     v.erase(it);
Clear Vector                      v.clear();
Sort Vector                       sort(v.begin(), v.end());


//Pair

#include <bits/stdc++.h>
using namespace std;
int main() {
pair<int, string> p = {1,"Alice"};
// Accessing elements
cout << p. first << " " << p. second << endl; // output : 1 Alice

// Using pair in vector
vector<pair<int,int>> vp = {{3,2},{1,5},{4,1}};
sort(vp.begin(), vp.end()); // Sorts based on . first,then . second

// Printing sorted pairs
for (auto x : vp)
cout << x.first << " " << x.second << endl;
return 0;
}


Operation                           Syntax
Declare                         pair<int, int> p;
Initialize                      pair<int, int> p = {1, 2};
Access First                    p.first;
Access Second                   p. second;
Modify Values                   p.first = 10;
pair in Vector                  vector<pair<int,int>>v;
Sort Pairs                      sort(v.begin(), v.end());

//Set

#include <bits/stdc++.h>
using namespace std;
int main() {
set<int> s;
// Inserting elements
s. insert (5);
s. insert (2);
s. insert (8);
s. insert (2)// Duplicate,won't be added

// Checking presence
if (s. find(5) s.end())
cout << "5 is present" << endl;

// Removing element
s.erase(2);
// Iterating over set

for (int x : s )
cout << x << " "; // output: 5 8 (sorted order)
return 0;
}


Operation                         Syntax
Declare                         set<int> s;
Insert Element                  s.insert(x);
Remove Element                  s.erase(x):
Find Element                    s.find(x);
Count Element                   s.count(x);
Size of Set                     s.size();
Check Empty                     s.empty();
Iterate Over Set                for(auto x : s) cout x;
Clear Set                       s.clear();


//Unordered Set

#include <bits/stdc++.h>
using namespace std;
int main() {
unordered_set<int> us;

// Inserting elements
us. insert (5);
us. insert (2);
us. insert (8);
us. insert (2); // Duplicate, won't be added

// Checking presence
if (us. find(5) !=  us.end())
   cout << "5 is present" << endl;
// Removing element
us.erase(2);
// Iterating over unordered_set
for (int x : us)
cout << x <<" "; // Output is in any order

return 0;
}


Operation                           Syntax
Declare                        unordered_set<int> us;
Insert Element                 us.insert(x);
Remove Element                 us.erase(x);
Find Element                   us.find(x);
Count Element                  us.count(x);
Size of Set                    us.size();
Check Empty                    us.empty();
Iterate Over Set               for(auto x : us) cout << x;
Clear Set                      us.clear();


//Map

#include<bits.stdc++.h>
using namespace std;
int main() {
map<int, string> mp;
// Inserting key-value pairs
mp[1] ="Alice" ;
mp[3] = "Bob";
mp[21] = "Charlie";

// Iterating over map (keys are sorted)
for (auto p : mp)
cout << p. first <<" -> " << p. second << endl;

// Searching for a key
if (mp.find(3) != mp.end())
cout << "Key 3 found!" << endt;
return 0;
}

 Operation                    Syntax
Insert / Assign           mp[key] = value;
Insert (explicit)         mp.insert({key,value});
Erase by Key              mp.erase(key):
Erase by Iterator         mp.erase(it);
Find Element              mp.find(key);
Check if Exists           mp.count(key);
Access Element            mp[key]
Get First Element         mp.begin();
Get Last Element          mp.rbegin();
Size of Map               mp.size();


//Unordered Map

#include<bits.stdc++.h>
using namespace std;
int main() {
    unordered_map<string , int > ump;

// Insert elements
ump ["Alice"] = 25;
ump. insert ({"Bob", 30});

// Access elements
cout << "Alice's age: " << ump ["Alice"] << endl;

// Check if key exists
if (ump.count("Bob")) cout <<  "Bob exists!"<< endl;

// Iterate over unordered_map
for (auto &p : ump)
cout<< p. first << "-> " p. second endl;

return 0;
}

Operation                                Syntax
Insert / Assign                      ump[key] value;
Insert (explicit)                    ump.insert({ value}):
Erase by Key                         ump.erase(key);
Erase by Iterator                    ump.erase(it);                   
Find Element                         ump.find(key);
Check if Exists                      ump.count(key);
Access Element                       ump[key] 
Get First Element                    ump.begin();
Get Last Element                     ump.rbegin();
Size Of Map                          ump.size();


