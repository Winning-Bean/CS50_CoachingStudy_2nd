# 🚀 4주차 - 알고리즘

## [👨‍🏫 강의](https://www.boostcourse.org/cs112/joinLectures/41488)
* 효율성
  * 작업을 완료하기까지 얼마나 시간과 노력을 덜 들일 수 있는지에 대한 척도이다.
### 1️⃣ 검색 알고리즘
#### 강의 요약
* 배열은 한 자료형의 여러 값들이 메모리상에 모여있는 구조이다.
  * 컴퓨터는 이 값들에 접근할 때 배열의 인덱스 하나하나를 접근한다.
  * 어떤 값이 배열 안에 속해 있는지 찾아 보기 위해서는 배열이 정렬되어 있는지 여부에 따라 선형 검색과 이진검색 방법을 사용할 수 있다.
* 선형 검색
  * 배열의 인덱스를 처음부터 끝까지 하나씩 증가시키면서 방문하여 그 값이 속하는지를 검사한다.
    ```
    For i from 0 to n–1

        If i'th element is 50

            Return true

    Return false
    ```
* 이진 검색
  * 배열이 정렬되어 있을 때 사용하는 방법이다.
  * 배열 중간 인덱스부터 시작하여 찾고자 하는 값과 비교하며 그보다 작은(작은 값이 저장되어 있는) 인덱스 또는 큰(큰 값이 저장되어 있는) 인덱스로 이동을 반복하며 검사한다.
    ```
    If no items

        Return false

    If middle item is 50

        Return true

    Else if 50 < middle item

        Search left half

    Else if 50 > middle item

        Search right half
    ```
#### 생각해보기
* 💁‍♂ : 만약 정렬되지 않은 배열이 있다면, 선형 검색이 빠를까요 이진 검색이 빠를까요?
  * 🙋‍♀️ : 어느 검색이 빠르다고 말할 수 없습니다. 정렬되어 있지 않다면 찾는 값이 어느쪽에 있는지 알 수 없기 때문입니다.  
    또한 정렬되지 않은 배열에서 이진 검색을 한다면 크거나 작은 값을 기준으로 검색을 하는 것이 아니라 그저 인덱스의 번호를 기준으로 검색을 해야하며, 한쪽에서 검색이 안 된다면 다른 한쪽으로 또 검색을 해야하는 처리를 해야합니다. 때문에 저라면 정렬되지 않은 배열에서는 선형검색을 택할 것 같습니다.
  
### 2️⃣ 알고리즘 표기법
#### 강의 요약
* Big O
  * 알고리즘 실행 시간의 상한을 나타낸 것
  * O는 "on the order of"의 약자로, 쉽게 생각하면 "~만큼의 정도로 커지는"것이라고 볼 수 있다.
  * O(n)은 n만큼 커지는 것이므로 n이 늘어날수록 선형적으로 증가하게 된다.
    * O(n/2)도 결국 n이 매우 커지면 1/2은 큰 의미가 없어지므로 O(n)이라고 볼 수 있다.
  * 주로 아래 목록과 같은 Big O 표기가 사용된다.
    * O(n^2)
    * O(n log n)
    * O(n) `예) 선형 검색`
    * O(log n) `예) 이진 검색`
    * O(1)
* Big Ω
  * 알고리즘 실행 시간의 하한을 나타낸 것
  * 예를 들어 선형 검색에서는 n개의 항목이 있을 때 최대 n번의 검색을 해야하므로 상한이 O(n)이 되지만 운이 좋다면 한 번만에 검색을 끝낼 수도 있으므로 하한은 Ω(1)이 된다.
  * 주로 아래 목록과 같은 Big Ω 표기가 사용된다.
    * Ω(n^2)
    * Ω(n log n)
    * Ω(n) `예) 배열 안에 존재하는 값의 개수 세기`
    * Ω(log n)
    * Ω(1) `예) 선형 검색, 이진 검색`
