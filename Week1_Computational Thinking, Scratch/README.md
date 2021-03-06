# 🚀 1주차 - 컴퓨팅 사고

컴퓨팅 사고 : 문제를 해결하기 위한 접근 방법 중의 하나이다.
  * 계산(computation)을 이용하여 문제를 분해하고 어떻게 해결할 것인지를 파악하는 것
  * 컴퓨팅 사고는 크게 4가지의 주요한 과정으로 나누어 볼 수 있다.
    1. 분해(Decomposition)  
       * 문제를 나누어 각각의 조각을 확인하거나, 어떻게 문제를 나누면 될 지 생각하는 과정
    2. 패턴 파악(Pattern Recognition)
       * 어떠한 예측을 위해 각각 조각의 유사한 점과 차이점을 찾아내는 과정
    3. 패턴의 일반화(Pattern Generalization) - 추상화(abstraction)
       * 패턴들을 만들어낸 원리를 찾아내는 과정
    4. 알고리즘 설계(Algorithm Design)
       * 유사한 문제들을 해결하기 위한 절차적인 명령(과정)을 만드는 것이다.
  * 컴퓨터 과학과 컴퓨팅사고력의 차이점
    * 컴퓨터 과학 : 계산(computation)이론과 컴퓨터 응용에 관한 학문 분야이다.
    * 컴퓨팅 사고 : 문제를 해결해나가는 방법으로, 해결을 위한 큰 그림을 그리기 위한 과정이자 추상적으로 사고하는 방법이다.

## [👨‍🏫 강의](https://www.boostcourse.org/cs112/joinLectures/41485)
### 1️⃣ 2진법
#### 강의 요약
* 컴퓨터 과학 : 문제 해결에 대한 학문이다.
  * 문제 해결은 입력(input)을 전달받아 출력(output)을 만들어내는 과정. 그 중간에 있는 과정이 바로 컴퓨터 과학이다.
* 2진법 : 0과 1로만 표현하는 것을 말한다.
  * 전기를 켜고 끄는 방식으로 작동하는 컴퓨터에게 적합한 방법이다.
* 비트 : 2진법에서 하나의 자릿수를 표현하는 단위
  * binary digit의 줄임말
* 비트열 : 여러 숫자 조합을 컴퓨터에 나타내기 위해 비트열을 사용한다.
  * byte는 8개의 비트가 모여 만들어진 것이다.
* 트랜지스터 : 컴퓨터 속에 있는 아주 작은 스위치로, 이를 이용해서 정보를 표현하고 값을 저장한다.
#### 생각해보기
* 💁‍♂ : 5를 2진법으로 바꿔보면 어떻게 될까요?
  * 🙋‍♀️ : 101
#### 배운점
> 컴퓨터에서 2진법을 쓰는 것은 알았지만 왜 쓰는 지는 정확히 알지 못 했었다.  
> 전기를 켜고 끄는 방식으로 작동하기 때문에 컴퓨터에게 적합하다! 오호~ 하면서 이해가 됐다.

### 2️⃣ 정보의 표현
#### 강의 요약
* ASCII(아스키코드) : 문자를 숫자로 표현 할 수 있도록 정해진 약속(표준)으로, 미국정보교환표준부호이다.
  * 8개의 비트를 사용하여 총 128개의 부호로 정의되어 있다.
  * 예를 들어 'A'는 10진수 기준으로 65, 'B'는 66으로 되어있다.
* Unicode(유니코드) : 문자를 숫자로 표현 할 수 있도록 정해진 약속(표준)으로, 아스키코드보다 더 많은 비트를 사용한다.
  * 8이나 16, 24, 혹은 32비트까지도 사용한다.
  * 다양한 문자들의 표현이 가능 하도록 지원하여 이모지까지 표현할 수 있게 해준다.
  * 예를 들어 '😂'은 10진법으로 128,514이고 2진법으로는 11111011000000010 이다.
* RGB(Red, Green, Blue) : 픽셀은 세 가지 색을 다른 비율로 조합하여 특정한 색을 갖게 되는데, 이 숫자들을 표현하는 방식을 말한다.
  * 예를 들어 Red 72, Green 73, Blue 33을 섞게 되면 노락색이 된다.
  * 노란색의 커다란 이미지는 72 73 33 정의되는 무수히 많은 픽셀들의 RGB코드로 표현할 수 있다.
* 영상도 이미지를 연속적으로 이어 붙여놓은 것이기 떄문에 숫자로 표현이 가능하다.
* 음악도 각 음표를 숫자로 표현할 수 있다.
#### 생각해보기
* 💁‍♂ : CS50을 2진법으로 표현해보세요.
  * 🙋‍♀️ : C, S, 5, 0 모두 결국 모양이기 때문에 아스키 코드에 의해서 각자의 모양을 나타냅니다.  
    C : 1000011  
    S : 1010011  
    5 : 0110101  
    0 : 0110000
