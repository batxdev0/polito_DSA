#include <stdio.h>
#include "Queue.h"


void BFS(int G[][7], int start, int n) {

    int i = start;
    struct Queue q;
    int visited[7] = {0};

    printf("%d",i);
    visited[i] = 1;
    enqueue(i);

    while(!isempty(q)){
        
        i = dequeue();
        for(j = 1; j<n; j++) {
            if(G[i][j] == 1 && visited[j] == 0) {
                printf("%d", j);
                visited [j] = 1;
                enqueue(j);
            }
        }
    }

}

int main() {


    BFS(G,1,7);


    int G[7][7] =  {{0,0,0,0,0,0,0},
                    {0,0,1,1,0,0,0},
                    {0,1,0,0,1,0,0},
                    {0,1,0,0,1,0,0},
                    {0,0,1,1,0,1,1},
                    {0,0,0,0,1,0,0},
                    {0,0,0,0,1,0,0}};
}