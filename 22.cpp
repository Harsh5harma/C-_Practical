// Created by harsh on 01/03/22.
//

#include <string>
#include <iostream>

class Person
{
private:
    std::string m_name{};
    int m_age{};
public:
    void get_info()
    {
        std::cout<<"Enter your name: ";
        std::cin>>m_name;
        std::cout<<"Enter your age: ";
        std::cin>>m_age;
    }

    void show_info()
    {
        std::cout<<"Name: "<<m_name<<'\n';
        std::cout<<"Age "<<m_age<<'\n';
    }

    void delete_info()
    {
        m_name="";
        m_age=0;
    }
};

class Student : public Person
{
private:
    int m_id{};
    std::string m_major{};
public:
    void get_info()
    {
        Person::get_info();
        std::cout<<"Enter your id: ";
        std::cin>>m_id;
        std::cout<<"Enter your major: ";
        std::cin>>m_major;
    }

    void show_info()
    {
        Person::show_info();
        std::cout<<"ID: "<<m_id<<'\n';
        std::cout<<"Major: "<<m_major<<'\n';
    }
    void delete_info()
    {
        Person::delete_info();
        m_id=0;
        m_major="";
    }
};

class Teacher:public Person
{
private:
    int m_id{};
    std::string m_subject{};
public:
    void get_info()
    {
        Person::get_info();
        std::cout<<"Enter your id: ";
        std::cin>>m_id;
        std::cout<<"Enter your subject: ";
        std::cin>>m_subject;
    }

    void show_info()
    {
        Person::show_info();
        std::cout<<"ID: "<<m_id<<'\n';
        std::cout<<"Subject: "<<m_subject<<'\n';
    }

    void delete_info()
    {
        Person::delete_info();
        m_id=0;
        m_subject="";
    }
};

int main() {
    int choice{};
    Student S{};
    Teacher T{};

    do {
        std::cout << "1: Create Student: \n"
                     "2: Create Teacher: \n"
                     "3: Show Student: \n"
                     "4: Show Teacher: \n"
                     "5: Delete Student: \n"
                     "6: Delete teacher: \n"
                     "7: Exit\n "
                     "Enter Your choice: ";
        std::cin >> choice;

        if (choice == 1)
            S.get_info();
        else if (choice == 2)
            T.get_info();
        else if (choice == 3)
            S.show_info();
        else if (choice == 4)
            T.show_info();
        else if (choice == 5)
            S.delete_info();
        else if (choice == 6)
            T.delete_info();
        else if (choice == 7)
            break;
    } while (choice != 7);
    return 0;
}