#include <stdio.h>
#include <malloc.h>

int **matrix;
int *visited;

void create_matrix(int n)
{
    matrix = (int**)calloc(n+1, sizeof(int*));
    for(int i=0; i<n; i++)
    {
        matrix[i] = (int*)calloc(n+1,sizeof(int));
    }
    visited = (int*)calloc(n+1, sizeof(int));
}

void get_info(int info_count)
{
    int a,b;
    for(int i=0; i<info_count; i++)
    {  
        scanf("%d %d", &a,&b);
        matrix[a][b] = 1;
        matrix[b][a] = 1; 
    }
}

void dfs(int t, int n)
{
    visited[t]=1;
    printf("Current node : %d\n", t);
    for(int i=1; i<=n; i++)
    {
        if(visited[i] || !matrix[t][i])continue;
        dfs(i, n);
    }
}

int main()
{
    int node_size;
    scanf("%d",&node_size);
    create_matrix(node_size);

    int info_count;
    scanf("%d",&info_count);
    get_info(info_count);
    
    int start_node;
    scanf("%d",&start_node);
    dfs(start_node, node_size);
}