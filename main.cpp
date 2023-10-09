#include "ORMConnection.h"
#include <iostream>
#include <vector>

void printData(vector<Data*> data){
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i]->username << " " << data[i]->email << " " << data[i]->password << endl;
    }
}

int main(){
    Database* db = new Database("People");
    Table* t1 = new Table("Employees");
    t1->addRow(new Data("Johnny", "john@gmail.com", "Password123"));
    t1->addRow(new Data("David", "david@gmail.com", "Password@123"));
    t1->addRow(new Data("Hannah", "hannah@gmail.com", "Password4123"));
    t1->addRow(new Data("Sarah", "sarah@gmail.com", "Password12345"));
    t1->addRow(new Data("Libbok", "libbok@gmail.com", "CantKick123"));

    Table* t2 = new Table("Customers");
    t2->addRow(new Data("Customer1", "Customer1@yahoo.com", "Brain1"));
    t2->addRow(new Data("Customer2", "Customer2@yahoo.com", "Brain2"));
    t2->addRow(new Data("Customer3", "Customer3@yahoo.com", "Brain3"));
    t2->addRow(new Data("Customer4", "Customer4@yahoo.com", "Brain4"));
    t2->addRow(new Data("Customer5", "Customer5@yahoo.com", "Brain5"));

    db->addTable(t1);
    db->addTable(t2);

    ORM* connection = new ORMConnection(db);
    try
    {
        vector<Data*> d = connection->query("SELECT * FROM Employees");
        printData(d);
    }
    catch(char const* e)
    {
        cout << e << '\n';
    }

    try
    {
        vector<Data*> d = connection->query("FROM Customers SELECT *");
        printData(d);
    }
    catch(char const* e)
    {
        cout << e << '\n';
    }

    return 0;
}