#### 생각해보기
* 💁‍♂ : 실행시간의 상한이 낮은 알고리즘이 더 좋을까요, 하한이 낮은 알고리즘이 더 좋을까요?
  * 🙋‍♀️ : 입력값, 주어지는 값이 비슷해서 그에 따라 하한이 낮은 알고리즘의 하한값에 부합하는 프로그램이라면 하한이 낮은 알고리즘이 더 좋은 성능을 보일 것 입니다.  
    하지만 입력값, 주어지는 값이 만약 달라졌을 경우 유지보수에 비용을 쏟아야 하므로 항상 입력값, 주어지는 값이 비슷한 프로그램이 아니라면 실행시간의 상한이 낮은 알고리즘으로 구현해야 장기적으로 좋다고 생각합니다.   
    또한 최악의 상황을 항상 고려해야 하는 프로그램에서는 항상 상한이 낮은 알고리즘을 선택해야 합니다.

### 3️⃣ 선형 검색
#### 강의 요약
* 선형 검색
  * 원하는 원소가 발견될 때까지 처음부터 마지막 자료까지 차례대로 검색하는 방법
* 효율성 그리고 비효율성
  * 선형 검색 알고리즘은 정확하지만 아주 효율적이지 못한 방법이다.
    * 리스트의 길이가 n이라고 했을 때, 최악의 경우 리스트의 모든 원소를 확인해야 하므로 n만큼 실행된다.
      * 여기서 최악의 상황은 찾고자 하는 자료가 맨 마지막에 있거나 리스트 안에 없는 경우를 말한다.
      * 반대로 최선의 상황은 처음 시도했을 때 찾고자 하는 값이 있는 경우이다.
    * 평균적으로 선형 검색이 최악의 상황에서 종료되는 것에 가깝다고 가정할 수 있다.
  * 선형 검색은 자료가 정렬되어 있지 않거나 그 어떤 정보도 없어 하나씩 찾아야 하는 경우에 유용하다.
    * 이런 경우는 무작위로 탐색하는 것보다 순서대로 탐색하는 것이 더 효율적이다.
* 정렬은 시간이 오래 걸리고 공간을 더 차지하지만, 정렬 과정을 진행하면 여러 번 리스트를 검색해야 하거나 매우 큰 리스트를 검색해야 할 경우 시간을 단축할 수 있다.
* 구조체
  * 새로운 자료형으로 구조체를 정의할 수 있다.
  * 구조체 안에 포함된 속성값은 '.'으로 연결해서 접근할 수 있다.
    ``` C
    typedef struct
    {
        string name; // 이름
        string number; // 전화번호
    }
    person;
    ```
    * 위와 같이 person이라는 이름의 구조체를 자료형으로 정의하고 person 자료형의 배열을 선언할 수 있다.
    * `person a;` 라는 변수가 있다면 a.name또는 a.number이 각각 이름과 전화번호를 저장하는 변수가 된다.
  * 구조체를 사용하면 더 확장성 있는 프로그램을 만들 수 있다.
#### 생각해보기
* 💁‍♂ : 전화번호부와 같이 구조체를 정의하여 관리 및 검색을 하면 더 편리한 예는 또 무엇이 있을까요?
  * 🙋‍♀️ : 현실의 정보를 담고 있는 대부분 정보들에는 오직 하나의 정보를 담고 있는 경우가 드물기 때문에 거의 모든 경우에 사용할 수 있습니다.  
    가령 3주차 배열 표현의 예를 들었던 시험의 답안 목록 같은 경우도 구조체로 나타낸다면 학생, 시험과목, 답안 배열 등의 자료형들로 구조체를 정의할 수 있고 CS50의 팀별 인원 수 같은 경우도 기수, 코치, 리드부스터, 스터들 배열, 인원 수등의 자료형들로 구조체를 정의할 수 있습니다.  
    위와 같이 구조체로 정의한다면 한 과목의 시험 답안을 아는 프로그램과 인원 수 검색만 할 수 있는 프로그램에서 그치지 않고 여러 정보들을 알 수 있는 프로그램으로 확장성이 높아질 수 있습니다.
#### 배운점
> 와우 구조체 너무 오랜만이었다. 객체지향의 class에 익숙해있던 나에게 구조체의 존재를 다시 인식시켜준 건 아주 반가운 소식이었다.  
> 구조체처럼 잊고 있던 정보들이 다시 들어오니까 C도 다시 점점 재밌어진다!!

