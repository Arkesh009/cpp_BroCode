// Use the sort() function to sort a list of student objects based on their marks.
// not the correct solution yet

#include<bits/stdc++.h>
using namespace std;

class student{
    public:
        string name;
        double marks;
};

int main()
{
   cout << "Enter the number of students\n";
   int n;
   cin >> n;

   cout << "Now enter the Name and marks for each student\n";
   vector<student> st;

   while(n--){     
        cout << "Enter name: ";
        string name;
        getline(cin, name);
        st.emplace_back(name);

        cout << "Enter his/her marks: ";
        double marks;
        cin >> marks;
        st.emplace_back(marks);
        cin.ignore();
}


// sort(st.begin(),st.end());
cout << "Sorted lis :\n";
for(auto i: st){
    cout << i.name << " ";
}

return 0;
}
