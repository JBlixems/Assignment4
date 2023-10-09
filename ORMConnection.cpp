#include "ORMConnection.h"

ORMConnection::ORMConnection(Database* db){
    this->db = db;
}

vector<Data*> ORMConnection::query(string query){
    if(query[0] == 'S'){
        qc.change(query);
    }
    int fromPos = query.find("FROM");
    int spacePos = query.find(" ", fromPos + 5);

    string tableName = query.substr(fromPos + 5, spacePos - fromPos - 5);

    return db->getTable(tableName)->rows;
}