### 4️⃣ 버블 정렬
#### 강의 요약
* 버블 정렬
  * 두 개의 인접한 자료 값을 비교하면서 위치를 교환하는 방식으로 정렬하는 방법이다.
  * 단 두 개의 요소만 정렬해주는 좁은 범위의 정렬에 집중한다.
  * 간단하지만 단 하나의 요소를 정렬하기 위해 너무 많이 교환하는 낭비가 발생할 수 있다.
  * 마치 거품이(비교 및 교환이) 터지면서 위로 올라오는(배열의 옆으로 이동하는) 방식이기 때문에 버블 정렬이라 불린다.
  * 아래는 1부터 8까지의 무작위 숫자들을 버블 정렬로 오름차순 정렬하는 예이다.
    1. 가장 앞의 6과 3을 비교해 오름차순으로 한다.
       ```
       교환 전: 6 3 8 5 2 7 4 1
       교환 후: 3 6 8 5 2 7 4 1
       ```
    2. 위와 같은 식으로 숫자 끝까지 진행하면 아래와 같이 정렬된다.
       ```
       3 6 5 2 7 4 1 8
       ```
    3. 아직 오름차순으로 정렬이 되지 않았기 때문에, 다시 처음부터 동일한 작업을 반복한다.
       ```
       3 6 5 2 7 4 1 8 (3, 6)
       3 6 5 2 7 4 1 8 (6, 5 - 교환)
       3 5 6 2 7 4 1 8 (6, 2 - 교환)
       3 5 2 6 7 4 1 8 (6, 7)
       3 5 2 6 7 4 1 8 (7, 4 - 교환)
       3 5 2 6 4 7 1 8 (7, 1 - 교환)
       3 5 2 6 4 1 7 8 (7, 8)
       ```
    4. 위와 같은 과정을 끝까지 반복하면 최종적으로 아래와 같이 오름차순으로 정렬이 된다.
       ```
       1 2 4 3 5 6 7 8
       ```
  * 의사코드
    ```
    Repeat n–1 times

        For i from 0 to n–2

            If i'th and i+1'th elements out of order

                Swap them
    ```
    * 중첩 루프를 돌아야 하고, n개의 값이 주어졌을 때 각 루프는 각각 n-1번, n-2번 반복되므로 (n - 1) \* (n - 2) = n^2 - 3n + 2 번의 비교 및 교환이 필요하다.
      * 가장 크기가 큰 요소는 n^2 이므로 위와 같은 코드로 작성한 버블 정렬 실행 시간의 상한은 O(n^2)이라고 말할 수 있다.
      * 정렬이 되어 있는지 여부에 관계 없이 루프를 돌며 비교를 해야 하므로 위와 같은 코드로 작성한 버블 정렬의 실행 시간의 하한도 여전히 Ω(n^2)이 된다.
#### 생각해보기
* 💁‍♂ : 버블 정렬이 효율적인 경우는 어떤 경우인가요? 반대로 어떤 경우에 비효율적이게 될까요?
  * 🙋‍♀️ : 거의 모든 경우에서 비효율적인 정렬 방법이라고 할 수 있습니다.  
  다만 다른 정렬 방법과 더불어 비교해봤을 때, 예를 들어 오름차순 정렬되어 있는 배열을 내림차순으로 정렬할 때는 다른 정렬 방법과 비슷한 효율을 낼 것 같습니다. 다시 말해 딱히 효율적인 경우는 없는 것 같습니다.
#### 배운점
> 버블 정렬을 강의를 통해 보니 내 생각보다 더욱 비효율적인 정렬 방법인 것 같다.  
> 생각해보기에서도 효율적인 경우를 생각해보라고 했는데 아무리 생각해도 버블 정렬을 사용할 바에 다른 정렬 방법을 사용하는 게 조금이라도 효율적일 것 같다...  
> 버블 정렬 생각해보기 꼭 피드백 받고싶다..!

