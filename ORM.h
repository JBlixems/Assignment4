#ifndef ORM_H
#define ORM_H

#include "Database.h"

class ORM{
    private:
        Database* db;

    public:
        ORM(Database* db);
        vector<Data*> query(string query);
};

#endif