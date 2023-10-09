#ifndef ORMCONNECTION_H
#define ORMCONNECTION_H

#include "ORM.h"
#include "QueryChanger.h"

class ORMConnection: public ORM{
    private:
        Database* db;
        QueryChanger qc;

    public:
        ORMConnection(Database* db);
        vector<Data*> query(string query);
};

#endif