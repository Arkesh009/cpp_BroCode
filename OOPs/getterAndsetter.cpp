<<<<<<< HEAD
#include<bits/stdc++.h>
using namespace std;

class stove{
    private:
    int temprature = 0;

    public:
    stove(int temprature){
        setTemp(temprature);
    }
    int getTemp(){
        return temprature;
    }

    void setTemp(int temprature){
        this -> temprature = 100;
=======
#include <bits/stdc++.h>
using namespace std;

class stove
{
private:
    int temprature = 0;

public:
    stove(int temprature)
    {
        setTemp(temprature);
    }
    int getTemp()
    {
        return temprature;
    }

    void setTemp(int temprature)
    {
        this->temprature = 100;
>>>>>>> main
    }
};

int main()
{
<<<<<<< HEAD
   stove stove1(0);

   stove1.setTemp(200);

   cout << "The temprature is: " << stove1.getTemp();
   
   return 0;
=======
    stove stove1(0);

    stove1.setTemp(200);

    cout << "The temprature is: " << stove1.getTemp();

    return 0;
>>>>>>> main
}