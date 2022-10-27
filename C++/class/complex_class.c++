#include <iostream>
using namespace std;
class ComplexNumbers {
    // Complete this class
    int real;
    int imaginary;
    int i=-1;
    public:
    
    ComplexNumbers(int real,int imaginary){
        this -> real=real;
        this->imaginary=imaginary;
    }
    void plus(ComplexNumbers obj2){
     int sumreal=this -> real+obj2.real;
     int imagi=this ->imaginary+obj2.imaginary ;  
     real=sumreal;
     imaginary=imagi;   
        }
  void multiply(ComplexNumbers obj2){
      int multreal= real*obj2.real-(imaginary*obj2.imaginary);
      int multimag=real*obj2.imaginary+(imaginary*obj2.real);
      real=multreal;
      imaginary=multimag;
  } 
   void print(){
       cout<<real<<" + i"<<imaginary;
   } 
};


 
int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }
    
}