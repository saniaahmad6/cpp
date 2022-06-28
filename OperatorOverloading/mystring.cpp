#include "mystring.h"
#include <iostream>
#include <cstring>

mystring::mystring() 
: str{nullptr}{
    str=new char[1];
    str[0]='\0';
}

mystring::mystring(const char *s) 
: str{nullptr}{
    std::cout<<"CALLING overloaded constructor"<<std::endl;
    if (s==nullptr){
        str=new char[1];
        str[0]='\0';
    }
    else{
        str=new char[std::strlen(s)+1];
        std::strcpy(str,s);
    }
    
}

mystring::mystring (const mystring &source)
:str{nullptr}{
    std::cout<<"Copy Constructor"<<std::endl;
    str=new char[std::strlen(source.str)+1];
    std::strcpy(str,source.str);
}

mystring::~mystring(){
    std::cout<<"Destructor"<<std::endl;
    delete [] str;
}

void mystring::display() const{
    std::cout<<get_str()<< ":"<<get_length()<<std::endl;
}

int mystring::get_length() const{
    return std::strlen(str);
}

const char * mystring::get_str() const{
    return str;
}

mystring &mystring :: operator=(const mystring &rhs){
    std::cout<<"Copy Assignment"<<std::endl;
    if (this==&rhs) return *this;
    else{
        delete [] str;
        str=new char[std::strlen(rhs.str)+1];
        std::strcpy(str,rhs.str);
    }
    return *this;
}

mystring:: mystring(mystring &&source)
:str{source.str}{
    std::cout<<"MOVE constructor"<<std::endl;
    source.str=nullptr;
}

mystring & mystring:: operator=(mystring &&source)
{   std::cout<<"MOVE assignemnt"<<std::endl;
    if (this==&source) return *this;
    else{
        delete []str;
        str=source.str;
        source.str=nullptr;
        return *this;
    }

} 

mystring mystring:: operator-(){
    std::cout<<"to lower"<<std::endl;
    char * temp=new char[std::strlen(str)+1];
    std::strcpy(temp,str);
    for (int i=0;i<std::strlen(temp);i++){
        temp[i]=std::tolower(temp[i]);
    }
    mystring returned{temp};
    delete [] temp;
    return returned;

}

bool mystring::operator==(const mystring &rhs) const{
    std::cout<<"bool"<<std::endl;
    return (std::strcmp(str,rhs.str)==0);
}
mystring mystring:: operator+(const mystring &rhs) const{
    std::cout<<"adding"<<std::endl;
    char * temp=new char[std::strlen(str)+std::strlen(rhs.str)+1];
    std::strcpy(temp,str);
    std::strcat(temp,rhs.str);
    mystring returned{temp};
    delete [] temp;
    return returned;

}