### 5️⃣ 선택 정렬
#### 강의 요약
* 선택 정렬
  * 배열 안의 자료 중 가장 작은 수(혹은 가장 큰 수)를 찾아 첫번째 위치(혹은 가장 마지막 위치)의 수와 교환해주는 방식의 정렬이다.
  * 교환 횟수를 최소화하는 반면 각 자료를 비교하는 횟수는 증가한다.
  * 아래는 1부터 8까지의 무작위 숫자들을 선택 정렬로 오름차순 정렬하는 예이다.
    1. 가장 작은 값을 찾아 리스트의 첫번째 값과 교환한다. (1과 6 교환)
       ```
       1 3 8 5 2 7 4 6
       ```
    2. 정렬된 1은 제외하고, 두 번째 숫자부터 시작해서 또 가장 작은 값을 찾는다. (2와 3 교환)
       ```
       1 2 8 5 3 7 4 6
       ```
    3. 위와 같은 과정을 더 이상 교환이 일어나지 않을 때까지 반복하면 아래와 같이 오름차순으로 정렬이 된다.
       ```
       1 2 4 3 5 6 7 8
       ```
  * 의사코드
    ```
    For i from 0 to n–1

    Find smallest item between i'th item and last item

    Swap smallest item with i'th item
    ```
    * 중첩 루프를 돌아야 한다.
      * 바깥 루프에서는 숫자들을 처음부터 순서대로 방문하고, 안쪽 루프에서는 가장 작은 값을 찾아야 한다.
      * 따라서 소요 시간의 상한은 O(n^2)이 된다.
      * 하한도 Ω(n^2)으로 버블 정렬고 동일하다.
#### 생각해보기
* 💁‍♂ : 선택정렬을 좀 더 효율적으로 어떻게 바꿀 수 있을까요?
  * 🙋‍♀️ : 루프를 돌 때 최솟값만 찾는 것이 아니라 최댓값을 함께 찾아 가장 처음과 마지막에 배치하는 방식으로 개선하면 루프가 돌아가는 것을 반으로 줄일 수 있습니다. 이와 같은 방법을 이중 선택 정렬이라고 합니다.

### 6️⃣ 정렬 알고리즘의 실행시간
#### 강의 요약
* 실행시간의 상한
  * O(n^2)`예) 선택 정렬, 버블 정렬`
  * O(n log n)
  * O(n) `예) 선형 검색`
  * O(log n) `예) 이진 검색`
  * O(1)
* 실행시간의 하한
  * Ω(n^2) `예) 선택 정렬, 버블 정렬`
  * Ω(n log n)
  * Ω(n)
  * Ω(log n)
  * Ω(1) `예) 선형 검색, 이진 검색`
* 버블 정렬의 안쪽 루프(위의 의사 코드에서)에서 만약 교환이 하나도 일어나지 않는다면 이미 정렬이 잘 되어 있는 상황일 것이다.
  * 따라서 바깥쪽 루프를 '교환이 일어나지 않을 때'까지만 수행하도록 아래와 같이 바꿀 수 있다.
    ```
    Repeat until no swaps

        For i from 0 to n–2

            If i'th and i+1'th elements out of order

                Swap them
    ```
    * 위와 같은 알고리즘으로 개선한다면 최종적으로 버블 정렬의 하한은 하한은 Ω(n)이 된다.
    * 위와 같이 알고리즘을 개선한다면 상황에 따라서 선택 정렬보다 더 빠른 방법이 될 수 있다.
  * 실행시간의 하한
    * Ω(n^2) `예) 선택 정렬`
    * Ω(n log n)
    * **Ω(n) `예) 버블 정렬`**
    * Ω(log n)
    * Ω(1) `예) 선형 검색, 이진 검색`
#### 생각해보기
* 💁‍♂ : 선택 정렬의 실행 시간의 하한도 버블 정렬처럼 더 단축시킬 수 있을까요?
  * 🙋‍♀️ : 만약 정렬해야 하는 리스트가 정수형에 중복이 없다고 가정했을 때, 정렬해야 하는 인덱스의 수가 이전에 정렬한 수 + 1과 같다면 탐색하지 않고 다음 정렬해야 하는 인덱스로 넘어가게 합니다. 이 과정을 반복 한다면 이미 정렬되어 있는 리스트에서는 처음 한번만 리스트를 순회하고 나머지는 순회하지 않고 루프를 마칠 수 있습니다. 이와 같은 방법을 적용한다면 최선의 경우 2n번 실행되므로 실행시간의 하한은 Ω(n)이 됩니다.  
  또한 만약 중복이 있는 리스트라면 이전에 정렬한 수와 현재 정렬해야 하는 인덱스에 있는 수가 같다면 순회하지 않고 진행하면 됩니다.

### 7️⃣ 재귀
#### 강의 요약
* 재귀(Recursion)
  * 함수가 본인 스스로를 호출해서 사용하는 것
  * 재귀를 사용하면 중첩 루프를 사용하지 않고도 하나의 함수로 동일한 작업을 수행할 수 있다.
  * 계속해서 프로그램이 돌아가는 상황을 막기 위해 호출을 그만하는 조건문을 추가해줘야 한다.
