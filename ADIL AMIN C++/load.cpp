#include<iostream>
using namespace std;
class stud
{
	public:
	int a1,a2;
	stud display()
	{
		stud s;
		s.a1 = 40;
		s.a2 = 30;
	}
};
int main()
{
	stud s1;
	s1=s1.display();
	cout<<s1.a1<<endl<<s1.a2;
	return 0;
}