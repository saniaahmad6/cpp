#ifndef _NONMEMBER_H_
#define _NONMEMBER_H_
class mystring{
    friend bool operator==(const mystring &lhs,const mystring &rhs);
    friend mystring operator-(const mystring &obj);
    friend mystring operator+(const mystring &lhs,const mystring &rhs);
    private: 
    char * str;
    public:
    mystring();
    mystring(const char *s);
    mystring (const mystring &source);
    ~mystring();
    void display () const;
    int get_length() const;
    const char * get_str() const;
    mystring(mystring &&source); //move constructor
    mystring &operator=(mystring &&source); 
    mystring &operator=(const mystring &rhs);
    
    
};


#endif