#ifndef ORM_H
#define ORM_H

#include "Database.h"

class ORM{
    private:
        Database* db;

    public:
        ORM();
        virtual vector<Data*> query(string query) = 0;
};

#endif