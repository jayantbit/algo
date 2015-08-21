#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<queue>
#include<stack>
#include<bitset>
#include<map>
#include<set>
#include<list>
#include<climits>
#include<algorithm>
#include<utility>
#include<cstdlib>
#include<cctype>
#include<queue>
#include<sstream>
using namespace std;
typedef long long int ull;
typedef pair<int,int> pr;
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x); 
#define INF INT_MAX
#define mx 100003
#define MOD 1000000007

int arr[mx]={0},len;

void fn(int pivot)
{
  int p1=-1,p2=len-1,i,j,ele=arr[pivot];
  cout<<ele<<endl;
  for(i=0;i<len;i++)
  {
     for(j=0;j<len;j++)
     cout<<arr[j]<<" ";
     cout<<p1<<" "<<p2;
     cout<<endl;
  
     if(arr[i]<=ele)
     {
       p1++;
       swap(arr[p1],arr[i]);
     }

  }
    for(i=0;i<len;i++)
    {
      if(arr[i]==ele)
        {
          p2=i;
          break;
        }
    }
    //cout<<p1<<" "<<p2<<endl;
    swap(arr[p1],arr[p2]);
    for(j=0;j<len;j++)
     cout<<arr[j]<<" ";
     cout<<endl;
}


int main()
{
    cin>>len;
    int i,j;
    for(i=0;i<len;i++)
      cin>>arr[i];
    cin>>j;
    fn(j);
}