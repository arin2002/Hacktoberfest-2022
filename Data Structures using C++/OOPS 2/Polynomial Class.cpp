/*
Code : Polynomial Class
Implement a polynomial class, with the following properties and functions.
Properties :
1. An integer array (lets say A) which holds the coefficient and degrees. Use array indices as degree and A[i] as coefficient of ith degree.
2. An integer holding total size of array A.

Functions :
1. Default constructor

2. Copy constructor

3. setCoefficient -
This function sets coefficient for a particular degree value. If the given degree is greater than the current capacity of polynomial, increase the capacity accordingly and add then set the required coefficient. If the degree is within limits, then previous coefficient value is replaced by given coefficient value

4. Overload "+" operator (P3 = P1 + P2) :
Adds two polynomials and returns a new polynomial which has result.

5. Overload "-" operator (P3 = p1 - p2) :
Subtracts two polynomials and returns a new polynomial which has result

6. Overload * operator (P3 = P1 * P2) :
Multiplies two polynomials and returns a new polynomial which has result

7. Overload "=" operator (Copy assignment operator) -
Assigns all values of one polynomial to other.

8. print() -
Prints all the terms (only terms with non zero coefficients are to be printed) in increasing order of degree.
Print pattern for a single term : <coefficient>"x"<degree>
And multiple terms should be printed separated by space. And after printing one polynomial, print new line. For more clarity, refer sample test cases

Input Format :
Line 1 : N, total number of terms in polynomial P1
Line 2 : N integers representing degree of P1 (separated by space)
Line 3 : N integers representing coefficients of P1 (separated by space)
Line 4 : M, total number of terms in polynomial P2
Line 5 : M integers representing degree of P2 (separated by space)
Line 6 : M integers representing coefficients of P2 (separated by space)
Line 7 : Integer C, choice representing the function to be called (See main for more details)

Sample Input 1 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
1

Sample Output 1 :
4x0 3x1 -3x2 3x3 -4x5


Sample Input 2 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
2

Sample Output 2 :
-4x0 -1x1 3x2 1x3 -4x5


Sample Input 3 :
3
1 3 5
1 2 -4
4
0 1 2 3
4 2 -3 1
3

Sample Output 3 :
4x1 2x2 5x3 5x4 -22x5 -6x6 12x7 -4x8

*/


/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/
class Polynomial {
public :
    int *degCoeff;      // Name of your array (Don't change this)
	int capacity;			// total size
public :
 Polynomial() {
		degCoeff = new int[10];
         for(int i=0;i<10;i++)degCoeff[i]=0;
		capacity = 10;
	}

	 Polynomial(const Polynomial &d) {
		this -> degCoeff = new int[d.capacity];
		for(int i = 0; i < d.capacity; i++) {
			this -> degCoeff[i] = d.degCoeff[i];
		}
		this -> capacity = d.capacity;
	}
    
   void setCoefficient(int deg,int coeff) {
          if(deg>=capacity)
          {
              //int size = this->capacity;
             int size=deg+1;
              int *newarr = new int[size];
              for(int i=0;i<capacity;i++)newarr[i]=this->degCoeff[i];
              for(int i=capacity;i<size;i++)newarr[i]=0;
              delete[] this->degCoeff;
              this->degCoeff=newarr;
              this->capacity = size;
          }
          this->degCoeff[deg]=coeff;
    }
    // Complete the class
    void print() {
        for(int i = 0;i<capacity;i++) {
            if(degCoeff[i])
			cout << degCoeff[i] << "x" <<i << " ";
		}
		cout << endl;
    }
    
    Polynomial operator+(Polynomial &p) {
        Polynomial newP;
        newP.capacity = max(p.capacity,capacity);
        newP.degCoeff = new int[newP.capacity];
        
        if (capacity<p.capacity) {
            int k;
            for (k=0;k<capacity;k++) {
                newP.degCoeff[k]=degCoeff[k]+p.degCoeff[k];
            }
            for (;k<p.capacity;k++) {
                newP.degCoeff[k]=p.degCoeff[k];
            }
        } else {
            int k;
            for ( k=0;k<p.capacity;k++) {
                newP.degCoeff[k]=degCoeff[k]+p.degCoeff[k];
            }
            for (;k<capacity;k++) {
                newP.degCoeff[k]=degCoeff[k] ;
            }
        }
        return newP;
    }
    
    Polynomial operator-(Polynomial &p) {
        Polynomial newP;
        newP.capacity = max(capacity,p.capacity);
        newP.degCoeff = new int[newP.capacity];
        
        if (capacity<p.capacity) {
            int k;
            for (k=0;k<capacity;k++) {
                newP.degCoeff[k]=degCoeff[k]-p.degCoeff[k];
            }
            for (;k<p.capacity;k++) {
                newP.degCoeff[k]=-p.degCoeff[k];
            }
        } else {
            int k;
            for ( k=0;k<p.capacity;k++) {
                newP.degCoeff[k]=degCoeff[k]-p.degCoeff[k];
            }
            for (;k<capacity;k++) {
                newP.degCoeff[k]=degCoeff[k] ;
            }
        }
        return newP;
    }
    Polynomial operator*(Polynomial const &p) {
        Polynomial newP;
        newP.capacity = p.capacity+capacity;
        newP.degCoeff = new int[newP.capacity];
        
        for(int i=0;i<newP.capacity;i++)
            newP.degCoeff[i]=0;
        
        for (int i=0;i<capacity;i++) {
            for (int j=0;j<p.capacity;j++) {
                newP.degCoeff[i+j] += degCoeff[i]*p.degCoeff[j];
            }
        }
        return newP;
    }
    Polynomial operator=(Polynomial const &d) {
		this -> degCoeff = new int[d.capacity];
		for(int i = 0; i < d.capacity; i++) {
			this -> degCoeff[i] = d.degCoeff[i];
		}
		this -> capacity = d.capacity;
        return *this;
	}
    
};
