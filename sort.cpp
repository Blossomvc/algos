#include <iostream>
#include <cstdlib>//for "exit()" on some systems
#include <vector>
#include <string>

using namespace std;

/**

\brief Search data for the first occurrence of key
\param [in] key The value being searched for
\param [in] data The data set that will be searched
\returns location of key if found or -1 if not found
*/

void SelectionSort(auto& data);//prototype




int main()
{
  vector<string> inputs;
  string input;
 

   cout<<endl<<"Welcome to \"sort it\". We first need some input data."<<endl;
   cout<<"We'll assume the inputs do not have any spaces."<<endl<<endl;
   cout<<"To end input type the #-character (followed by Enter)"<<endl<<endl;

   cin>>input;
 
    while(input != "#")//read an unknown number of inputs from keyboard
    {
       inputs.push_back(input);
       cin>>input;
    }

   cout<<endl<<"["<<inputs.size()<<" values read from input source]"<<endl<<endl;

  if(inputs.size() == 0)//no input
  {
      cout<<endl<<"No input received, quiting..."<<endl<<endl;
       exit(1);//nothing to do but quit program
  }
  else
  {
	cout<<"The list of inputs entered are: ";
	
	for(unsigned int y=0; y<inputs.size(); y++ )
	{
		cout<<inputs[y]<<" ";
    }
    
    cout<<endl<<endl;

  }
	
	SelectionSort(inputs);
    cout<<endl<<"Program \"sort it\" is now finished."<<endl<<endl;

    return 0;
}

void SelectionSort(auto& Data)
{

	unsigned int minIndex, i;
	
		for(i=0; i<Data.size()-1;i++)
		{
			
			minIndex=i;
			
			for( unsigned int j=i+1; j<Data.size();j++)
			{
				if (Data[j]< Data[minIndex])
				{
					minIndex=j;
				}
			}
			
			if (minIndex != i)
			{
				swap(Data[minIndex], Data[i]);
			}
			
		}//end of outer loop
		
		cout<<endl<<"The number of passes: "<<i+1<<endl;
	
	cout<<"The Sorted list is :";
	
	for(unsigned int x=0; x<Data.size();x++)
	{
		
		cout<<Data[x]<<"  ";
		
	}
	
}


