#include<iostream>
#include<iomanip> //must include manpulateors 

int main(){

std::cout<<"noboolalpha - default = "<<(10 == 10)<<std::endl;
std::cout<<"noboolalpha - default = "<<(10 == 20)<<std::endl;
//boolalpha 
std::cout<<std::boolalpha;
std::cout<<"boolalpha " <<(10 == 10)<<std::endl;
std::cout<<"boolalpha " <<(10==20)<<std::endl;
std::cout<<"boolalpha " <<(10 == 10)<<std::endl;
std::cout<<"boolalpha " <<(10==20)<<std::endl;
std::cout<<std::noboolalpha;
std::cout<<"boolalpha " <<(10 == 10)<<std::endl;
std::cout<<"boolalpha " <<(10==20)<<std::endl;
//
// used not used iomanip just useing setf method 
std::cout.setf(std::ios::boolalpha); //std is namespace | ios : class | boolalpha is flag ..it's defined in the class 
std::cout<<"boolalpha by setf method " <<(10==10)<<std::endl;
std::cout<<"boolalpha by setf method " <<(10==20)<<std::endl;
//
//reset flag  ,, flag has default value .. 0 or 1
std::cout<<std::resetiosflags(std::ios::boolalpha);
std::cout<<"Defualt (10==10) "<<(10==10)<<std::endl; //result 1 true
std::cout<<"Defualt (10 == 20) " <<(10 == 20)<<std::endl;  //result 1 false 

//*********
//int
int num = {255};
std::cout<<std::showbase;
std::cout<<std::dec<<num<<std::endl;
std::cout<<std::hex<<num<<std::endl;
std::cout<<std::oct<<num<<std::endl;
std::cout<<std::showpos ;
std::cout<<"showops "<< num<<std::endl;





    return 0;
}