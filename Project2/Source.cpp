//#include <iostream>
//using namespace std;
//void reck(int a, int b) {
//	for (int i = 0; i < a; i++) {
//		for (int j = 0; j < b; j++) {
//			cout << "*";
//		}
//		cout << endl;
//	}
//}
//int main() {
//	int a, b;
//	cin >> a >> b;
//	reck(a, b);
// return 0;
//}

//#include <iostream>
//using namespace std;
//int factorial(int n) {
//	int f = 1;
//	for (int i = 1; i <= n; i++) {
//		f *= i;
//	}
//	cout << f;
//	return f;
//}
//int main() {
//	int n;
//	cin >> n;
//	factorial(n);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//bool number(int num) {
//
//	if (num < 2)
//		return false;
//
//	for (int i = 2; i < num; i++)
//	{
//		if (num % i == 0)
//			return false;
//	}
//	return true;
//}
//int main() {
//	int num;
//	cin >> num;
//	
//	if (number(num))
//		cout << "Gut";
//	else {
//		cout << "No";
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int cube(int num) {
//	return num * num * num;
//}
//int main() {
//	int num;
//	cin >> num;
//	cout << cube(num);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int big(int num1, int num2) {
//	int bigest;
//	if (num1 > num2) {
//		bigest = num1;
//	}
//	else {
//		bigest = num2;
//	}
//	cout << bigest;
//	return bigest;
//}
//int main() {
//	int num1, num2;
//	cin >> num1 >> num2;
//	big(num1, num2);
//	return 0;
//}

//#include <iostream>
//using namespace std;
//void numbers(int arr[], int size) {
//	int min = arr[0];
//	int max = arr[0];
//	int index_min = 0;
//	int index_max = 0;
//	for (int i = 0; i < size; i++) {
//		if (arr[i] < min) {
//			min = arr[i];
//			index_min = i;
//		}
//		else if(arr[i]>max){
//			max = arr[i];
//			index_max = i;
//		}
//	}
//	cout << "Minimum: " << min << " " << index_min << endl << "Maximum: " << max << " " << index_max;
//}
//int main() {
//	int arr[5] = { 2,7,3,1,9 };
//	numbers(arr, 5);
//	return 0;
//}


//#include <iostream>
//using namespace std;
//void fun(int arr[], int size) {
//	for (int i = 0; i < size / 2; i++)
//	{
//		int temp = arr[i];
//		arr[i] = arr[size - 1 - i];
//		arr[size - 1 - i] = temp;
//	}
//	for (int i = 0; i < size; i++)
//	{
//		cout << arr[i] << " ";
//	}
//}
//int main() {
//	int arr[5];
//	for (int i = 0; i < 5; i++) {
//		arr[i] = i + 1;
//	}
//	fun(arr, 5);
//	return 0;
//}