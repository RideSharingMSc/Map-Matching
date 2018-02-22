

#include "geohash.h"

#include <string.h>
#include <stdio.h>


int main() {
    
    // Decoder
    
    GeoCoord coord = geohash_decode("tc0yfx7eedsv");
    printf("%f", coord.latitude);;//Looping 5 times to print out [0],[1],[2],[3],[4]
    printf("%f", coord.longitude);;//Looping 5 times to print out [0],[1],[2],[3],[4]
    printf("%s", "\n");
    printf("%s", "\n");
    
    coord = geohash_decode("tc0yfx7eqeb8");
    printf("%f", coord.latitude);;//Looping 5 times to print out [0],[1],[2],[3],[4]
    printf("%f", coord.longitude);;//Looping 5 times to print out [0],[1],[2],[3],[4]
    printf("%s", "\n");
    printf("%s", "\n");
    
    
    // Encoder
    
    char* hash = geohash_encode(6.851927, 79.919637, 5);
    for(int i =0 ; i < strlen(hash) ; i ++ ){
        printf("%c", hash[i]);;//Looping 5 times to print out [0],[1],[2],[3],[4]
    }
    
    printf("%s", "\n");
    
    hash = geohash_encode(6.851927, 79.919637, 5);
    for(int i =0 ; i < strlen(hash) ; i ++ ){
        printf("%c", hash[i]);;//Looping 5 times to print out [0],[1],[2],[3],[4]
    }
    
    printf("%s", "\n");
    printf("%s", "\n");
    
    // Neighbors
    
    char** neighbors = geohash_neighbors("tc0yfx7eedsv");
    for(int i =0 ; i < 8 ; i ++ ){
        printf("%s", neighbors[i]);;//Looping 5 times to print out [0],[1],[2],[3],[4]
        printf("%s", "\n");
    }
    printf("%s", "\n");
    
    
    return 0;
}







