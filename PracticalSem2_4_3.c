#include <stdio.h>
int a[20][20],n, i, j,f=0,r=-1;
void bfs(int v);
void main() {
    int v;
    printf("Enter number of vertices:\n");
    scanf("%d", &n);
    printf("Enter the adjacency matrix (1/0):\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("\nfrom %d to %d:", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nShow the adjacency matrix:\n");
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter the value of the starting vertex:\n");
    scanf("%d", &v);
    bfs(v);
}

void bfs(int v) {
	int q[20]={0};
    int visited[20] ={0};
    q[++r] = v;
    visited[v] = 1;

    while (f <= r) {
        v = q[f++];
        printf("V%d ",v);
        for (i = 1; i <= n; i++)
		{
            if (a[v][i]==1 && visited[i]==0)
			{
                q[++r] = i;
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

/*Enter number of vertices:
4
Enter the adjacency matrix (1/0):

from 1 to 1:0

from 1 to 2:1

from 1 to 3:1

from 1 to 4:0

from 2 to 1:0

from 2 to 2:0

from 2 to 3:1

from 2 to 4:1

from 3 to 1:0

from 3 to 2:0

from 3 to 3:0

from 3 to 4:1

from 4 to 1:0

from 4 to 2:0

from 4 to 3:0

from 4 to 4:0

Show the adjacency matrix:
0 1 1 0
0 0 1 1
0 0 0 1
0 0 0 0

Enter the value of the starting vertex:
1
V1 V2 V3 V4

--------------------------------*/
