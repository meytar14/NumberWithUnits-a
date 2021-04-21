#include "doctest.h"
#include "NumberWithUnits.hpp"
using namespace ariel;
#include <string>
using namespace std;


TEST_CASE("operatorsr")
 {
    NumberWithUnits a{2, "km"};
    NumberWithUnits b{3, "km"};
    NumberWithUnits c{5, "km"};
    NumberWithUnits h{1, "hour"};
    NumberWithUnits s{3, "sec"};
    NumberWithUnits d=a+b;
    CHECK(d==c);
    CHECK((c-a)==b);
    CHECK((c-b)==a);
    CHECK((a++)==b);
    CHECK((b--)==a);
    CHECK((a+=b)==c);
    CHECK((c-=b)==a);
    CHECK(a*1.5==b);
    CHECK(b>a);
    CHECK(b<c);
    CHECK(c>=a);
    CHECK(h>s);
    CHECK(s<h);
    CHECK(++s==NumberWithUnits(4,"sec"));
    CHECK(--s==NumberWithUnits(2,"sec"));
    CHECK(++h==NumberWithUnits(2,"hour"));
    CHECK(NumberWithUnits(3,"sec")<NumberWithUnits(10,"sec"));
    CHECK(NumberWithUnits(3,"sec")<=NumberWithUnits(10,"sec"));
    CHECK(++NumberWithUnits(3,"sec")>NumberWithUnits(3,"sec"));
    CHECK(NumberWithUnits(3,"cm")<NumberWithUnits(10,"cm"));
    CHECK(NumberWithUnits(3,"cm")<=NumberWithUnits(10,"cm"));
    CHECK(++NumberWithUnits(3,"cm")>NumberWithUnits(3,"cm"));
 
}