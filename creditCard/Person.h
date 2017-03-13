#ifndef PERSON_H
#define PERSON_H

#include <string>

using namespace std;

class Person
{
    public:
        Person();
        Person(string name);
        //Person(string fn, string ln, string a);
        Person(string fn, string ln, string ad) {fname = fn, lname = ln, address = ad;}
        string getFirstName() {return fname;}
        string getLastName() {return lname;}
        string getAddress() {return address;}
        void setFirstName(string fn) {fname = fn;}
        void setLastName(string ln) {lname = ln;}
        void setAddress(string ad) {address = ad;}


    private:
        string fname;
        string lname;
        string address;

};

#endif // PERSON_H

