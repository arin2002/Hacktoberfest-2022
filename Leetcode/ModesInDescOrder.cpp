/*
Print all modes in descending order
Input
File name, which consists of the given sets of numbers
Output
All the numbers that are the mode of the given set in descending order
Processing Involved
Count the occurrences of all the digits and then store all those values in a vector, now using user defined descending order condition sort the vector and print those elements 
Solution Alternatives
Algorithm/ Pseudocode
START
Step.1 Include all the required and necessary header files, create a vector that takes integer and create a map count that has int type both in its first(key), second(value)
Step.2 Create the input file stream fin, and read the name of the file.
Step.3 Run a loop till End of file returns true, and get the elements from the file
Step.4 Check if the element was there in the matrix, if it not there then add that value as key along 1 as its value(counting)
Step.5 And if the element is there in the matrix, then increment the value i.e. its number of occurrences
Step6. Count the max no. of occurrences and only copy those numbers that have the max. no. of occurrences in the vector val.
Step7. Create a user defined function to return true when the first argument is greater than the second argument, that'll will be used for sorting this vector in descending order. Now using the predefined sort function, sort the vector in descending order
Step8. Run a loop till the size of the vector, and print the elements.
STOP
Font Size
18
Language
Editor Theme 
Select a Theme
Your code has Passed Execution!
*/
#include<iostream>
using namespace std;
#include<string>
#include<vector>
#include<map>
#include<utility>
#include<fstream>
#include<algorithm>


bool wayToSort(int i, int j) { return i > j; }


int main()
{
    ifstream fin;
    map<int,int> count;
    vector<int> val;
    string fname;
    cin>>fname;
    int value;
    fin.open(fname);
    int max=0;
    while(!fin.eof())
    {
        fin>>value;
        if(!fin.eof())
        {
            if(count.find(value)==count.end())  //is not in the map
            count[value]=1;
            else
            count[value]++;
            if (count[value]>max)
            {
                max=count[value];
            }
        }
        
        
    }
    //sort(count.begin(),count.end());
	for(auto &a:count)
	{
	if (a.second==max)
	val.push_back(a.first);
	}
	sort(val.begin(),val.end(),wayToSort);
	//cout<<val.size();
	for(int i=0;i<val.size();i++)
	{
	    cout<<val[i]<<" ";
	}
	

}
