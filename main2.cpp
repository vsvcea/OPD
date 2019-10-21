#include <iostream>
#include <stream>
#include <stdlib.h>
#include "pch.h"
using namespace std;
int main()
{
  fstream strikun;
  strikun.open("322.txt, ios::out);
  int x;
  cin >> x;
  for (int z = 1; z <= x; z++)
  {
    for (int y=1; y < z; y++)
      strikun << " ";
    strikun << z << "\n";
  }
  strikun.close();
  return 0;
}
