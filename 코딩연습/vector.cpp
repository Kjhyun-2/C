#include <cstdio>
#include <vector>
int b[500][500]={0,};
int sv[500]={0,};
using namespace std;
int main()
{
	freopen("input.txt","r",stdin);
	int a,i,j;
	int t=0,k;
	int x,y,n=0,n2=0;	
	vector<int> v1;
	vector<int> v2;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			scanf("%1d",&b[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<a;j++)
		{
			if(b[i][j]==1)
			{
				n=0;
				v1.push_back(i);
				v2.push_back(j);
				do{
					x = v1.back();
					y = v2.back();
					
					v1.pop_back();
					v2.pop_back();
					
					if(x+1<a && b[x+1][y]==1)
					{
						b[x+1][y] = 0;
						v1.push_back(x+1);
						v2.push_back(y);
						n++;
					}
					if(x-1>=0 && b[x-1][y]==1)
					{
						b[x-1][y] = 0;
						v1.push_back(x-1);
						v2.push_back(y);
						n++;
					}
					if(y-1>=0 && b[x][y-1]==1)
					{
						b[x][y-1] = 0;
						v1.push_back(x);
						v2.push_back(y-1);
						n++;
					}
					if(y+1<a && b[x][y+1]==1)
					{
						b[x][y+1] = 0;
						v1.push_back(x);
						v2.push_back(y+1);
						n++;
					}
					
					if(v1.size()==0 && v2.size()==0)
					{
						n2++;
						if(n==0)
						{
							n=1;
						}
						break;
					}
				}while(1);
				sv[t] = n;
				t++;
			}
		}
	}
	printf("%d\n",n2);
	for(i=0;i<t;i++)
	{
		for(j=0;j<t-1-i;j++)
		{
			k = sv[j+1];
			sv[j+1] = sv[j];
			sv[j] = k;
		}
	}
	for(i=0;i<t;i++)
	{
		printf("%d\n",sv[i]);
	}	
	
	return 0;
}
	
				
				
				
