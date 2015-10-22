
# include <iostream>
using namespace std;
class Move
{
public:
	Move(double a=0,double b=0)
	{ x=a; y=b;}
	const void showmove()
	{
		cout<<x<<endl;
		cout<<y<<endl;
	}
	Move add(const Move & m)
	{  x=x + m.x;
	   y=y+m.y;
	   return *this;
	}
	void reset(double a = 0, double b = 0);

private:
	double x;
    double y;
};
void main()
{Move(1,4);
Move z ;
Move v;
z.add(v);
}



