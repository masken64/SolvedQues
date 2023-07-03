/*Objective :
Write a Program to Calculate the fuel consumption of your vehicle. The program should ask the user to Enter the quantity of petrol to fill up the tank and the distance covered till the tank goes dry.
Calculate the fuel consumption and display it in the format (liters per 100 kilometers). Convert the same result to the u.s. style of miles per gallon and display the result. If the quantity or distance is zero or negative display ” is an invalid input”.

[Note:  The US approach of fuel consumption calculation (distance / fuel) is the inverse of the European approach (fuel / distance).
Also note that 1 kilometer is 0.6214 miles, and 1 liter is 0.2642 gallons] .
The result should be with two decimal place. to get two decimal place refer the below-mentioned print statement : float cost=670.23
system.out.printf(“you need a sum of rs.%.2f to cover the trip”,cost)

 

Algorithm :
Take the liter of petrol.
Covert the given integer input into double. And check whether it is valid or not.
Similarly take the distance, convert it in double then check if it is valid or not,
Now, print the value obtained by (lt/dis)*100 upto 2 floating values.
Find miles by dis*0.6214, and gallons = lt*0.2642
Find mg = miles/gallons
And Print it upto 2 floating values.*/
  
#include<bits/stdc++.h>
using namespace std;

int main() {

int inL;
int inD;
cout<<"Enter litres "<<endl;
cin>>inL;
if(inL<1){
    cout<<"Error";
    return 0;
}
cout<<"Enter distance "<<endl;
cin>>inD;
if(inD<1){
    cout<<"Error";
    return 0;
}
double L = inL*1.00; //converting to double from int input
double D = inD*1.00;
cout<<fixed<<setprecision(2)<<(L/D)*100<<endl;  //setprecision(2) used to print upto 2 decimal places of double output
double M = D*0.6214; //conversion given in question
double G = L*0.2642;
cout<<fixed<<setprecision(2)<<(M/G)<<endl;
}
