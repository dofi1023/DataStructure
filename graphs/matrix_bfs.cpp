#include <stdio.h>
#include <malloc.h>
#include <queue>

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

void bfs(int t, int n)
{
    visited[t]=1;
    std::queue<int>q;
    q.push(t);
    while(!q.empty())
    {  
        int cur_node = q.front();
        q.pop();
        printf("Current node : %d\n", cur_node);
        for(int i=1; i<=n; i++)
        {
            if(visited[i] || !matrix[cur_node][i])continue;
            q.push(i);
            visited[i]=1;
        }
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
    bfs(start_node, node_size);
}