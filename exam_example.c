ö#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// sağa fons
// bir alt fonks


int evacuation_routes(int **map, int r, int c, int max_time,int *n_routes) {
    //possible errors
    if(r<=0 || c<=0) return exit(-1);
    if(max_time <= 0) return exit(-1);

    *n_routes = 0;

}


int evacuation_routes_r(int **map, int r, int c, int max_time,int *n_routes){
    evacuation_routes(int **map, int r, int c, int max_time,int *n_routes);

    for(int i)


}



int main() {

    int map[3][4] = {{2,3,1,4},{1,0,2,1},{3,2,1,2}};

    for(int i = 0; i<3; i++) {
        for(int j = 0; j<4;j++) {
            printf("%d",map[i][j]);
        }
    }


    return 0;
}