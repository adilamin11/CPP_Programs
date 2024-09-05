 #include <iostream>
using namespace std;

class area
{
	int l,w;
	public:
		
	void accept()
	{
		cout<<"\n\nEnter Ractangle Length : ";
		cin>>l;
		cout<<"Enter Ractangle Width : ";
		cin>>w;
	}
	
	int display()
	{
		return (l*w);
	}
};

inline int rac(int x, int y)
{
	return (x*y);
}

int main()
{
	area s;
	int m,n;
	
 	cout<<"Enter Ractangle Length : ";
	cin>>m;
	cout<<"Enter Ractangle Width : ";
	cin>>n;
	
	s.accept();
		
	cout<<"\nArea of Ractangle is : "<<rac(m,n);
	cout<<"\n\nArea of Ractangle is : "<<s.display();
	
	return 0;
	
}

