#include <iostream>

using namespace std;

int get_dis2(int x1, int y1, int x2, int y2) {
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

int x1,y1,d1;
int x2,y2,d2;

int main() {
    cin>>x1>>y1>>d1;
    cin>>x2>>y2>>d2;
    int dis2 = (d1+d2)*(d1+d2);
    int dis2_ = (d1-d2)*(d1-d2);
    int dis_bet_cen = get_dis2(x1,y1,x2,y2);
    if (dis_bet_cen > dis2) {
        cout<<"not overlapped";
        return 0;
    }
    if (dis_bet_cen < dis2 && dis_bet_cen < dis2_) {
        cout<<"not overlapped";
        return 0;
    }
    if (dis_bet_cen < dis2 and dis_bet_cen != dis2_) {
        cout<<"overlapped";
        return 0;
    }
    cout<<"tangent";
    return 0;
}