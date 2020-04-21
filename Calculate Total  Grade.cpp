#include <iostream>
using namespace std;
int main()
{
int N, M=0, total, grade, possible, total_possible, total_grade;
double average;
M=0;
total_grade = 0;
total_possible = 0;
cout << "How many exercises to input?" << endl;
cin >> N;
for (N > 0; N--;)
{
M+=1;
cout << "Score received for exercise " << M << ": ";
cin >> grade;
cout << "Total points possible for exercise " << M << ": ";
cin >> possible;
total_grade = total_grade + grade;
total_possible = total_possible + possible;
}
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
average = (total_grade * 100.0)/total_possible;
cout << "Your total is " << total_grade<< " out of " << total_possible << ", or " << average << "%";
return 0;
}
