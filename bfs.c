#include<stdio.h>
#define MAX 10
bfs(int [][],int [],int);
dfs(int[][],int[],int);

void main()
{
int adj[MAX][MAX];
int vis[MAX][MAX]={0},i,j;
printf("Enter the adjacency matrix");
for(i=0;i<MAX;i++){
for(j=0;j<MAX;j++){
scanf("%d",&adj[i][j]);
}
}
for(i=0;i<MAX;i++){
for(j=0;j<MAX;j++){
printf("%d \t",adj[i][j]);
}
printf("\n")
}

printf("----------BFS---------\n");
bfs(adj,vis,0);
printf("----------DFS---------\n");
dfs(adj,vis,0);
}


void bfs(int adj[][MAX],int vis[],int start){
int q[MAX],rear=-1,front=-1,i;
q[+rear]=start;
vis[start]=1;
while(rear!=front){
statr=q[++front];
if(start==4){
printf("5\t");
}
else{
printf("%d \t",start );
for(i=0;i<MAX;i++){
if(adj[start][i]==1 && vis[i]==0){
q[++rear]=i;
vis[i]=1;
}
}
}
}
}
dfs(int adj[][MAX],int vis[],int start){
int stack[MAX];
int top=-1,i;
printf("%d-",start);
vis[start]=1;
stack[++top]=start;
while(top!=-1){
start=stack[top];
for(i=0;i<MAX;i++){
if(adj[start][i] && vis[i]==0){
stack[++top]=i;
printf("%d-",i);
vis[i]=1;
break;
}
}
if(i==MAX){
top--;
}
}
}