#### 배운점
> 이미지를 RGB방식을 사용하여 나타내는 것은 알았는데, 음악은 컴퓨터로 나타내는 방식은 생각해보지 않았던 것 같다.  
> 결국 컴퓨터로 나타낼 수 있으니 2진법으로 나타낼 수 있구나!  
>  
> 10진수를 기준으로 같은 72, 73, 33이라는 숫자들도 문자로 나타낸다면 'HI!',  
> 그래픽 프로그램에서는 노란색으로 표현할 수 있다는 것을 직접 예를 들어 보니 새삼 컴퓨터가 여러 표현을 할 수 있는 게 신기했다. (특히 음악이 신기!)


### 3️⃣ 알고리즘
#### 강의 요약
* 알고리즘 : 입력(input)에서 받은 자료를 출력(output)형태로 만드는 처리 과정을 뜻한다.
  * 입력값을 출력값의 형태로 바꾸기 위해 어떤 명령들이 수행되어야 하는지에 대한 규칙들의 순서적 나열이다.
  * 같은 출력값이라도 알고리즘에 따라 출력을 하기까지의 시간이 다를 수 있다.
  * 알고리즘을 평가할 때는 정확성도 중요하지만 효율성도 중요하다.
    * 효율성 : 작업을 완료하기까지 얼마나 시간과 노력을 덜 들일 수 있는지에 대한 것
* 의사코드(Pseudo code) : 언어(한국어, 영어 등)생각을 간결하게 정리한 코드와 비슷한 구문을 말한다.
  * 알고리즘을 의사코드 방식으로 보다 명료하게 정리할 수 있다.
  * 의사코드는 필요한 행동이나 조건을 잘 설정하여 컴퓨터가 수행해야 하는 일을 절차적으로 파악할 수 있게 도와준다.
#### 생각해보기
* 💁‍♂ : 친구와 1부터 100까지 숫자 중 1가지 숫자를 맞추는 스무고개 게임을 하려고 합니다. 이 때 사용할 알고리즘을 의사코드로 표현하면 어떻게 될까요?
  * 🙋‍♀️ :
    ```
    만약 출제자라면
        출제 숫자를 정한다.
        20번 동안
            만약 도전자가 임의 숫자를 질문하면
                만약 임의 숫자와 출제 숫자가 같다면
                    정답이라고 말한다
                    도전자 승
                    게임 끝
                아니라면
                    아니라고 말한다
            만약 도전자가 임의 숫자보다 크냐고 질문하면
                만약 맞다면
                    맞다고 말한다
                아니라면
                    아니라고 말한다
            만약 도전자가 임의 숫자보다 작냐고 질문하면
                만약 맞다면
                    맞다고 말한다
                아니라면
                    아니라고 말한다
         출제자 승
        게임 끝

    만약 도전자라면
        20번 동안
            질문할 숫자 중 임의 숫자를 골라 질문한다
            만약 임의 숫자를 질문하면
                만약 출제자의 답변이 정답이라면
                    도전자 승
                    게임 끝
               아니라면
                   질문할 숫자 중 임의 숫자를 골라 다시 질문한다.
            만약 임의 숫자보다 크냐고 질문하면
                만약 출제자의 답변이 맞다고 말한다면
                    현재 숫자 이하 숫자들을 질문에서 제외한다
                    현재 숫자 초과 숫자로 질문한다
                아니라면
                    현재 숫자 초과 숫자들을 질문에서 제외한다
                    현재 숫자 이하의 숫자로 질문한다
           만약 임의 숫자보다 작냐고 질문하면
                만약 출제자의 답변이 맞다고 말한다면
                    현재 숫자 이상 숫자들을 질문에서 제외한다
                    현재 숫자 미만 숫자로 질문한다
                아니라면
                    현재 숫자 미만 숫자들을 질문에서 제외한다
                    현재 숫자 이상 숫자로 질문한다
         출제자 승
        게임끝
    ```
#### 배운점
> 의사코드! 자료구조 수업시간에 이해하기 쉽도록 의사코드로 스택을 공부했던 기억이 난다.  
> 정확한 명칭은 까먹었는데 의사코드! 이젠 기억해야겠다.  
> 복잡한 알고리즘일수록 의사코드를 활용하면 프로그래밍 전에 설계 차원에서 소통하기 좋을 것 같다는 생각이 들었다.

