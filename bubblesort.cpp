#include <iostream>

using namespace std;

void BubbleSort(int b[], int s);

int BinarySearch(int c[], int ky);

int main(void)
{
    int a[100],d[100], n=0,key=0;

    BubbleSort(a,n);

    cout<<"Position is "<<BinarySearch(d,key);

    return 0;
}

void BubbleSort(int b[], int s)
{
    int n,i,j,a[100],d[100],temp =0;
    cout<<"Size\n";
    cin>>n;
    cout<<"Enter elements\n";
    for ( i =0 ; i < n; i++)
    {
        cin>>a[i];
    }
    //Sorting
    for ( i = 0 ; i< n-1 ; i++)
    {
        for ( j = 0 ; j < n-i ; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1] = temp;
            }
        }
    }
    cout<<"New array is \n";
    for( i =0 ; i <n; i++)
        cout<<a[i]<<endl;
    for( i =0 ; i <n; i++)
        d[i]=a[i];
}


int BinarySearch(int c[], int ky)
{
    int d[100], key=0,i=0,n=0;
    cout<<" Enter key \n";
    cin >> key;
    cout<<"Enter size\n";
    cin >> n;
    for (i =0 ; i < n ; i++)
    {
        if(d[i]==key)
            return i;
    }
}
