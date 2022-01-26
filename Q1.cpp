#include<iostream>
using namespace std;
void sigint2bin(int c){ 
    //Signed numbers represented in the Signed magnitude method. MSB represents sign. 1 for -ve and 0 for +ve
    int a[33]={0};
    if(c<0){
        a[0]=1;
        c=-1*c;
    }
    else{
        a[0]=0;
    }
    int n=31;
    while(c>0){
        a[n]=c%2;
        n--;
        c/=2;
    }
    for(int i=0;i<33;i++){
        cout<<a[i];
    }
    cout<<endl;

}

void unsigint2bin(unsigned int c){
    int a[32]={0};
    int n=31;
    while(c>0){
        a[n]=c%2;
        n--;
        c/=2;
    }
    for(int i=0;i<32;i++){
        cout<<a[i];
    }
    cout<<endl;
}
void char2bin(char c){
    int a[8]={0};
    int k=(int)c; //Storing ascii value in an integer variable
    int n=7;
    while(k>0){    //Converting the same to binary
        a[n]=k%2;
        n--;
        k=k/2;
    }
    for(int i=0;i<8;i++){
        cout<<a[i];
    }
    cout<<endl;
}
int main(){
    char2bin('c');
    sigint2bin(-45689);
    unsigint2bin(45897);
}