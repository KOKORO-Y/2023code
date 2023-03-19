//#include <iostream>
//#include <algorithm>
//using namespace std;
//const int N = 1e5 + 10;
//int m, x, y;
//string str[3];
//int flag[3][N];
//bool bfs(int fx, int fy, int nx, int ny) {
//    if (nx == 3 && ny == y) return true;
//    if (nx <= 0 || nx > 2 || ny <= 0 || ny > m) return false;
//    if (flag[nx][ny] == 1) return false;
//    flag[nx][ny] = 1;
//    //cout << nx << " " << ny << endl;
//    if (str[nx][ny] == 'I') {
//        if (fx == nx)
//            return bfs(nx, ny, nx, ny + (ny - fy));
//        else
//            return bfs(nx, ny, nx + (nx - fx), ny);
//    }
//    else {
//        if (fy == ny)
//            return bfs(nx, ny, nx, ny - 1) || bfs(nx, ny, nx, ny + 1);
//        else
//            return bfs(nx, ny, nx + 1, ny) || bfs(nx, ny, nx - 1, ny);
//    }
//    flag[nx][ny] = 0;
//}
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    int T;
//    cin >> T;
//    while (T--) {
//        cin >> m >> x >> y;
//        for (int i = 1; i <= m; i++) {
//            flag[1][i] = 0;
//            flag[2][i] = 0;
//        }
//        for (int i = 1; i <= 2; i++) {
//            cin >> str[i];
//            str[i] = " " + str[i];
//        }
//        if (bfs(0, x, 1, x))
//            cout << "YES" << endl;
//        else
//            cout << "NO" << endl;
//    }
//}
//
