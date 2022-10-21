//File Name: assign1_pmg45.cpp
//
//Author: Priscilla Garza
//Date: 10/3/2017
//Assignment Number: 3
//CS 1428.006 Fall 2017
//Instructor: Jill Seaman
//
//Outputs information about the user's cellphone plan
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
 char plan;
 int minutes;
 float charge;
 const double A = 10.00; //package A, 100 minutes for $10
 const double B = 15.00; //package B, 250 minutes for $15
 const double C = 20.00; //package C, 1500 minutes for $20
 const double D =30.00; // package D, unlimited minutes for $30

 // prompts the user to input their cellphone plan
 cout << "Talk Plans:" << endl;
 cout << "A. The 100 minute plan" << endl;
 cout << "B. The 250 minute plan" << endl;
 cout << "C. The 1500 minute plan" << endl;
 cout << "D. The unlimited plan" << endl;
 cout << "Enter which talk plan the customer subscribes to:" << endl;
 cin >> plan;


 // prompts the user to input the total number of minutes they use during the
month

 if(plan == 'A' || plan == 'a')
 {
 cout << "Enter the total number of minutes used during month:" << endl;

 }
 else if(plan == 'B' || plan == 'b')
 {
 cout << "Enter the total number of minutes used during the month:" << endl;

 }

 else if(plan == 'C' || plan == 'c')
 {
 cout << "Enter the total number of minutes used during the month:" << endl;

 }

 else if(plan == 'D' || plan == 'd')
 {
 cout << "Enter the total number of minutes used during the month:" << endl;
 }

 else
 {
 cout << "ERROR - Please enter a plan: A, B, C OR D.";
 return 0;
 }
 cin >> minutes;

 // else if statements that let the user know the amount due according to their
cellphone plan

 if(minutes >=0 && minutes <=100)
 {
 cout << "The amount due for the month is $" << fixed << setprecision(2) << A <<
endl;
 }

 else if (minutes >=101 && minutes <= 250)
 {
 charge = A + (.25*(minutes-100));
 cout << "The amount due for the month is $" << fixed << setprecision(2) <<
charge << endl;
 cout << "You have been switched to plan B";
 }


 else if(minutes >= 251 && minutes <=1500)
 {
 cout << "The amount due for the month is $" << fixed << setprecision(2)
<< C << endl;
 cout << "You have been switched to plan C";
 }

 else if(minutes >= 1501 && minutes<= 44640)
 {
 cout << "The amount due for the month is $" << fixed << setprecision(2)
<< D << endl;
 cout << "You have been switched to plan D";

 }

 return 0;
}