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

        int Min()
        {
            int min=A[0];
            for(int i=0; i<size; i++)
            {
                if(A[i]<min)
                    min=A[i];
            }
            return min;
        }

        void Create2(int h, int l)
        {
            int *H;
            H=new int[h+1];
            for(int i=0; i<h+2; i++)
                H[A[i]]++;
            
            for(int i=l; i<h+2; i++)
                if(H[i]==0)
                    cout<<"Element is "<<i;
        }
};

int main()
{
    Array A;
    A.create();
    int mx=A.Max();
    int mn=A.Min();
    A.Create2(mx, mn);

    return 0;
}