#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

double getHitProbability(int R, int C, vector<vector<int>> G) {
  int sum = 0;
  float prob;
  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      sum += G[i][j];
    }
  }
  prob = (float)sum/(R*C);
  return prob;
}

/*
Sample test case #1
R = 2
C = 3
G = 0 0 1
    1 0 1
Expected Return Value = 0.50000000
Sample test case #2
R = 2
C = 2
G = 1 1
    1 1
Expected Return Value = 1.00000000*/