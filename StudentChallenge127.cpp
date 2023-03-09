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
        
        int Max()
        {
            int max=A[0];
            for(int i=0; i<size; i++)
            {
                if(A[i]>max)
                    max=A[i];
            }
            return max;
        }

        void Create2(int h)
        {
            int *H;
            int k=10;
            H=new int[h];
            
            for(int i=0; i<h+1; i++)
            {
                H[A[i]]++;
            }
            
            for(int i=0; i<h+1; i++)
            {
                cout<<i<<" "<<H[i]<<"\n";
            }
        }
};

int main()
{
    Array A;
    A.create();
    int mx=A.Max();
    A.Create2(mx);

    return 0;
}