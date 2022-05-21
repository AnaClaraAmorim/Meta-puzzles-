#include <bits/stdc++.h>
using namespace std;


string getWrongAnswers(int N, string C) {
  for(int i=0; i< N; i++){
    if(C[i] == 'A')
      C[i] = 'B';
    else
      C[i] = 'A';
  }
  return C;
}
