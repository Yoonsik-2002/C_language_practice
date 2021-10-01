# C 언어 실습 활동
이번 1학기동안 배운 C 언어 내용을 복습 + 활용 해볼 것이다. 

**Chapter 07**

1. for 문
```c
for (int i = 1; i <= 10; i++)
{
printf("%3d", i);
}
```

2. 분기문

- break문
  - 반복내부에서 반복을 종료하려면 break문장을 사용한다.
  - 만일 반복문이 중첩되어 있다면, break를 포함하는 가장 근접한 내부반복을 종료하고
    반복문 다음 문장을 실행한다.
  - break는 반복문의 종료뿐만 아니라 switch 문의 종료에도 이용된다.
  

```c
for (   ;   ; )
{
...            break;
...
next;
```

```c
while ( ... )
{
...            break;
...
next;
```

```c
do
}
...            break;
...
} while ( ... );
next;
```

- continue문
  - 반복의 시작으로 이동하여 다음 반복을 실행하는 문장이다. 
  - 반복문 for문에서 continue를 만나면 증감 부분을 이동하여 다음 반복 실행을 계속한다.
  - 반복문 do while문에서 continue를 만나면 뒤쪽 조건문으로 이동하여 실행한다.
  - 반복문 while문에서 continue를 만나면 앞쪽 조건문으로 이동하여 실행한다.
  - continue 이후의 문장은 실행되지 않고 뛰어 넘어간다.


```c
for (int i = 1; i <= 10 ; i++)
{
  if (i % 4 == 0)  // 4로 나누어 떨어지면 continue -> 증감 부분으로 이동하여 다음반복 실행
    continue;
   printf("%3d", i);
}
```

3. 중첩된 반복문

반복문 내부에 반복문이 또 있는 구문을 중첩된 반복문(nested loop)이라 한다.

```c
for (m = 1; m <= 4; m++) 
{
  for (n = 1; n <= 3; n++)
  ...
}
```

**Chapter 08**
1. 포인터 변수와 선언 

- 포인터 변수의 개념과 선언
  - 포인터 변수는 주소값을 저장하는 변수이다.
    
    포인터 변수의 선언 방법은 다음과 같다.
    
    자료형 * 포인터 변수 이름
    ```c
    int *ptrint;        // int형 변수 ptrint의 주소값을 저장하는 포인터 : int *
    char *ptrchar;      // char형 변수 ptrchar의 주소값을 저장하는 포인터 : char *
    double *ptrdouble;  // double형 변수 ptrdouble의 주소값을 저장하는 포인터 : double *
    ```
    포인터 변수와 일반 변수의 주소 저장 
    ```c
    int data = 100;
    int *ptrint;     // * : ptrint가 가리키는 값(참조값)을 본다고 생각하면 편함. (100) *ptrint = 100, data = 100
    
    ptrint = &data;  // 포인터 변수 ptrint에 data의 주소값 저장 ptrint는 data(주소)를 가리키고 있다.
    ```
    
   - 포인터 변수선언과 주소값 대입
     
     ```c
     int data = 27;
	   int* ptrint; // 포인터 변수 선언

	   ptrint = &data; // ptrint는 data의 주소값을 가리키고 있는 포인터 변수.

	    // 변수명, 주소값, 저장값 출력

	   printf("변수명		주소값		저장값\n");
	   printf("-------------------------------------------\n");
	   printf("  data     %p  %8d\n", &data, data);
	   printf("ptrint     %p     %p\n", &ptrint, ptrint); // ptrint가 저장하고 있는 값 : data의 주소값(&data) = ptrint
     ```
    
- 간접연산자 *
	- 포인터 변수가 갖는 주소로 그 주소의 원래 변수(data)를 참조 할 수 있다.
	  
	  포인터 변수가 가리키고 있는 변수를 참조하려면 간접연산자 * 를 사용한다.
	    
	  ```c
	  int data = 100;
	  int* ptrint = &data;     // ptrint라는 변수에 data의 주소 저장
	  printf("간접참조 출력 %d\n", *ptrint);  // *ptrint 출력 (* : 가리키는 값을 봄 이라고 생각하면 편함 ex) *ptrint = ptrint가 가리키는 값을 본다 ptrint = &data *ptrint = 100)
	  
	  *ptrint = 200;  // ptrint가 가리키는 주소값(&data) 의 변수(100)를 참조, data의 저장값을 200으로 참조.
	  
	  
    
    
