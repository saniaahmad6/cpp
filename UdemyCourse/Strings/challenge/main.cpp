#include <iostream>
#include <string>
using namespace std;

int main(){
    string alphabet {" [abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key  {"[ XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    cout <<"Enter text to cipher: ";
    string text, encrypted_text;
    getline(cin,text);

    for (auto i: text){//each element-char
        if (alphabet.find(i)!=string::npos){
            int position = alphabet.find(i);//returns position of alphabet element
            encrypted_text+=key.at(position);//returns key element-char
            
        }
        else{
            encrypted_text+=i;//adding a char to a cpp string
            
        }
    }
    cout << encrypted_text<<" is your code"<<endl;
    text="";
    for (auto i: encrypted_text){
        
        if (key.find(i)!=string::npos){
            int position = key.find(i);//returns position of key element
            text+=alphabet.at(position);//returns alphabet element string
        }
        else {
            text+=i;
        }
            
        
    }
    cout<<text<<" is your original text"<<endl;
    return 0;
}