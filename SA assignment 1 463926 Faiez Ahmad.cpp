//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter a number: ";
//    cin >> num;
//
//    for (int i = 1; i <= num; i++) {
//        if (num % i == 0) {
//            cout << i << " ";
//        }
//    }
//
//    return 0;
//}

//
//
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num;
//    cout << "Enter an integer: ";
//    cin >> num;
//
//    int result = (num > 10 && num <= 20) ? 1 : 0;
//    cout << result << endl;
//
//    return 0;
//}








//
//#include <iostream>
//
//using namespace std;
//
//bool isPrime(int num) {
//    if (num <= 1) {
//        return false;
//    }
//
//    for (int i = 2; i * i <= num; i++) {
//        if (num % i == 0) {
//            return false;
//        }
//    }
//
//    return true;
//}
//
//int main() {
//    int N;
//    cout << "Enter a positive integer: ";
//    cin >> N;
//
//    int largestPrime = 0;
//    for (int i = N - 1; i >= 2; i--) {
//        if (isPrime(i)) {
//            largestPrime = i;
//            break;
//        }
//    }
//
//    cout << "The largest prime number less than " << N << " is " << largestPrime << endl;
//
//    return 0;
//}











//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
//    string str1, str2;
//    cout << "Enter first string: ";
//    cin >> str1;
//
//    cout << "Enter second string: ";
//    cin >> str2;
//
//    if (str1 == str2) {
//        cout << "Both strings are equal" << endl;
//
//        rotate(str1.begin(), str1.begin() + 1, str1.end());
//        cout << "Rotated string: " << str1 << endl;
//    } else {
//        cout << "Strings are not equal" << endl;
//    }
//
//    return 0;
//}











//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int dividend = 100;
//    int divisor = 20;
//
//    int quotient = 0;
//    while (dividend >= divisor) {
//        dividend -= divisor;
//        quotient++;
//    }
//
//    cout << "Quotient: " << quotient << endl;
//
//    return 0;
//}











//#include <iostream>
//#include <unordered_set>
//
//using namespace std;
//
//string removeDuplicates(string str) {
//    unordered_set<char> seen;
//    string result;
//
//    for (char ch : str) {
//        if (seen.find(ch) == seen.end()) {
//            result += ch;
//            seen.insert(ch);
//        }
//    }
//
//    return result;
//}
//
//int main() {
//    string str;
//    cout << "Enter a string: ";
//    cin >> str;
//
//    string result = removeDuplicates(str);
//    cout << "Result: " << result << endl;
//
//    return 0;
//}







//#include <iostream>
//using namespace std;
//
//int main(){
//	int array[5]={1, 2, 3, 4, 5};
//	int array2[5];
//	int count, num=2, count2=5;
//		for(count=0; count<5; count++){
//		
//		array2[count]=array[count];
//	}
//	
//	while(num!= -1){
//		cout<<"Enter Input into Array, Enter -1 to Quit!"<<endl;
//		cin>>num;
//		if(num==-1){
//			break;
//		}
//		else{
//		
//		array2[count2]=num;
//		count2++;
//	}
//	}
//	
//	for(count=0; count<=count2-1; count++){
//	
//		cout<<array2[count]<<" ";
//	}
//
//
//}









//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//bool findTriplet(int arr[], int n, int sum) {
//    // Sort the array
//    sort(arr, arr + n);
//
//    for (int i = 0; i < n - 2; i++) {
//        int left = i + 1;
//        int right = n - 1;
//
//        while (left < right) {
//            int currentSum = arr[i] + arr[left] + arr[right];
//
//            if (currentSum == sum) {
//                return true;
//            } else if (currentSum < sum) {
//                left++;
//            } else {
//                right--;
//            }
//        }
//    }
//
//    return false;
//}
//
//int main() {
//    int arr[] = {1, 2, 3, 4, 5};
//    int n = sizeof(arr) / sizeof(arr[0]);
//    int sum = 10;
//
//    if (findTriplet(arr, n, sum)) {
//        cout << "Triplet found" << endl;
//    } else {
//        cout << "Triplet not found" << endl;
//    }
//
//    return 0;
//}






//#include <iostream>
//
//using namespace std;
//
//void bubbleSort(int arr[], int n) {
//    for (int i = 0; i < n; i++) {
//        bool swapped = false;
//        for (int j = 0; j < n - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//                swapped = true;
//            }
//        }
//
//        if (!swapped) {
//            break;
//        }
//    }
//}
//
//int main() {
//    int arr[] = {6, 4, 3, 2, 5, 1};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    bubbleSort(arr, n);
//
//    cout << "Sorted array: ";
//    for (int i = 0; i < n; i++) {
//        cout << arr[i] << " ";
//    }
//
//    return 0;
}
