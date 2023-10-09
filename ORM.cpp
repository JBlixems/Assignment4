#include "ORM.h"

ORM::ORM(Database* db){
    this->db = db;
}

vector<Data*> ORM::query(string query){
    if(query[0] == 'S'){
        throw "Format not supported";
    }
    int fromPos = query.find("FROM");
    int spacePos = query.find(" ", fromPos + 5);

    string tableName = query.substr(fromPos + 5, spacePos - fromPos - 5);

    return db->getTable(tableName)->rows;
}