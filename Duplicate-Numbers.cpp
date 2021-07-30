#include <iostream>
using namespace std;
int d[50],count=0;

int dup(int x)
{
    int i,c=0;
    for(i=0;i<count;i++)
    if(x==d[i]) c++;
    if(c==0)
     return 1;
    else
     return 0;
}

int main()
{
    int a[100],x,n,i,j,c=0;
    M:
    cout<<"\n\n\n1.Enter Array Elements\n2.Duplicate Elements\n3.exit\nEnter your choice :";
    cin>>x;
    switch(x)
    {
        case 1:
                cout<<"\nEnter array size : ";  cin>>n;
                cout<<"\nEnter array integer array elements : ";
                for(i=0;i<n;i++) cin>>a[i]; j=999;
                goto M;
        case 2: 
                if(j!=999) 
				{
					cout<<"\nEnter array elements first (Choose choice-1)."; goto M;
				}
                for(i=0;i<n-1;i++)
                {
                    c=0;
                    for(j=i+1;j<n;j++)
                    {
                        if((a[i]==a[j])&&(dup(a[i])==1)) c++;
                    }
                    if(c>0)  
                    {
                        cout<<endl<<a[i]<<" is repeated "<<c+1<<" times.";
                        d[count++]=a[i];
                    }    
                }
                cout<<"\nHence, there are "<<count<<" numbers that are duplicated.";
                goto M;
        case 3:
        	    cout<<"\nThank you for using this program.";
                exit(0);
        default :
		          cout<<"\nWrong choice !!! (hoose choice from 1-4)"; goto M;        
    }
    return 0;
}
