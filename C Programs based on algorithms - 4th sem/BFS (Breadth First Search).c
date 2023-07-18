#include<stdio.h>
#include<stdlib.h>

int a[20][20], q[20], visited[20], n, i, j, f = 0, r = -1;

void bfs(int v)
{
  for(i = 1; i <= n; i++)
    if(a[v][i] && !visited[i])
      q[++r] = i;

   if(f <= r) 
   { 
     visited[q[f]] = 1;
      bfs(q[f++]);
   }
}

int main() 
{
int v;
printf("Enter the Number of Vertices : ");
scanf("%d",&n);
  for(i=1; i <= n; i++) 
  {
    q[i] = 0;
    visited[i] = 0;
  }
  printf("\nEnter Graph Data in Adjacent Matrix Form : \n");
  for(i=1; i<=n; i++)
   {
     for(j=1;j<=n;j++) 
	 {
       scanf("%d", &a[i][j]);
     }
    }
printf("Enter the Starting Vertex : ");
scanf("%d", &v);
bfs(v);
printf("\nThe Node which are Reachable are : ");
  for(i=1; i <= n; i++) 
  {
    if(visited[i])
      printf(" %d", i);
   else
   {
      printf("\nBFS is not possible. All nodes are not Reachable!");
      break;
    }
  }
  return 0;
}
