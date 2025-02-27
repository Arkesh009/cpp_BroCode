#include<bits/stdc++.h>
using namespace std;

void pizza();
void pizza(string topping);
void pizza(string tp1, string tp2);

int main()
{
    pizza();
    pizza("Marghrita");
    pizza("veg", "non-veg");

return 0;
}

void pizza(){
    cout << "Here is your pizza\n";
}
void pizza(string topping){
    cout << "This is your " << topping << " pizza\n";
}
void pizza(string type1, string type2){
    cout << "You have choosen " << type1 << " and " << type2 << " pizza\n";
}