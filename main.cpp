#include <iostream>
using namespace std;

int sortDescending(int, int, int);

int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA

  sortDescending(int red, int green, int blue);

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}

int sortDescending(int first, int second, int third)
{
  int temp;

  if( first < second )
  {
    temp = first;
    first = second;
    second = temp;
  }
  if( second < third )
  {
    temp = second;
    second = third;
    thired = temp;
  }
  if( first < second )
  {
    temp = first;
    first = second;
    second = temp;
  }
}
}
