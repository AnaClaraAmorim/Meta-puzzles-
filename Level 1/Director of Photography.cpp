#include <bits/stdc++.h>
using namespace std;

// photographer and the actor is between XX and YY cells (inclusive)
// between the actor and the backdrop is also between XX and YY cells (inclusive)
int getArtisticPhotographCount(int N, string C, int X, int Y){

    long int count = 0;

    for (int i = 0; i < N - X; i++){
        long int cntPL = 0, cntBL = 0, cntPR = 0, cntBR = 0;
        if (C[i] == 'A'){
            for (int j = max((i - Y), 0); j <= i - X; j++){
                if (C[j] == 'P')
                    cntPL++;
                else if (C[j] == 'B')
                    cntBL++;
            }
            for (int j = i + X; j <= min(i + Y, N - 1); j++){
                if (C[j] == 'P')
                    cntPR++;
                else if (C[j] == 'B')
                    cntBR++;
            }
            count += (cntBR * cntPL) + (cntBL * cntPR);
        }
    }
    return count;
}


/*
Sample test case #1
N = 5
C = APABA
X = 1
Y = 2
Expected Return Value = 1
Sample test case #2
N = 5
C = APABA
X = 2
Y = 3
Expected Return Value = 0
Sample test case #3
N = 8
C = .PBAAP.B
X = 1
Y = 3
Expected Return Value = 3
*/