#include<iostream.>
#include<cmath>
using namespace std;
int FirstMenu();
int SecondMenu();
int ThirdMenu();
int mainMenu();
struct node
{
    int data;
    struct node* next;
};
class stack
{
    struct node* top ; 
public:
        stack()
        {
            top = NULL;
        }
        bool push(int item)
        {
            struct node* record = new node();
            record->data = item;
            record->next=top;
            top = record;
            return true;
        }
        int pop()
        {
            if (top == NULL)
            {
                cout<<"Stack Underflow"<<endl;
                return 0;
            }
            else 
            {
                struct node* temp;
                temp = top;
                top =top->next;
                int item = top->data;
                delete temp;
                return item;
            }
        }
};
int main()
{
    int no = 0; 
    stack menus = stack();
    while(no != -1)
    {
        if(no == 0)
        {
            menus.push(0);
            int noo = mainMenu();
             if(noo == 1 || noo == -1)
            {
                no = noo;
            }
        }
        else if (no == 1)
        {
            menus.push(1);
            int noo = FirstMenu();
             if(noo == 2)
            {
                no = noo;
                no = menus.pop();
            }
            else if(noo == 0)
            {
                no = menus.pop();
            }
        }
        else if (no == 2)
        {
            menus.push(2);
           int  noo = SecondMenu();
            if(noo == 3)
            {
                no = noo;
                no = menus.pop();
            }
            else if(noo == 0)
            {
                no = menus.pop();
            }
            
        }
        else if (no == 3)
        {
            menus.push(3);
            int noo = ThirdMenu();
            if(noo == 0)
            {
                no = noo;
                no = menus.pop();
            }
        }
    }
 
}
int mainMenu()
{
    cout<<">>>>>>>>> Main Menu <<<<<<<<<<<<"<<endl;
    cout<<" 1 : Go to the first  Menu "<<endl;
    cout<<"-1 : back "<<endl;
    int no =0;
    cout<<" Enter the no "<<endl;
    cin>>no;
    return no ;
}
int FirstMenu()
{
    cout<<">>>>>>>>> First Menu <<<<<<<<<<<<"<<endl;
    cout<<"2 : Go to the second  Menu "<<endl;
    cout<<"0 : back "<<endl;
    int no ;
    cout<<" Enter the no "<<endl;
    cin>>no;
    return no;
}
int SecondMenu()
{
    cout<<">>>>>>>>> Second Menu <<<<<<<<<<<<"<<endl;
    cout<<"3 : Go to the third  Menu "<<endl;
    cout<<"0 : back "<<endl;
    int no ;
    cout<<" Enter the no "<<endl;
    cin>>no;
    return no;
}
int ThirdMenu()
{
    cout<<">>>>>>>>> Third Menu <<<<<<<<<<<<"<<endl;
    cout<<"0 : back "<<endl;
    int no ;
    cout<<" Enter the no "<<endl;
    cin>>no;
    return no;
}