# Arduino_Contest


 
## 1.	진행계획
①	무엇을 만들 것인가?
하루 일과를 마치고 집에 돌아오는 가족들의 모습을 보면서 일관된 패턴이 있다는 것을 깨달았다.
동생의 경우에는 자신의 방 스위치만 켜고, 엄마와 아빠의 경우 안방 스위치만 켜신다.나의 경우에는 주방불과 내 방불을 켜게 되는데 이 모습을 보고 누가 들어온 지 구분하여 자동으로 불을 켜주는 기계가 있다면 좋겠다고 생각했다.
가족 구성원을 구분하기 위해서 필요한 것이 무엇인지 생각했다.
몸무게와 키를 고려하였는데, 이때 우리 가족 중에는 몸무게가 비슷하게 나가는 사람이 있으므로 키를 기준으로 하여 초음파 센서를 통해 구분하도록 하였다.
②	TinkerCad의 활용
무작정 아두이노에 손을 대는 것보다 tinkercad라는 시뮬레이션을 활용해서 계획을 세웠다. 또한, 모형 집을 제작할 필요성이 있다고 느껴졌다. (실제 집에서 하기에는 와이파이나 블루투스 모듈이 부족했음)
 시뮬레이션을 활용해서 모형과 아두이노에 대한 계획을 세울 수 있었다.
   
  
 
## 2.	진행과정 및 수정작업
①	집 모형 만들기
상자를 이용해서 집 모형을 제작하였다. 이때 주의한 것은 나중에 초음파 센서가 사람들을 구분할 수 있는 높이를 충분히 확보하는 것이었다.
 
②	아두이노와 모형 연결
 
 
   

③	세부기능의 변경과 추가

세부기능 변경
Brother: 인식 시에 방불(led)가 켜진다.
Mom&Dad: 인식 시에 방문이 자동으로 열린다.
Sister: 인식 시에 자동으로 스위치를 켜준다.

세부기능 추가
	초반 – 초음파 센서를 이용해 키를 기준으로 가족구성원 구분output
추가된 기능 – 적외선 센서와 리모컨을 통해 출입이후에도 가족 구성원이 조절할 수 있도록 기능을 추가
 
## 3.	결과
①	각 센서의 역할 소개

초음파센서: 출입자의 키를 판단하는 역할
서보모터: Sister 방의 스위치를 켜는 역할
스테퍼모터(tinkercad에 존재하지 않아 사진에서는 볼 수 없다.): 문을 견인하는 역할
적외선센서&리모컨: 가족구성원들이 원하는 동작을 실행할 수 있도록 하는 역할
	0번: Brother방의 불이 켜지는 버튼
	1번&3번: Mom&Dad 방의 문을 열고 닫는 버튼
	2번: Sister방의 스위치를 켜는 버튼
 
### 3.1.	출입_초음파센서를 이용해 출입 시 모터와 led 가동
 
길이가 다른 세가지 모형을 준비하여 결과를 확인한다.
이때 모형의 윗표면이 좁아 초음파 센서가 인식을 못할 수도 있어 작은 상자조각을 위해 덧대어준다. (실험영상을 보면 이해가 편하다.)
1.	제일 큰 조각 ( Mom&Dad )
부모님의 모형이 가장 큰 이유: 어머니와 아버지께서 항상 같이 퇴근하시는데 그렇게 되면 어머니의 키는 아버지의 키보다 작기 때문에 측정할 필요가 없어진다. 따라서, 아버지의 키를 기준으로 잡아 Mom&Dad 모형의 크기를 결정하게 되었다. 
 


닫혀있던 문이 모형을 갖다대자 열린 모습을 확인할 수 있다. (영상에서 확인 가능)
2.	중간 크기의 조각 (Brother)
중간 크기의 조각이 Brother인 이유: 남동생이 나보다 크기 때문이다. 모형을 갖다대자 불이 켜지는 모습을 확인할 수 있다. (영상에서 확인 가능) 

3.	제일 작은 크기의 조각 (Sister)
제일 작은 크기의 조각이 Sister인 이유: 내가 우리 가족 중 가장 작은 키를 가졌기 때문이다. 모형을 갖다대자 모터가 작동하면서 내려가는 모습을 확인할 수 있다. (영상에서 확인 가능)
  
### 3.2.	 리모컨_ 적외선 리모컨을 이용해 원할 때 모터와 led 가동
	0번: Brother방의 불이 켜지는 버튼. 입력 시 LED가 켜진다.
 
	1번&3번: Mom&Dad 방의 문을 열고 닫는 버튼. 
		  1번 입력 시 문이 닫힌다. 3번 입력 시 문이 열린다.
 
	2번: Sister방의 스위치를 켜는 버튼. 입력 시 서보모터가 작동하면서 스위치를 누른다.
 
 

