#include<iostream>
using namespace std;

int main()
{
    int P, N, i, dif, c=0;
    cin >> P;
    cin >> N;
    int pipes[N];
    for(i=0; i<N; i++)
        cin >> pipes[i];
    for(i=0; i<N-1; i++){
        if(pipes[i] > pipes[i+1])
            dif = pipes[i]-pipes[i+1];
        else
            dif = pipes[i+1] - pipes[i];
        if(dif <= P)
            c++;
    }
    if(c == N-1)
        cout << "YOU WIN\n";
    else
        cout << "GAME OVER\n";
    return 0;
}