* 아래와 같은 피라미드 모양을 출력하기 위한 프로그램 구현
  ```
  #
  ##
  ###
  ####
  ```
  * 중첩 루프 사용 구현 방법
    ``` C
    #include <cs50.h>
    #include <stdio.h>

    void draw(int h);

    int main(void)
    {
        // 사용자로부터 피라미드의 높이를 입력 받아 저장
        int height = get_int("Height: ");

        // 피라미드 그리기
        draw(height);
    }

    void draw(int h)
    {
        // 높이가 h인 피라미드 그리기
        for (int i = 1; i <= h; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("#");
            }
            printf("\n");
        }
    }
    ```
  * 함수를 재귀적으로 호출하는 구현 방법
    ``` C
    #include <cs50.h>
    #include <stdio.h>

    void draw(int h);

    int main(void)
    {
        int height = get_int("Height: ");

        draw(height);
    }

    void draw(int h)
    {
        // 높이가 0이라면 (그릴 필요가 없다면)
        if (h == 0)
        {
            return;
        }

        // 높이가 h-1인 피라미드 그리기
        draw(h - 1);

        // 피라미드에서 폭이 h인 한 층 그리기
        for (int i = 0; i < h; i++)
        {
            printf("#");
        }
        printf("\n");
    }
    ```
#### 생각해보기
* 💁‍♂ : 반복문을 쓸 수 있는데도 재귀를 사용하는 이유는 무엇일까요?
  * 🙋‍♀️ : 코드를 간결하게 쓸 수 있으며, 같은 일을 반복한다는 것을 함수명을 통해 직관적으로 드러낼 수 있습니다.  
  위와 같은 이유로 코드의 가독성을 높일 수 있기 때문입니다.
#### 배운점
> 내가 항상 어려워하는 재귀 함수...  
> 강의에서 이해하기 쉬운 예제로 다시 이해할 수 있어서 좋았지만, 나는 항상 재귀가 어렵다..ㅠㅠ  
> 재귀를 구현할 때는 예외처리나 구동 방식을 항상 많이 생각해봐야하는 것 같다.  
> 
> 아직도 어렵게 느껴지지만, 강의를 보면서 얻은 것이라고 하면 재귀의 구동방식은 스택 자료구조의 형태를 띄고 있다는 것이다.  
> 그동안 재귀 함수를 마주치면 항상 구동 방식을 하나하나 생각했는데, 
> 이는 곧 스택 자료구조의 형태라는 것을 이번에 강의를 보며 깨달았다.  
> 이로 인해서 재귀 함수를 보면 전보다는 좀 더 빨리 알고리즘을 이해할 것 같다!!

