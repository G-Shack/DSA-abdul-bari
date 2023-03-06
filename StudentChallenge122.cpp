//Finding multiple missing elements in an array!
#include<iostream>
using namespace std;

class Array
{
    private:
        int *A;
        int size;
    
    public:
        Array()
        {
            A=new int[10];
            size=10;
        }
        ~Array()
        {
            delete []A;
        }
        void create()
        {
            cout<<"Enter the size of array ";
            cin>>size;
            A=new int[size];

            for(int i=0; i<size; i++)
            {
                cout<<"Enter element "<<i<<" ";
                cin>>A[i];
            }
        }
        void findMultMiss()
        {
            int h,l,i;
            int n=size;
            int diff;
            
            l=diff=A[0];
            h=A[size-1];

            for(i=0; i<n; i++)
            {
                if(A[i]-i!=diff)
                    while(diff<A[i]-i)
                    {
                        cout<<"Missing number is "<<diff+i;
                        diff++;
                    }
            }
        }
    
};

int main()
{
    Array A;
    A.create();
    A.findMultMiss();
    return 0;
}