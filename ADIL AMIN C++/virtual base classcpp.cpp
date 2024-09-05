#include<iostream>
using namespace std;
/* student -->test
student-->sports
test-->resilt
sports-->resuult*/
class student{
	protected:
		int rollno;
		public:
			void set_number(int a){
				rollno =a;
			}
			void print_number(void){
				cout<<"your rollno is"<<rollno<<endl;
			}
	};
			class test: virtual public student{
				protected:
					float maths,physics;
					public:
						void set_marks(float m1,float m2){
						
						maths =m1;
						physics =m2;
		}
		void print_marks(void){
			cout<<"you reslut is here:"<<"maths:"<<maths<<"physics"<<physics<<endl;
			
		}
};
class sports:virtual public student{
	protected:
		float score;
		public:
			void set_score(float sc){
				score =sc;
				
				}
				void print_score(void){
					cout<<"your pt score is:"<<score<<endl;
				
			}
};
class result:public test,public sports{
	private:
		float total;
		public:
			void display(void){
				total=maths + physics + score;
				print_number();
				print_marks();
				print_score();
				cout<<"your total score is:"<<total<<endl;
			}
};
int main(){
/*	student s2;
	sports s1;
	test t1;
	
	s2.print_number();
	t1 .print_marks();
	s1.print_score();*/
	result adil;
	adil.set_number(344);
	adil.set_marks(78.9,99.5);
	adil.set_score(9);
	adil.display();
}