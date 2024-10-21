// gets a customer's name, email, and id and stores them into a struct
// code by Ryuya

#include <iostream>
#include <string>

struct Customer {
    int id;
    std::string name;
    std::string email;
};

int main() {
    Customer c;
    std::cout << "Enter name: ";
    getline(std::cin, c.name);
    std::cout << "Enter email: ";
    std::cin >> c.email;
    std::cout << "Enter ID: ";
    std::cin >> c.id;
    
    std::cout << "The Customer object has:" << std::endl;
    std::cout << "c.name:  " << c.name << std::endl;
    std::cout << "c.email: " << c.email << std::endl;
    std::cout << "c.id:    " << c.id << std::endl;

    return 0;
}
