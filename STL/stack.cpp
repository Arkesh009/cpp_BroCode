#include <bits/stdc++.h>
using namespace std;

int main()
{
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // the std::stack container does not support range-based for loops directly. The std::stack container is an adapter that provides a stack interface, and it does not have begin and end functions required for range-based for loops.
    cout << st.top() << "\n";

    st.pop();
    cout << "Top element after pop\n";
    cout << st.top() << "\n";
    cout << "Size of the stack is: " << st.size() << "\n";
    cout << "check if stack is empty or not: " << st.empty() << "\n";

    stack<string> st1, st2;

    st1.push(" Arkesh ");
    st2.push("Bhargava");

    st1.swap(st2);
    cout << st1.top() << st2.top();

    return 0;
}