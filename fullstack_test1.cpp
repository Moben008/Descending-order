#include<iostream>
#include<vector>
#include<string>

using namespace std;

unsigned long long int maximum_number(unsigned long int number){ 

     int arr[20]={0};

    string str = to_string(number);

    for(int i=0; i<str.length(); i++){ 
        arr[str[i]-'0']++;

    }

    unsigned long long int maximum =0; 
    int multiplier=1; 

    for(int i=0; i<=9; i++){ 

        while (arr[i]>0)
        {
            maximum = maximum + (i * multiplier); 
            arr[i]--; 
            multiplier = multiplier*10;
        }
        
    }

    return maximum;

}

int main(){ 


   unsigned long long int number =0; 
   cout<<"Enter a non-negative number :"<<endl;
   cin>>number;

   if(number < 0 ){ 

       cout<<"The number you enteres is not valid please enter a positive number"<<endl;

   }
   else{ 
       cout<<"The number you entered :"<<number<<endl; 

   }
   
   unsigned long long int result=0; 

   result = maximum_number(number);

   cout<<"The maximum number you can get is :"<<result<<endl;



    return 0; 
}