### 8️⃣ 병합 정렬
#### 강의 요약
* 병합 정렬
  * 원소가 한 개가 될 때까지 계속해서 반으로 나누다가 다시 합쳐나가며 정렬을 하는 방식이다.
  * 이 과정은 재귀적으로 구현된다.
  * 아래는 1부터 8까지의 무작위 숫자들을 병합 정렬로 오름차순 정렬하는 예이다.
    1. 먼저 숫자들을 반으로 나눈다.
       ```
       7 4 5 2 | 6 3 8 1
       ```
    2. 나눠진 부분 중 첫번째를 한 번 더 반으로 나눈다.
       ```
       7 4 | 5 2 | 6 3 8 1
       ```
    3. 계속해서 더 나눈다.
       ```
       7 | 4 | 5 2 | 6 3 8 1
       ```
    4. 숫자가 두 개 밖에 남지 않았으므로 더 이상 나누지 않고, 두 숫자를 병합한다.
       * 작은 숫자가 먼저 오도록 한다.
       ```
       4 7 | 5 2 | 6 3 8 1
       ```
    5. 마찬가지로 나눠진 부분 중 나머지 부분도 반으로 나눈 후에 작은 숫자가 먼저 오도록 다시 병합한다.
       ```
       4 7 | 2 5 | 6 3 8 1
       ```
    6. 병합한 부분들을 병합한다.
       * 각 부분들의 숫자들을 앞에서 부터 순서대로 읽어들여 비교하여 더 작은 숫자를 병합되는 부분에 가져온다.
       ```
       2 4 5 7 | 6 3 8 1
       ```
       * 위와 같은 예에서는 4와 2를 먼저 비교해서 2를 가져오고, 그 후 4와 5를 비교해서 4를 가져온다.
       * 그리고 7과 5를 비교해서 5를 가져오고, 남은 7을 가져온다.
    7. 처음에 나눠진 부분 중 두번째도 동일한 과정을 거친다.
       ```
       2 4 5 7 | 1 3 6 8
       ```
    8. 각각 정렬된 왼쪽과 오른쪽 두 부분을 병합한다.
       ```
       1 2 3 4 5 6 7 8
       ```
       * 위와 같은 예에서는 2와 1을 비교하고, 1을 가져오고, 2와 3을 비교하고 2를 가져오고, 4와 3을 비교하고 3을 가져오고, 4와 6을 비교하고 4를 가져온다. 이 과정을 병합이 끝날 때까지 진행한다.
    * 위 과정을 요약해서 도식화하면 아래와 같다.
      ```
      7 | 4 | 5 | 2 | 6 | 3 | 8 | 1 → 가장 작은 부분 (숫자 1개)으로 나눠진 결과
      4   7 | 2   5 | 3   6 | 1   8 → 숫자 1개씩을 정렬하여 병합한 결과
      2   4   5   7 | 1   3   6   8 → 숫자 2개씩을 정렬하여 병합한 결과
      1   2   3   4   5   6   7   8 → 마지막으로 숫자 4개씩을 정렬하여 병합한 결과
      ```
  * 병합 정렬 실행 시간의 상한은 O(n log n)이다.
    * 숫자들을 반으로 나누는 데 O(log n)의 시간이 들고, 각 반으로 나눈 부분들을 다시 정렬해서 병합하는 데 각각 O(n)의 시간이 걸리기 때문이다.
  * 병합 정렬 실행 시간의 하한도 O(n log n)이다.
    * 숫자들이 이미 정렬되었는지 여부에 관계없이 나누고 병합하는 과정이 필요하기 때문이다.
#### 생각해보기
* 💁‍♂ : 병합 정렬을 선택 정렬이나 버블 정렬과 비교했을 때 장점과 단점은 무엇이 있을까요?
  * 🙋‍♀️ : 방대한 정보를 정렬해야 하는 경우 병합 정렬이나 선택 정렬보다 시간적으로 효율적인 성능을 낼 수 있다는 장점이 있습니다. (O(n log n) < O(n^2))  
  하지만 재귀적인 방법으로 구현해야 하는 정렬 방법임으로 숙련된 프로그래머가 아니라면 구현하기 어렵고, 메모리 낭비가 높다는 단점이 있으며, 이미 정렬되어 있는 리스트이라도 반으로 나누고 각 숫자들을 확인해야 하므로 실행 시간의 하한을 낮추기 어렵습니다.
#### 배운점
> 강의를 들으면서도 이게 도대체 무슨 방법인거야..? 하면서 본 것 같다.  
> 탐색만 하고 있는데 정렬이 되고 있다고 한다. 이게 무슨 말이야..? (전공수업 기억은 사라졌나봄...)  
> 탐색 다 끝나고 갑자기 정렬이 완성됐다. 응????????  
> 이러면서 완벽히 이해 못 하고 있었는데, 강의 요약을 하며 이해가 되었다.  
> 쪼개고 쪼개서 둘을 정렬하여 병합하고, 그 병합한 것들을 다시 작은 부분들과 큰 부분까지 정렬하고!  
> 전공 수업 때도 아마 다 이해를 못 해서 기억을 못 하는 것 같은데, 이번엔 이해를 제대로 한 것 같다!

## [💡 퀴즈](https://www.boostcourse.org/cs112/joinLectures/41496)
1. 알고리즘 - 알고리즘의 성능 및 시간 복잡도를 표현하는 표기법 중 하나로, 최악의 경우일때(상한)를 나타내는 것은 다음 중 무엇인가요?
   > O()
2. 자료형 - name과 number 두개의 멤버를 갖는 person이라는 새로운 자료형을 구조체로 정의하고자 합니다. 아래 코드의 괄호 안에 들어갈 코드로 알맞은 것은 무엇인가요?
   ``` C
   (     )
   {
       string name;
       string number;
   }
   person;
   ```
   > typedef struct
3. 알고리즘 - 전화번호부 책에서 '이펭수'를 찾는 작업을 선형 검색으로 수행하게 될 경우 Big-O 는 어떻게 될까요?
   > O(n)
