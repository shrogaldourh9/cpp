#include <iostream>
#include <string>
using namespace std;

struct CofeeMaker {
  string first;
  string second ;
  string finally ;
};
  int main()
{
  CofeeMaker cof;


      cof.first = " Make hot Water" ;
      cof.second = " put coffee " ;
      cof.finally = " Add Milk ";

      cout << "*STEP_NUBER : " <<endl;
      cout << "-----------\n" ;

    cout <<"first :"<<cof.first  <<endl ;

    cout << "second :"<<cof.second <<endl ;

    cout <<"finally:"<<cof.finally << endl ;

    return 0;

}
