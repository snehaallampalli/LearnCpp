
/*
Codility Tasks:

A small frog wants to get to the other side of the road. The frog is currently located at position X and wants to get to a position greater than or equal to Y. The small frog always jumps a fixed distance, D.

Count the minimal number of jumps that the small frog must perform to reach its target.

Write a function:

int solution(int X, int Y, int D);

that, given three integers X, Y and D, returns the minimal number of jumps from position X to a position equal to or greater than Y.

For example, given:
X = 10
Y = 85
D = 30

the function should return 3, because the frog will be positioned as follows:

after the first jump, at position 10 + 30 = 40
after the second jump, at position 10 + 30 + 30 = 70
after the third jump, at position 10 + 30 + 30 + 30 = 100

Write an efficient algorithm for the following assumptions:

X, Y and D are integers within the range [1..1,000,000,000];
X = Y.



*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Frogjmp(int X, int Y, int D)
{
	if ((X <= 0) | (Y <= 0) | (D <= 0))
		return 0;
	
	int differenceXY = (Y - X);
	int division = (differenceXY / D);

	if ((differenceXY%D) == 0)
	{
		return division;
	}		
	else
	{
		division++;
		return division;
	}
	
}

void main()
{
	
	int X;
	int Y;
	int D;
	int result = 0;

	cout << "Enter intial pos = ";
	cin >> X;
	cout << "Enter Final pos = ";
	cin >> Y;
	cout << "Enter jump = ";
	cin >> D;

	result = Frogjmp(X,Y,D);

	cout << "number of jumps = " << result << endl;
	system("PAUSE");
}