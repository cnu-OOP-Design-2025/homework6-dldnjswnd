[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/4PEr2hNQ)
 # C++ 클래스 상속 실습 프로젝트

 이번 과제는 C++의 클래스 상속 개념을 실습하기 위한 과제입니다.
 Bird 클래스를 기반으로 Duck, Penguin, Eagle 클래스를 직접 구현하며 상속과 가상 함수, 소멸자 등의 개념을 익히게 됩니다.

 --

 ## 실습 목적

- 자식 클래스에서 메서드 오버라이딩 구현
- 가상 소멸자(virtual destructor)의 역할 이해


## 아래 클래스 다이어그램을 참고하여 자식 Class를 구현

```       
        +----------------------+
        |      Bird (abstract) |
        +----------------------+
        | species: string      |
        +----------------------+
        | +fly(): void         |
        | +swim(): void        |
        | +display(): void     |
        | +quack(): void       |
        | +cry(): void         |
        | +Bird():             |
        | +~Bird():            |
        +----------------------+
                   ▲
                   |
      ------------------------------
      |            |               |
+---------+  +------------+  +----------+
| Duck    |  | Penguin    |  | Eagle    |
+---------+  +------------+  +----------+
| +cry()  |  | +cry()     |  | +cry()   |
|         |  | +fly()     |  | +swim()  |
| +Duck() |  | +Penguin() |  | +Eagle() |
| +~Duck()|  | +~Penguin()|  | +~Eagle()|
+---------+  +------------+  +----------+
```


### Duck Class

- cry() 메서드: "Quake" 문자열을 출력
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Duck" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출

### Penguin Class
- cry() 메서드: "Squake" 문자열을 출력
- fly() 메서드: "This bird can't fly." 문자열을 출력
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Penguin" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출

### Eagle Class

- cry() 메서드: "Screech" 문자열을 출력
- swim() 메서드: "This bird can't swim." 문자열을 출력
- 생성자: 부모 클래스의 생성자를 호출하여 species 변수를 "Eagle" 문자열로 설정, cry() 메서드 호출
- 소멸자: cry() 메서드 호출


### 예상 출력
```
Duck has borned
Quack!
Penguin has borned
Squawk!
Eagle has borned
Screech!
----------------------
Bird #1:
Species: Duck
This bird can fly.
This bird can swim.
----------------------
Bird #2:
Species: Penguin
This bird can't fly.
This bird can swim.
----------------------
Bird #3:
Species: Eagle
This bird can fly.
This bird can't swim.
----------------------
Quack!
Duck has died
Squawk!
Penguin has died
Screech!
Eagle has died
```

### 생각해보기
- 생성자서 소멸자의 호출 순서가 다른 이유는 무엇일까요?
- Bird 클래스의 소멸자에서 virtual 키워드를 제거했을 때 어떤 문제가 발생할까요?


## 테스트 방법

모든 함수 구현 후, 아래 명령어를 통해 테스트를 실행하세요:

### Windows 사용자
```
.\test6.bat
```

### MacOS/Linux 사용자
```bash
/bin/bash test6.sh
```
