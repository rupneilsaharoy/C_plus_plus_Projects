#include<cstring>
#include <iostream>
#include "Mystring.h"

Mystring::Mystring()      /*No args constructor*/
    :str= NULLPTR
    {
        str = new char[1];
        *str = '\0';
    }

Mystring::Mystring(const char *s)       /*overloaded constructor*/
    :str{nullptr}
    {
        if(s == nullptr)
        {
            str = new char[1];
            *str = '\0';
        }
        else
        {
            str = new char[std::strlen(s)+1];
            std::strcpy(str,s);
        }
    }

Mystring::Mystring(const Mystring &source)      /* copy constructor*/
    :str{NULLPTR}
    {
        str = new char[std::strlen(source.str)+ 1];
        std::strcpy(str,source.str);
    }

Mystring::~Mystring()               /*destructor*/
{
    delete[] str;
}

void Mystring::display() const      /*display method*/
{
    std::cout << str << ":" << get_length << std::endl;
}

int Mystring::get_length()const     /*length getter*/
{
    return std::strlen(str);
}

const char *Mystring::get_str() const  /*string getter*/
{
    return str;
}