### 4️⃣ 스크래치: 기초
#### 강의 요약
* 스크래치 : MIT의 미디어 랩에서 만든 그래픽 언어이다.
  * 퍼즐 조각처럼 보이는 블럭들을 끌어 놓는 방식으로 연결시켜 컴퓨터가 무엇을 할지 단계적으로 프로그래밍 할 수 있는 언어이다.
  * 웹 기반 언어로, [scratch.mit.edu](https://scratch.mit.edu) 에서 프로그래밍 할 수 있다.
* 스크래치 블록 : 블록을 옮겨 붙여서 스크래치의 알고리즘을 만들 수 있다.
  * 블록의 종류에 따라서 프로그램이 수행하는 일의 종류가 달라진다.
* 복잡하고 긴 알고리즘도 결국에 입력이 들어오고 알고리즘(혹은 함수)이 실행된 후 출력이 나오는 개념이다.
  * '안녕, 위승빈'이라고 말하는 알고리즘을 예를 들어보자.
    1. '이름이 뭐에요?'라는 입력이 들어오고 기다리는 함수가 실행된 후 이름 변수가 출력된다.
    2. '안녕, '와 이름 변수 두가지 입력이 들어오고 결합하는 함수가 실행된 후 '안녕, 위승빈'이 출력된다.
    3. '안녕, 위승빈'이라는 입력이 들어오고 말하는 함수가 실행된 후 '안녕, 위승빈'이 최종 출력된다.
#### 배운점
> 스크래치를 직접 체험해본 적은 없었는데 직접해보니 간단하게 프로그래밍을 알기에 좋은 언어인 것 같다.  
> 또, 웹 기반의 그래픽 언어라는 점이 매우 신기했다!  
>  
> 알고리즘을 입력과 출력의 개념으로 하나하나 풀어서 설명을 들으니 알고리즘 동작 방식에 이해가 더 쉽게 됐던 것 같다!

### 5️⃣ 스크래치: 심화
#### 강의 요약
* 변수 : 변수를 사용하면 정보를 저장하고 다시 재사용할 수 있다.
* 루프 : 루프 안의 알고리즘을 반복한다.
* 조건문 : '참' 또는 '거짓' 깂을 가지는 불리언 변수를 사용하여 조건을 체크한다.
#### 배운점
> 강의에서 나온 스크래치를 이용한 게임들을 보면, 항상 기초를 잘 알고 있으면 활용을 해 무엇이든 만들어 낼 수 있을 것 같다!

## [💡 퀴즈](https://www.boostcourse.org/cs112/joinLectures/41493)
1. 이진법 - 숫자 10을 2진법으로 표현하기 위해서 최소 몇 개의 비트가 필요할까요?  
   > 4비트
2. 정보의 표현 - 링크(https://ko.wikipedia.org/wiki/ASCII) 하단의 아스키 코드를 사용하여 \[edwith](소문자)을 10진수로 표현해 보세요.  
   > 101 100 119 105 116 104
3. 알고리즘 - 총 512페이지의 전화번호부에서 '이펭수'은 64페이지에 있습니다. 책의 절반씩을 찾아보는 두 번째 알고리즘을 사용한다면, '이펭수'을 찾기 위해 페이지를 몇 번 찾아봐야 할까요?
   > 3번
4. 2진법과 10진법 (1) - 10진법으로 표현된 '14'를 2진법으로 표현하면 어떻게 될까요?
   > 1110
5. 2진법과 10진법 (2) - 2진법으로 표현된 [1011]을 10진법으로 표현하면 어떻게 될까요?
   > 11
6. 정보 표현의 기본 장치 - 다음 문장에서 괄호 안에 들어갈 말로 적절한 것은 무엇인가요? 
   ```
   컴퓨터에는 (       )라고 불리는 굉장히 많은 스위치가 있고 on/off 상태를 통해 0과 1을 표현합니다
   ```
   > 트랜지스터
7. 알고리즘의 표현 - 컴퓨터가 수행할 작업을 프로그램 언어가 아니라 사람이 사용하는 언어로 알고리즘의 논리적 절차를 작성한 코드를 무엇이라고 하나요?
   > 의사 코드 (Pseudo code)
8. 스크래치 - 다음 중 스크래치에서 블록을 통해 구현할 수 없는 알고리즘 요소는 무엇인가요?
   > 컴파일
9. 스크래치의 변수와 조건문 - 초록색 깃발을 눌러 아래 스크래치 프로그램을 실행을 시킨 후, muted가 false인 상태에서 스페이스 키를 누르면 muted의 값이 어떻게 변할까요? (퀴즈 링크 통해 이미지 확인)
   > true
10. 전화번호부 검색 의사 코드 - 가나다 순으로 정렬된 전화번호부에서 '이펭수'를 찾으려 합니다. 이때 먼저 전화번호부의 가운데를 펴고 '이펭수'를 찾은 후, 이름이 없다면 앞 페이지나 뒷 페이지의 절반에 대해 똑같은 작업을 계속 반복하고자 합니다. 이를 묘사한 아래 의사 코드에서 10번 줄 빈 칸에 들어갈 말로 올바른 것은 무엇인가요?
    ```
    1 전화번호부를 집어 든다
    2 전화번호부의 중간을 편다
    3 페이지를 본다
    4 만약 '이펭수'가 페이지에 있으면
    5     '이펭수'에게 전화한다
    6 그렇지 않고 만약 '이펭수'이 앞 페이지에 있으면
    7     앞 페이지의 절반을 편다
    8     3번째 줄부터 다시 실행한다
    9 그렇지 않고 만약 '이펭수'가 뒷 페이지에 있으면
    10    (           )
    11     3번째 줄부터 다시 실행한다
    12 그렇지 않으면
    13     그만둔다
    ```
    > 뒷 페이지의 절반을 편다

## 🎞 회고
> 의욕이 넘쳐서 그런지 강의가 너무 재밌었다. *1주차 강의는 머리속으로는 알고 있지만 가려웠던 부분을 강의의 예시등을 통해 긁어준 느낌이랄까?*  
> 코칭 스터디 신청 시에 강의를 들어야 해서 이미 들었지만, 다시 들어도 괜찮은 강의였다.  
>  
> 미션에 대해서는 우선 아쉽게도 미션 해결과정을 기록으로 남길 수 없다고 부스트코스 내부에서 얘기가 되었다고 한다.  
> 미션 공유를 못 하는 점이 매우 아쉽다...😢  
>  
> 미션을 진행했을 때 내 생각을 정리해본다면, '아직 멀었다'이다. 아직 이해할 것도 한참 남고 내가 알고 있는 건 새 발의 피다...  
> 이번 *코칭 스터디에 열심히 참여해서 컴퓨터 과학 지식을 조금이라도 늘려야겠다고 생각했다.*  
>  
> 개인 미션 시에 현실 세계에서 굉장히 쉽고 **간단한 문제라고 생각하는 것도 컴퓨터가 이해하도록 설계하는 건 생각보다 쉽지 않은 일**이라는 것을 깨닳았다.  
> 어떤 문제를 보고 단번에 '뭐야, 쉽잖아?'라고 생각했다간 큰코다치게 될거다. 간단한 문제도 컴퓨터가 이해하도록 직접 설계하려고 해보면 생각보다 많은 정보를 컴퓨터에게 알려줘야 해서 간단한 문제도 복잡해질 수 있기 때문이다.  
> 그래서 함께 느꼈던 생각이지만 여담으로, 종종 드는 생각인데 인간의 뇌에 비해 컴퓨터는 정말 바보같다. 🖥 = 정말 정직한 바보...  
>  
> 개인 미션이 두가지 있었는데, 하나는 스크래치를 이용한 미션이 있었다. 스크래치... 그동안 얕봐서 미안해...  
> 스크래치는 그래픽 언어이다 보니까 간단한 비주얼 프로그램을 만들기에 좋은데, 스크래치를 잘 이해하고 그걸 이용해 알고리즘을 짠다면 여러가지 프로그램이 나올 수 있다.  
> '뭐, 별 거 있겠어?' 하고 호기롭게 시작했는데 이게 웬걸! 당연한 말이지만 스크래치도 하나의 언어이기 때문에 스크래치 이해도가 높으면 빠르고 간편하게 개발이 가능하다.
> '스크래치도 공부가 필요하구나...' 하면서 강의 내용을 참고하며 내가 생각하는 나름의 프로그램을 만들고 있었다.  
> 그런데 노력의 결과물이 다 날라가 버렸다... OMG! 로그인을 안 하고 계속 만들다가 프로젝트를 저장하는 줄 알고 파일을 새로 만들기 버튼을 눌러버려 작업이 다 날라갔지 뭐야..?  
> 힘이 다 빠져버렸다... *남은 건 눈물을 머금은 저장의 습관화 교훈이었다...😭😭*  
>  
> 팀 미션에는 3가지가 있었다. 그 중에 가장 흥미로웠던 문제는 강의 내용 중에 흥미로워 했던 내용과 연관된 문제였는데,
> 직접 조사해보니 생각보다 더 흥미로웠다. '바보 컴퓨터 너를 이해시킬려면 이런 과정을 거쳐야 하구나..?' 그런 생각..?  
> 미션 내용을 공유할 수 없어 이정도로만 표현할 수 있다는 게 참 아쉽다.  
>  
> 코칭 스터디의 첫 주라서 팀원들이 잘 따라올까 걱정도 했지만 팀원 모두가 의욕 만땅에 열심히 참여해주니 감사할 따름이다.  
> 아주 순조롭게 마무리된 첫 주! 팀원들과 모두 마지막 주차까지 순조롭게 마무리 됐으면 하는 바람이다.🙏
