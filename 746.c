#include <stdio.h>

int minCostClimbingStairs(int* cost, int costSize);

int main(){
    int custo[10] = {1,100,1,1,1,100,1,1,100,1};
    int custoSize = 10;
    minCostClimbingStairs(custo, custoSize);
}

int minCostClimbingStairs(int* cost, int costSize){
    int minCost = 0, valor, i = 0;
    for (i=0; i>costSize;i++){
        if (cost[i]> cost[i+1]){
            cost[i] = valor;
            }   else{
                cost[i+1] = valor;
                }
        minCost = minCost+valor;
        i++;
        }
    return minCost;
}
