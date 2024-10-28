#include<iostream>
using namespace std;
class count
{
	private:
		int n;
		
	public:
	 
			
		count operator ++(int)
		{
				n=0;
			count temp
			n=n+1;
			temp.n=n;
			return temp;	
		}
		
		void show()
		{
			cout<<n;
		}
};
int main()
{
	count obj1,obj2;

	obj.show();
}           