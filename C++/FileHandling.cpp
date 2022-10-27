#include<iostream>
#include <fstream>
#include<string>
using namespace std;
 
class cDirectory
{
   private:
   string sName;
   long int iMobileNum;
 
   public:
   cDirectory()
   {
       // Default constructor
       ofstream file_in;
 
   }
 
   void vInput()
   {
       cout << "Enter Name : ";
       getline(cin,sName);
       cout << "Enter Mobile Number : ";
       cin >> iMobileNum;
       vFile_Input();
   }
 
   void vFile_Input()  //Write data in file
   {
       ofstream file;
       file.open("P12.txt",ios::app);
       file << "\n" << sName << "\t\t\t\t\t\t" << iMobileNum;
       file.close();
   }
 
   void vOutput()
   {
       ifstream file;
       file.open("P12.txt");
       while(!file.eof())
       {
           string text;
           getline(file,text);
           cout << text<<endl;
       }
   }
 
//   for helping in search;
   int isSubstring(string s1, string s2)
   {
   int M = s1.length();
   int N = s2.length();
   /* A loop to slide pat[] one by one */
   for (int i = 0; i <= N - M; i++)
   {
       int j;
       /* For current index i, check for
       pattern match */
 
       for (j = 0; j < M; j++)
           if (s2[i + j] != s1[j])
               break;
       if (j == M)
           return i;
   }
   return -1;
}
 
   void vSearchinFile()
   {
       ifstream file;
       file.open("P12.txt");
       string str , target ;
       cout<< "Enter Name To Search for : ";
       cin >> target;
 
       bool bTarget_flag;
 
       while(!file.eof())
       {
           bTarget_flag = true;
           string text;
           getline(file,text);
           if(isSubstring(target,text) == -1)
           {
               bTarget_flag = false;
           }
           else
           {
               cout << "\nData is ->\n" << text << endl ;
               break;
           }
       }
       if(bTarget_flag == false)
       {
           cout << "No Data found" << endl;
       }
   }
 
   void vUpdate()
   {
       ofstream Ofile;
       ifstream file;
 
       file.open("P12.txt");
 
       string str , target ;
       cout<< "Enter Mobile Number To Search for : ";
       cin >> target;
 
       bool bTarget_flag;
 
       while(!file.eof())
       {
           cout << file.tellg() << endl;
           int fptr = file.tellg();
           bTarget_flag = true;
           string text;
           getline(file,text);
           if(isSubstring(target,text) == -1)
           {
               bTarget_flag = false;
           }
           else
           {
               Ofile.open("P12.txt",ios::in);
               Ofile.seekp(fptr,ios::beg);
              
               
               cout << "Enter Name : ";
               cin.ignore();
               getline(cin,sName);
               cout << "Enter Mobile Number : ";
               cin >> iMobileNum;
 
 
               int fptr2 = file.tellg();
               cout << fptr2 << endl;
               for(int j=0;j<sizeof(text);j++)
                   {
                       Ofile << " ";
                   }
               Ofile.seekp(fptr,ios::beg);
               Ofile << "";
               Ofile  << sName << "\t\t\t\t\t\t" << iMobileNum << "\n";
 
               break;
               Ofile.close();
           }
       }
       if(bTarget_flag == false)
       {
           cout << "No Data found" << endl;
       }
       //return 0;
       file.close();
   }
  
 
   ///////////  Sorting ///////////////
 
   void vSortData()
   {
       //
       // 1. to sort count number of lines in txt
       // 2. make array of size n and put each line into it.
       // make a swap function using file ptr concept.
       // 🤷‍♂️ 💫confusion hi confusion hai solution ka kuch pata nahi
       int n ,iCount = 0;
       ifstream file;
       file.open("P12.txt");
       while(!file.eof())
       {
           string text;
           getline(file,text);
           iCount++ ;
       }
       cout << iCount << endl;
       n = iCount -1 ;
       string arr[n] ;
       int i = 0;
 
       file.seekg(ios::app);
       while(!file.eof())
       {
           string text;
           getline(file,text);
           arr[i] = text;
           i++ ;
       }
 
       sort(arr,arr+n);
 
       for(i=0;i<n;i++)
       {
           cout << arr[i] << endl ;
       }
 
      
       file.close();
   }
 
   ~cDirectory()
   {   }
 
};
 
 
int main()
{
   cDirectory obj;
  
   int ichoice;
   do
   {
       cout << "\n---------------------------------" << endl;
       cout << "MENU DRIVEN PROGRAM" << endl;
       cout << "0} Exit " << endl;
       cout << "1} Add Data" << endl;
       cout << "2} Search Data" << endl;
       cout << "3} Update Data" << endl;
       cout << "4} Display Data" << endl;
       cout << "5} Sort Data" << endl;
      
       cout << "Enter Choice : ";
       cin >> ichoice;
       cin.ignore();
 
       switch (ichoice)
       {
       case 0:
          
           break;
 
       case 1 :
           obj.vInput();
           break;
 
       case 2 :
           //
           obj.vSearchinFile();
           break;
 
       case 3 :
           //
           obj.vUpdate();
          
           break;
 
       case 4 :
           //
           obj.vOutput();
           break;
 
       case 5 :
           //
           obj.vSortData();
           break;
 
       default:
           cout << "Invalid Input" << endl;
       }
 
 
   }while(ichoice);
 
cout << "Program Terminated" <<endl ;
}
// This program is written in macOs(m1)
// so might give some errors while running in windows 