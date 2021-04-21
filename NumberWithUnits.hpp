#ifndef NUMBERWITHUNITS
#define NUMBERWITHUNITS
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
namespace ariel
{
class  NumberWithUnits
{
private:
    double value;
    std::string unit;
public:
     NumberWithUnits(double val,std::string u)
     {
        value=val;
        unit=u;
     }
    ~ NumberWithUnits()
    {

    }

     static void read_units(std::ifstream& units_file);

     NumberWithUnits operator+=(const  NumberWithUnits& other);
     NumberWithUnits operator-=(const  NumberWithUnits& other);
     NumberWithUnits operator+(const  NumberWithUnits& other);
     NumberWithUnits operator-(const  NumberWithUnits& other);
     NumberWithUnits operator+();
     NumberWithUnits operator-();


      bool operator<(const  NumberWithUnits& other)const;
      bool operator>(const  NumberWithUnits& other)const;
      bool operator<=(const  NumberWithUnits& other)const;
      bool operator>=(const  NumberWithUnits& other)const;
      bool operator==(const  NumberWithUnits& other)const;
      bool operator!=(const  NumberWithUnits& other)const;

     NumberWithUnits operator++();
     NumberWithUnits operator++(int dummy);
     NumberWithUnits operator--();
     NumberWithUnits operator--(int dummy);

     NumberWithUnits operator*(double d);

     friend std::ostream& operator<<(std::ostream& output,const NumberWithUnits& num);
     friend std::istream& operator>>(std::istream& input,NumberWithUnits& num);
     friend NumberWithUnits operator*(double d,NumberWithUnits n);
     
};

 




}
#endif