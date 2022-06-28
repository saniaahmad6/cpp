#ifndef _MYSTRING_H_
#define _MYSTRING_H_
class mystring{
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
    
    mystring operator-();
    mystring operator+(const mystring &rhs) const;
    bool operator==(const mystring &rhs) const;
};


#endif