#include<iostream.>
#include<cmath>
using namespace std;
int MainMenu ();
class Set
{
	public:
	int set[20] , i ;
public:
	Set()
	{
		set [20] = 0 ;
	}
	void CreateSet() // this function is to create the set as a array
	{
		int no ;
		cout<<"how many no you want to enter in set .."<<endl;
		cin>>no;
		for (i = 0; i < no; i++)
		{
			cout<<"Enter the no >> "<<endl;
			cin>>set[i]; // put data in the array
		}
	}
	void Insert() // this function is to insert the more elements in the set 
	{
		int no ;
		cout<<"how many no you want to insert in set .."<<endl;
		cin>>no;
		for (int x = 0; x < no; x++)
		{
			cout<<"Enter the no >> "<<endl;
			cin>> this->set[ this->i ]; // i is liye use kiya hai take pehle jahan per end huei thi set wahan se hi dubara enter ho new no 
			i++ ;
		}
	}
	void Remove() // this function is used to remove the mentioned no from the set 
	{
		int no ;
		cout<<"Which no do you want to remove from set.."<<endl;
		cin>>no;
		for(int x = 0 ; x < this->i ; x++ )
		{
			if (no == this->set[x])
			{
				for(int y = x ; y < (this->i - 1) ; y++)
				{
					this->set[y] = this->set[y+1];
				}
				this->i--;
			}
		}
	}
	bool IsMember()// this function is used to check that either this no is present or not ,,if present than return true else false
	{
		int no , count =0 ; 
		cout<<"Which no do you want to check in set .."<<endl;
		cin>>no;
		for (int x = 0; x < this->i; x++)
		{
			if(no == this->set[x])
			{
				return true;
			}
			else
			{
				count++;
			} 
		}
		if (count == this->i -1 )
		{
			return false;
		}
	}
	void Union(Set s) // this function take union of the two sets
	{
		int status = 0 , w;
		cout<< "Union of Two Arrays >>"<<endl;
		for(int x = 0 ; x < this->i ; x++ )
		{
			cout<<this->set[x]<<" ";// first display the all no of the first array
		}
		for( w = 0 ; w < s.i ; w++ )
		{
			status = 0 ;
			for(int y = 0 ; y <this->i ; y++ )
			{
				if(this->set[y] == s.set[w])
				{
					status = 1;
					break;
				}			
			}
			if (status !=1)// then this is used for only that no's  have to display from the second set that is not present in the second array
			{
				cout<<s.set[w]<<" ";
			}
		}
		cout<<endl;
		
	}
	void Intersection(Set s)// this function is used for taking intersection of the two arrays or sets
	{
		int status ; 
		cout<<"Intersection of the two arrays >>"<<endl;
		for(int x = 0 ; x < this->i ; x++)
		{
			status = 0 ;
			for(int y = 0 ; y < s.i ; y++)
			{
				if(this->set[x] == s.set[y]) // this checks all the elements of the first array is present in the second array one by one  
				{
					status = 1;
					break; // when elements are match then this loop breaks
				}
			}
			if (status == 1)// if inner loop break the this condition true
			{
				cout<<set[x]<<" "; // this display the match elements of the two array mean common elements
			}
		}
		cout<<endl;
	}
	bool IsSubset(Set s) // this function check that first array elements are present in the second one then the first is subset of second one either not
	{
		int count = 0; 
		int size = this->i; // size of the first array
		cout<<"Subset of the two arrays >>"<<endl;
		for(int x = 0 ; x < this->i ; x++)
		{
			for(int y = 0 ; y < s.i ; y++)
			{
				if(this->set[x] == s.set[y])
				{
					count++; // when match the first array elemnt with the second one then count 
					break;// and the break the inner loop for checking the the further elements of the first array with the second array
				}
			}
		}
		if (count == size ) // if size of first array match with the count it mean all the elements of the first array are present int the second one 
		{
			return true;// then return true that is subset of second one
		}
		else if (count != size )
		{
			return false;	// either false
		}
	}
	
};
int main()
{
	int count = 1 ;
	int size = 10;
	Set array[size]; // class data type array for storing more than one sets in it and than applying operation on it
	while(true)
	{
		int op = MainMenu();
		if(op == 1)
		{
			array[count].CreateSet();
			count++ ;  	
		}
		else if (op == 2)
		{
			int setNo;
			cout<<"in which set you want to insert the no .."<<endl;
			cin>>setNo;
			array[setNo].Insert();
		}
		else if(op == 3)
		{
			int setNo;
			cout<<"in which set you want to insert the no .."<<endl;
			cin>>setNo;
			array[setNo].Remove();
		}
		else if (op == 4)
		{
			int setNo , n;
			cout<<"in which set you want to insert the no .."<<endl;
			cin>>setNo; // set no shows that on which set you want to apply the operation
			n=array[setNo].IsMember();
			if (n == 1)
			{
				cout<<"Yes this no is present"<<endl;
			}
			else if (n == 0)
			{
				cout<<"No this no is not present"<<endl;
			}
		}
		else if(op == 5)
		{
			int n , m ;
			cout<<"Enter the first set no "<<endl;
			cin>>n;
			cout<<"Enter the second set no "<<endl;
			cin>>m; 
			array[n].Union(array[m]); // this is like a c.add(c1) function
		}
		else if (op == 6)
		{
			int n , m ;
			cout<<"Enter the first set no "<<endl;
			cin>>n;
			cout<<"Enter the second set no "<<endl;
			cin>>m; 
			array[n].Intersection(array[m]);
		}
		else if(op == 7)
		{
			int n , m;
			cout<<"Enter the first set no "<<endl;
			cin>>n;
			cout<<"Enter the second set no "<<endl;
			cin>>m; 
			bool no = array[n].IsSubset(array[m]);
			if (no == true)
			{
				cout<<"Yes the first set is subset of second one.."<<endl;
			}
			else if (no == false)
			{
				cout<<"No the first set is no subset of second one.."<<endl;
			}
		}
		else if (op == 8)
		{
			break;
		}
	}
}

int MainMenu()
{
	cout<<" 1. Create the set ..  "<<endl;
	cout<<" 2. Insert in the set ..   "<<endl;
	cout<<" 3. Remove from the set..    "<<endl;
	cout<<" 4. Is the no is Member of the set..   "<<endl;
	cout<<" 5. Union of the two sets..    "<<endl;
	cout<<" 6. Intersection of the two sets..  "<<endl;
	cout<<" 7. Is Subset of the set..   "<<endl;
	cout<<" 8. Exit..  "<<endl;
	cout<<" Enter the no of the options.."<<endl;
	int no;
	cin>>no;
	return no;
}
