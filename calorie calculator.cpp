#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;
struct person {
char name[50];
int age;
float weight;
float height;
char gender;};
int main() {
ofstream f;
f.open("text.txt");
int n;
int*pointer;
pointer=&n;
cout << "\t calorie calculator \n";
cout << "please enter the number of persons \n";
cin >> *pointer;
float bmi[*pointer];
float bmr[*pointer];
person p[*pointer];
for (int i = 1; i <= *pointer; i++) {
cout << "please enter data for the " << i << " person\n";
cout << "please enter name \n";
cin >> p[i - 1].name;
f<< "name:"<<p[i - 1].name<<endl;
cout << "please enter age in years \n";
cin >> p[i - 1].age;
if (p[i - 1].age < 0) { cout << "error!!!!!!!!/n please enter POSITIVE NUMBERS \n"; cin >> p[i - 1].age; }
f<<"age:"<<p[i - 1].age<<endl;
cout << "please enter weight in kilograms \n";
cin >> p[i - 1].weight;
if (p[i - 1].weight < 0) { cout << "error!!!!!!!!/n please enter POSITIVE NUMBERS \n"; cin >> p[i - 1].weight; }
f<< "weight:"<<p[i - 1].weight<<endl;
cout << "please enter height in centimeters \n";
cin >> p[i - 1].height;
if (p[i - 1].height < 0) { cout << "error!!!!!!!!\n please enter POSITIVE NUMBERS \n"; cin >> p[i - 1].height; }
f<<"height:" <<p[i - 1].height<<endl;
cout << "please enter gender f for female & m for male \n";
cin >> p[i - 1].gender;
if (p[i - 1].gender == 'm' || p[i - 1].gender == 'M') {
f<< "gender:male"<<endl;
bmr[i - 1] = 66 + 13.7 * p[i - 1].weight + 5 * p[i - 1].height - 6.8 * p[i - 1].age;
cout<<"BMR:"<<bmr[i - 1]<<endl;
f<<"BMR:"<<bmr[i - 1]<<endl;}
else if (p[i - 1].gender == 'f' || p[i - 1].gender == 'F') {
f<< "gender:female"<<endl;
bmr[i - 1] = 655 + 9.6 * p[i - 1].weight + 1.8 * p[i - 1].height - (4.7 * p[i - 1].age);
cout<<"BMR:"<<bmr[i - 1]<<endl;
f<<"BMR:"<<bmr[i - 1]<<endl;}
bmi[i - 1] = (1.0 * p[i - 1].weight) / pow((1.0 * p[i - 1].height)/100, 2);
cout<<"BMI:"<<bmi[i - 1]<<endl;
f<<"BMI :"<<bmi[i - 1]<<endl;
if (bmi[i - 1] < 18.5)
{cout << "under weight\n";
f<< "under weight\n";}
else if (bmi[i - 1] >= 18.5 && bmi[i - 1] <= 25)
{cout << "Optimal weight\n";
f<< "Optimal weight\n";}
else if (bmi[i - 1] > 25)
{cout << "Overweight\n";
f<<"Overweight\n";}}
f.close();
return 0;}