4. 정렬 - 5 6 7 3 2 과 같은 숫자 리스트가 주어졌습니다. 오름차순 정렬을 위해 버블 정렬을 왼쪽 처음부터 오른쪽 끝까지 ‘한 번’ 수행했을 때의 리스트는 어떻게 될까요?
   > 5 6 3 2 7
5. 선택 정렬 - 5 6 7 3 2 와 같은 숫자 리스트가 주어졌습니다. 오름차순 정렬을 위해 선택 정렬을 통해 교환을 ‘한 번’ 수행했을 때의 리스트는 어떻게 될까요?
   > 2 6 7 3 5
6. 알고리즘 - 선택 정렬, 버블 정렬, 선형 검색, 이진 검색 4가지 알고리즘이 최선인 경우일 때의 실행시간이(하한) 빠른 순서대로 나열한 것은 무엇인가요? (단, 하한이 같은 경우 상한이 빠른 순으로 나열합니다)
   > 이진 검색 - 선형 검색 - 버블 정렬 - 선택 정렬 (강의에서 나온 내용을 토대로만 문제 풀이 진행 - '생각해보기'의 답안 제외)
7. 함수 - 아래 코드는 '#'으로 피라미드를 쌓는 코드입니다. draw()와 같이 함수 안에서 함수 자기 자신을 호출하는 방식을 무엇이라고 할까요?
   ``` C
   void draw(int h)
   {
       if (h == 0)
       {
           return;
       }
       draw(h - 1);

       for (int i = 0; i < h; i++)
       {
           printf("#");
       }
       printf("\n");
   }
   ```
   > 재귀(recursive)
8. 알고리즘 실행 - 7번 코드와 같이 피라미드 쌓기를 재귀적으로 작성한 코드에서, h 값으로 3이 입력되었을 때 draw 함수는 총 몇 번 호출될까요?
   > 4 (main에서 실행되는 수까지 호출 수에 포함함)
9. 정렬 - 병합 정렬, 선택 정렬, 버블 정렬의 실행시간의 하한을 빠른 순서대로 정렬한 것은 무엇인가요?
   > 버블 정렬 - 병합 정렬 - 선택 정렬 (강의에서 나온 내용을 토대로만 문제 풀이 진행 - '생각해보기'의 답안 제외)
10. 알고리즘 실행 시간의 표기법 - 알고리즘의 실행 시간의 상한을 비교하기 위해 Big-O 표기법을 사용합니다. 다음 Big-O 표기법 중 빠른 순서대로 올바르게 정렬한 것은 무엇인가요?
    > O(1) – O(log n) – O(n) – O(n^2)

## 🎞 회고
> 4주차는 재밌는 강의, 약간의 이슈가 있던 퀴즈, 꽤 어려웠던 미션의 집합이었다.  
> 강의는 요즘 계속 관심을 두고 있는 알고리즘, 그리고 앞으로 공부하기로 했던 재귀함수가 포함된 내용이라 흥미롭게 학습했다.  
> 하지만 퀴즈에서 모호한 표현과 '생각해보기'를 열심히 하는 수강생을 고려하지 못 하는 문제...  
> 솔직히 부스트코스 측의 대응에 대해 실망한 주차가 아닐까 싶다. 하지만 2기이니 아직 완벽한 운영이 갖춰지지 않은 것도 이해가 간다.
> 그리고 이렇게 문제거리를 던지고 생각하게 하는 시간도 재밌었던 것 같다. 이를 고민하면서 내가 성장하지 않았을까?!?!  
> 내가 던진 의문점에 함께 고민해주고 자신의 지식을 공유해주신 코치님들에게 감사를 표시한다. 🙏🏻🙏🏻  
>  
> 그리고 점점 어려워지는 미션... 4주차 미션은 총 4문제로 준비되어 있었는데,  
> 그 중 하나가 정말 어려웠다. 힌트가 없었으면 깨끗한 뇌로 풀 수 있었을까? 하는 문제랄까..?  
> 힌트를 참고하긴 했지만 팀원들과 이렇게 풀면, 저렇게 풀면 토론하면서, 어려운 문제만큼 재밌는 토론 시간이었다.  
>  
> 설 주라서 한주 쉬고 다시 5주차부터 시작이다! 한주동안 쉬면서 열정 충전 후에 나머지 2주로 멋지게 마무리짓자!
