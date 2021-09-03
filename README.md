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



