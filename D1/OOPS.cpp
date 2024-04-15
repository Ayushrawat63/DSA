#include<iostream>
using namespace std;

class Hero {
  //properties 
  // by defult properties  are private and cna be only accessible  inside the class only.
     int health=10;
     // but by stating public it can be accessed outside the class also.
     public:
      char level;
      int  power;
      char status;

     int getHealth()
     {
        return health;
     }
     int getlevel()
     {
        return level;
     }
      void setHealth(int h)
      {
        health=h;
      }
      void setlevel(char l)
      {
        level=l;
      }
};

int main()
{ 
    //creation of object
    
      // static allocation
      Hero h1;
      h1.setlevel('A');
      h1.setHealth(200);
      cout<<h1.level<<endl;
      cout<<h1.getHealth()<<endl;

      // dynamic allocation
      Hero *h2= new Hero;
       (*h2).setlevel('B');
      (*h2).setHealth(300);
       cout<<(*h2).level<<endl;
      cout<<(*h2).getHealth()<<endl;

      cout<<h2->level<<endl;
      cout<<h2->getHealth()<<endl;



    // // you can access public properties outside the class and can change it.
    // //   h1.level=1002; 
    //   cout<<"size of class Hero is : "<<sizeof(h1)<<endl; // if the class is empty then size of class is 1  bits;

    // // you can also access private properties using setter function
    //   cout<<h1.getHealth()<<endl;

    //   // by using setter function we can update the public and private properties outside the class 
    //    h1.setlevel('A');

    // //   cout<<h1.health<<endl; // private  properties
    //   cout<<h1.level<<endl;

    return 0;
}