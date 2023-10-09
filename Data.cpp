#include "Data.h"

int Data::count = 0;

Data::Data(string u, string e, string p){
    this->username = u;
    this->email = e;
    this->password = p;

    this->id = count;
    count++;
}