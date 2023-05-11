#include <iostream>
#include <math.h>
using namespace std;

int **matriz;

void ReadMatrix(int n){
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> matriz[i][j]; 
}

bool InMatrix(int i, int j, int n){
    return i >= 0 && j >= 0 && i < n && j < n;
}

int Greedy(int i, int j, int n) {
    cout << "Caminho: " << matriz[i][j] << endl;
    if(i == n-1 && j == n-1) return matriz[i][j];

    int max_i, max_j, max_value;
    max_i = max_j = max_value = 0;

    for(int row = i; row < i+2; row++){
        for(int col = j-1; col < j+2; col++){
            if((row == i) && (col == j)) continue;
            if (!InMatrix(row, col, n)) continue;
            if(matriz[row][col] > max_value){
                max_i = row;
                max_j = col;
                max_value = matriz[row][col];
            }
            else if(matriz[row][col] == max_value){
                double d1 = sqrt(pow(max_i-(n-1), 2) + pow(max_j-(n-1), 2));
                double d2 = sqrt(pow(row-(n-1), 2) + pow(col-(n-1), 2));
                if(d2 < d1) {
                    max_i = row;
                    max_j = col;
                }
            }
        }
    }
    if(max_value == 0){
        cout << "Sem saida" << endl;
        return matriz[i][j];
    }
    int aux = matriz[i][j];
    matriz[i][j] = 0;
    return aux+Greedy(max_i, max_j, n);
}

int main(){
    freopen("dataset/input.data", "r", stdin);

    int numeroMatrizes, dimensao;
    cin >> numeroMatrizes  >> dimensao;

    for(int i = 0; i < numeroMatrizes; i++){
        matriz = new int *[dimensao];
        for (int j = 0; j < dimensao; j++) {
            matriz[j] = new int[dimensao];
        }
        ReadMatrix(dimensao);
        cout << endl << "=====================" << endl << "<< Proxima matriz >>" << endl << Greedy(0, 0, dimensao) <<endl;
    }   
}
