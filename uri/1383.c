#include <stdio.h>
#include <stdlib.h>

char *sudoku(){
    int matriz[9][9];
    int i, j, k;
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for(i = 0; i < 9; i++){
        for(j = 0; j < 9; j++){
            for(k = i; k < 9; k++){
                if(matriz[i][j] == matriz[k][j]){
                    return "NAO";
                }
                if(matriz[i][j] == matriz[i][k]){
                    return "NAO";
                }                
            }
            if((i==0) || (i == 3) || (i == 6)){
                if ((j == 0)|| (j == 3) || (j== 6)){
                    if(matriz[i][j] == matriz[i+1][j+1]){
                        return "NAO";
                    } else if(matriz[i][j] == matriz[i+1][j+2]){
                        return "NAO";
                    } else if(matriz[i][j] == matriz[i+2][j+1]){
                        return "NAO";
                    } else if (matriz[i][j] == matriz[i+2][j+2]){
                        return "NAO";
                    }
                } else if ((j == 1)|| (j == 4) || (j== 7)){
                    if(matriz[i][j] == matriz[i+1][j-1]){
                        return "NAO";
                    } else if (matriz[i][j] == matriz[i+1][j+1]){
                        return "NAO";
                    } else if (matriz[i][j] == matriz[i+2][j-1]){
                        return "NAO";
                    } else if (matriz[i][j] == matriz[i+2][j+1]){
                        return "NAO";
                    }
                }
            }
            if((i==1) || (i == 4) || (i == 7)){
                if ((j == 0)|| (j == 3) || (j== 6)){
                    if(matriz[i][j] == matriz[i+1][j+1]){
                        return "NAO";
                    } else if(matriz[i][j] == matriz[i+1][j+2]){
                        return "NAO";
                    }
                } else if ((j == 1)|| (j == 4) || (j== 7)){
                    if(matriz[i][j] == matriz[i+1][j-1]){
                        return "NAO";
                    } else if (matriz[i][j] == matriz[i+1][j+1]){
                        return "NAO";
                    }
                } 
            } 
        }
    }
    
}

int main(){
    int n, i;
    scanf("%d", &n);

    for(i = 0; i < n; i++){

    }
}