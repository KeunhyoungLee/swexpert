#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    for (int T = 1; T <= t; T++) {
        int N;
        cin >> N;
        double answer=0;
        vector<pair<double, int>> payment;
        for (int i = 0; i < N; i++) {
            double p;
            int x;
            cin >> p;
            cin >> x;
            payment.push_back(make_pair(p, x));
        }
 
        for (int i = 0; i < payment.size(); i++) {
            answer += payment[i].first*payment[i].second;
        }
 
        printf("#%d %0.6f", T, answer);
    }
    return 0;
}
