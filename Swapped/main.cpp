//
//  main.cpp
//  Swapped
//  Created by dixit sharma on 7/6/17.
//  Copyright © 2017 deepak sharma. All rights reserved.
//

#include <iostream>
using namespace std;

//Global Variables
int num1,num2;

void Assign()
{
    cout<<"Enter the first Number : ";
    cin>>num1;
    cout<<"Enter the Second Number : ";
    cin>>num2;
    cout<<endl<<"You entered : "<<num1<<" AND "<<num2<<endl;;
}

void swapped()                                              // XOR to swapped values
{
    num1 = num1^num2;
    num2 = num1^num2;
    num1 = num1^num2;
    
    cout<<endl<<"Now, First number is  : "<<num1<<endl;
    cout<<"Now, Second number is : "<<num2<<endl;
    
}

int main(int argc, const char * argv[]) {
    
    Assign();
    swapped();
    return 0;
}
/*------------------------OUTPUT----------------------
 Enter the first Number : 10
 Enter the Second Number : 20
 
 You entered : 10 AND 20
 
 Now, First number is  : 20
 Now, Second number is : 10
 
 Program ended with exit code: 0
 ----------------------------------------------------*/
