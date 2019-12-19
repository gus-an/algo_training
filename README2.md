1. `std::array`는 항상 참조로 전달하자.
- 함수로 전달될 때, 컴파일러가 복사본을 만드는 것을 방지

1. ```cpp
   for(const auto& element: array)
   ```
   - `&`: 참조형으로 값을 복사하지 않음. 그리고 바꿀 수 있음.
   - `const`: 읽기 전용으로 참조하기 위함.

1. ```cpp
   void printLength(const array<int, 5>& myArray) {
       cout << myArray.size();
   }

   int main() {
       array<int,5> myArray = {1,2,3,4,5};
       printLength(myArray);
   }
   ```
   - `array` 타입은 함수에 전달될 때, 포인터 형으로 변환되지 않기 때문에 `size()` 호출 가능

1. ```cpp
   int sumArray(int array[]) { // array is a pointer
       int sum = 0;
       for(const auto& number : array) // error ! cannot know size of array
          sum += number;
       return sum; 
   }
   int main (){
       int array[5] = {1,2,3,4,5};
       cout << sumArray(array); // array decays into pointer
   }
   ```
   - 포인터로 변환된 배열에서 Range-based for 루프 사용 불가
   - 동적 배열은 같은 이유로 Range-based for 루프 사용 불가

1. ```cpp
   #include<algorithm>
   using namespace std;
   sort(myArray.begin(), myArray.end()); // sort array forwards
   sort(myArray.rbegin(), myArray.rend()); // sort array backwards

1. ```cpp
   int value(5)
   int main(){
       int value = 7;
       value++; // 지역변수 
       ::value--; // 전역변수
   }
   ```
   - `::` : 전역변수를 가르킨다