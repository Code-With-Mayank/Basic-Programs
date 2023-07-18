#include<stdio.h>
#define MAX 30
#define infinity 9999

int a,b,u,v,n,i,j,ne=1;
int visited[MAX]={0},min,mincost=0,cost[MAX][MAX];

void main()
{
	printf("\n Enter the number of nodes for finding MST: ");
	scanf("%d",&n);
	printf("\n Enter the adjacency matrix for which You want to find MST: \n");
	for(i=1;i<=n;i++)
 	 for(j=1;j<=n;j++)
	   {
	   	scanf("%d",&cost[i][j]);
	  	if(cost[i][j]==0)
	  	   cost[i][j]=infinity;
	    }
 
     visited[1]=1;
     printf("\n");
	  
    while(ne<n)
	  {
	  	for(i=1,min=infinity;i<=n;i++)
	  	 for(j=1;j<=n;j++)
	  	  if(cost[i][j]<min && visited[i]!=0)
	  	  {
	  	  	min=cost[i][j];
	  	  	a=u=i;
	  	  	b=v=j;
			}
		  if(visited[u]==0 || visited[v]==0)
		  {
		  	printf("\n Edge %d:(%d,%d), Cost:%d",ne++,a,b,min);
		  	mincost+=min;
		  	visited[b]=1;
		  }
		  cost[a][b]=cost[b][a]=infinity;
	  }
	
	printf("\n\n Minimum Cost of the Spanning Tree is: %d",mincost);
}
