//1
//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string students[5], temp;
//    for (int i = 0; i < 5; i++) {
//        cin >> students[i];
//    }
//
//    for (int i = 0; i < 4; i++) {
//        for (int j = i + 1; j < 5; j++) {
//            if (students[i] > students[j]) {
//                temp = students[i];
//                students[i] = students[j];
//                students[j] = temp;
//            }
//        }
//    }
//    for (int i = 0; i < 5; i++) {
//        cout << students[i] << endl;
//    }
//
//    return 0;
//}


//2
//#include <iostream>
//using namespace std;
//
//bool Array(int* a, int n, int x) {
//    for (int i = 0; i < n; i++)
//        if (a[i] == x) return true;
//    return false;
//}
//
//int main() {
//    int ra, ca, rb, cb, rc, cc;
//
//    cin >> ra >> ca;
//    int* A = new int[ra * ca];
//
//    cin >> rb >> cb;
//    int* B = new int[rb * cb];
//
//    cin >> rc >> cc;
//    int* C = new int[rc * cc];
//
//    for (int i = 0; i < ra * ca; i++) 
//        cin >> A[i];
//    for (int i = 0; i < rb * cb; i++) 
//        cin >> B[i];
//    for (int i = 0; i < rc * cc; i++) 
//        cin >> C[i];
//
//    int res1[1000], res2[1000], res3[1000];
//    int k1 = 0, k2 = 0, k3 = 0;
//
//    for (int i = 0; i < ra * ca; i++) {
//        int x = A[i];
//
//        if (Array(B, rb * cb, x) && Array(C, rc * cc, x))
//            res1[k1++] = x;
//
//        int count = 0;
//        for (int j = 0; j < ra * ca; j++) 
//            if (A[j] == x)
//                count++;
//        for (int j = 0; j < rb * cb; j++) 
//            if (B[j] == x) 
//                count++;
//        for (int j = 0; j < rc * cc; j++) 
//            if (C[j] == x) 
//                count++;
//
//        if (count == 1)
//            res2[k2++] = x;
//
//        if (Array(C, rc * cc, x))
//            res3[k3++] = x;
//    }
//
//    for (int i = 0; i < k1; i++) 
//        cout << res1[i] << " ";
//    cout << endl;
//
//    for (int i = 0; i < k2; i++)
//        cout << res2[i] << " ";
//    cout << endl;
//
//    for (int i = 0; i < k3; i++)
//        cout << res3[i] << " ";
//    cout << endl;
//
//    return 0;
//}