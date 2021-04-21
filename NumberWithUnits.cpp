#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "NumberWithUnits.hpp"
using namespace ariel;
using namespace std;
namespace ariel{


     
     void NumberWithUnits::read_units(ifstream& units_file)
     {

     }

     NumberWithUnits NumberWithUnits::operator+=(const  NumberWithUnits& other)
     {
        NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator-=(const  NumberWithUnits& other)
     {
          NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator+(const  NumberWithUnits& other)
     {
          NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator-(const  NumberWithUnits& other)
     {
          NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator+()
     {
          NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator-()
     {
         NumberWithUnits a{2, "km"};
         return a;
     }


     bool NumberWithUnits::operator<(const  NumberWithUnits& other)const
     {
         return true;
     }
     bool NumberWithUnits::operator>(const  NumberWithUnits& other)const
     {
         return true;
     }
     bool NumberWithUnits::operator<=(const  NumberWithUnits& other)const
     {
         return true;
     }
     bool NumberWithUnits::operator>=(const  NumberWithUnits& other)const
     {
         return true;
     }
     bool NumberWithUnits::operator==(const  NumberWithUnits& other)const
     {
         return true;
     }
     bool NumberWithUnits::operator!=(const  NumberWithUnits& other)const
     {
         return true;
     }

     NumberWithUnits NumberWithUnits::operator++()
     {
          NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator++(int dummy)
     {
         
           NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator--()
     {
         
         NumberWithUnits a{2, "km"};
         return a;
     }
     NumberWithUnits NumberWithUnits::operator--(int dummy)
     {
         
          NumberWithUnits a{2, "km"};
         return a;
     }

    
     NumberWithUnits NumberWithUnits::operator*(double d)
     {
         
          NumberWithUnits a{2, "km"};
         return a;
     }

    std::ostream& operator<<(std::ostream& output,NumberWithUnits const & num)
    {
        return (output <<"4"<< '+' <<"[km]");
    }
    std::istream& operator>>(std::istream& input,NumberWithUnits& num)
    {
        return input;
    }
    NumberWithUnits operator*(double d,NumberWithUnits n)
    {
          NumberWithUnits a{2, "km"};
         return a;
    }




}
