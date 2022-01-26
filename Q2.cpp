// Reference for the program and endian notations taken from Geeks For Geeks
#include<iostream>
using namespace std;
int main(){
    int i=1; //we define an integer variable
    char* c=(char*)&i; //we point a character pointer towards it so that the pointer only points to the 1st bit.
    if(!c){   
        cout<<"Big Endian"<<endl;
        //In case the pointer points to 0; its pointing to the First bit. Thus, Big Endian. 
    }
    else{
        //Opposite is true for little endian
        cout<<"Little Endian"<<endl;
    }

}

// My machine stores data in little endian form.