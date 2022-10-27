// To implement Dijkstra’s algorithm to find shortest path in the graph.

#include<stdio.h>
//#define infinity 999

void dij(int n,int v,int cost[10][10],int dist[])
{
 int i,u,count,w,visited[10],min;
 for(i=1;i<=n;i++)
 visited[i]=0,dist[i]=cost[v][i];
 count=1;
 while(count<=n)
 {
  min=99;
  for(w=1;w<=n;w++)
   if(dist[w]<min &&! visited[w])
    min=dist[w], u=w;
  visited[u]=1;
  count++;
  for (w=1; w<=n; w++)
   if((dist[u]+cost[u][w] <dist[w]) &&! visited[w])
    dist[w]=dist[u]+cost[u][w];
 }
}

void main ()
{
 int n,v,i,j,cost[10][10],dist[10];
 printf("\nEnter the number of nodes:\n");
 scanf("%d",&n);
 printf("\nEnter the cost matrix:\n");
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
  {
   scanf("%d",&cost[i][j]);
   if(cost[i][j]==0)
    cost[i][j] =999;
  }
 printf("\nEnter the source matrix:\n");
 scanf("%d",&v);
 dij(n,v,cost,dist);
 printf("\nShortest path:\n");
 for(i=1;i<=n;i++)
  if(i!=v)
   printf("%d->%d=%d\t",v,i,dist[i]);

}

