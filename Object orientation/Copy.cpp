#include <iostream>

using namespace std;

// 생성자
// 기본생성자, 인자를 받는 생성자, 복사 생성자, 이동 생성자
// 복사생성자 자신의 타입을 인자로 받는 생성자


class DynamicArray {
private:
   int _size;   // 동적배열의 사이즈
   int* _parr; // 동적배열의 주소값

public:
   DynamicArray(int size)
      : _size(size)
   {
      cout << "DynamicArray 생성자" << endl;
      _parr = new int[_size];   // 동적배열을 할당
   }

   // 복사 생성자
   DynamicArray(DynamicArray& value) {
      _size = value._size;

      _parr = new int[_size];   // 자기 만의 동적배열을 할당

      // 인자로 들어온 DynamicArray 객체의 동적배열의 내용을 복사한다.
      for (int i = 0; i < _size; i++) {
         _parr[i] = value._parr[i];
      }
   }


   ~DynamicArray() {
      cout << "~DynamicArray 소멸자" << endl;
      delete[] _parr;   // 동적배열 반납처리
   }

   int GetIndex(int index) {
      return _parr[index];
   }

   void SetIndex(int index, int value) {
      _parr[index] = value;
   };

   int GetSize() {
      return _size;
   }
};

class Complex {
private:
   int _real;
   int _imaginary;

public:
   Complex() {}

   Complex(int real, int imaginary)   // 인자를 받는 생성자
      : _real(real), _imaginary(imaginary)
   {
      cout << "Complex의 인자를 받는 생성자" << endl;
   }

   // 복사생성자
   Complex(Complex& value) {
      cout << "Complex 복사생성자" << endl;
      _real = value._real;
      _imaginary = value._imaginary;
   }

   void Info() {
      cout << _real << showpos << _imaginary << "i";
      cout << noshowpos;
   }
};



int main() {
   Complex a(10, 10);

   Complex b(a);   // 복사생성자.
               // C++에서는 복사생성자가 없으면 컴파일러가 자동으로
               // 복사 생성자를 만들어서 넣어 줍니다.

   a.Info();
   cout << endl;
   b.Info();
   cout << endl << endl;

   {
      // DynamicArray
      DynamicArray array(10);

      for (int i = 0; i < array.GetSize(); i++) {
         array.SetIndex(i, i);
      }

      for (int i = 0; i < array.GetSize(); i++) {
         cout << "arary[" << i << "] = " << array.GetIndex(i) << endl;
      }


      DynamicArray array2(array);

      for (int i = 0; i < array2.GetSize(); i++) {
         array2.SetIndex(i, i * 2);
      }

      cout << endl;
      for (int i = 0; i < array.GetSize(); i++) {
         cout << "arary[" << i << "] = " << array.GetIndex(i) << endl;
      }

      cout << endl;
      for (int i = 0; i < array2.GetSize(); i++) {
         cout << "arary2[" << i << "] = " << array2.GetIndex(i) << endl;
      }

   }






   cout << "프로그램 종료" << endl;
   return 0;
}