//Write a C program for Adjacency Matrix
#include<stdio.h>
#include<conio.h>
#include<math.h>
int a[10][10];
main()
{
	int i,j,m,n,x,y;
	printf("\nEnter the number of nodes: ");
	scanf("%d",&n);
	printf("\nEnter the number of edges: ");
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		printf("\nEnter the nodes for the edge %d: ",i);
		scanf("%d%d",&x,&y);
		a[x][y]=1;
	}
	printf("\n\nThe required adjacency matrix is: \n");
	for(i=1;i<=n;i++)
	{
		printf("\tN[%d]",i);
	}
	for(i=1;i<=n;i++)
	{
		printf("\n  N[%d] ",i);
		for(j=1;j<=n;j++)
		{
			printf("\t%d",a[i][j]);
		}
	}
	getch();
}
