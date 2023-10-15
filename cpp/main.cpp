#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
  char name[100];
  int roll;
  int cls;
  char section;
};

int main()
{
  Student abul;
  abul.roll = 29;
  abul.cls = 9;
  abul.section = 'A';
  char nm[100] = "Abul";
  strcpy(abul.name, nm);

  Student babul;
  babul.roll = 55;
  babul.cls = 9;
  babul.section = 'B';
  char nm2[100] = "Babul";
  strcpy(babul.name, nm2);

  cout << abul.name;

  return 0;
}