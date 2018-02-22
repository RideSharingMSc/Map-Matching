
#include <string.h>
#include <stdio.h>

extern "C"
{
    #include "geohash.h"
    char* geohash_encode(double, double, int );
    char** geohash_neighbors(char*);
    GeoCoord geohash_decode(char*);
}

using namespace std;

int main() {
    
    char* hash = geohash_encode(6.872467, 79.883479, 10);

    for(int i =0 ; i < strlen(hash) ; i ++ ){
        printf("%c", hash[i]);
    }
    printf("%s", "\n");
    printf("%s", "\n");
    
    
    char** neighbors = geohash_neighbors(hash);
    for(int i =0 ; i < 8 ; i ++ ){
        GeoCoord coord = geohash_decode(neighbors[i]);
        printf("%s", "12345");
        printf("%s", ",");
        printf("%f", coord.longitude);
        printf("%s", ",");
        printf("%f", coord.latitude);
        printf("%s", "\n");
    }

    return 0;
}







