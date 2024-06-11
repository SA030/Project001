<!-- Web개발의 이해 FE/BE -->

*인터넷 != www(World Wide Web)
		  Email
		  FTP
		  DNS
		  .
		  .
		  .
		  
*HTTP: Server - Client (어떤 종류든 )Data 주고받기 위한 프로토콜
	O: 불특정 다수 대상
	   S-C 최대 연결 수보다 더 많이 처리할 수 O
	   (S-C가 계속 연결된 형태가 아니므로)
	X: 연결 끊어버리므로 Client의 이전 상황을 알 수 X = 무상태(Stateless)
		-> Server은 Client가 아까와 같은 Client인지 알 수 없다.
		=> Cookie 등장(이전 정보 저장)
		
*URL: Uniform Resource Locator
	접근 프로토콜:// IP주소 또는 도메인 이름 / 문서의 경로 / 문서 이름
	
	
<!-- HTML -->

* ID: HTML 문서 하나에 1개 사용
* class: 중복해서 사용 가능
		  하나의 태그에 여러개의 다른 class 이름을 공백 기준으로 나열
		  
<!-- CSS -->

*span	  { color 	  : red; }
selector	property	value

*css 속성들은 자식에게 상속.
 but 하위로 상속X: Box-model
				 => width, height. margin, padding, border
				 
*같은 선택자라면 나중 선언이 반영(경쟁)
*구체적인 것이 있다면 먼저 적용(body>span)

*tag #id .class (자손)
			   >(자손) : 바로 하위 자손
			   >p:nth-child(2) : 자손 중 2번째
			   >p:nth-of-type  : 동일 p요소 중 2번째
			   
*font-size: 16px;
			 1em : (상대적인 값) 부모 요소와 동일한 글씨 크기
			 0.5em: 부모 요소의 절반
			 
*display
1-1. block(블록으로 쌓이는 엘리먼트)
  : 위에서 아래로 쌓이듯이 채워짐
  : 높이와 넓이를 지정하면 쌓임
  =>list
1-2. inline(옆으로 흐르는 엘리먼트)
  : 우측에서 아래로 빈자리 차지
  : 높이와 넓이 지정X 
  =>상단 메뉴

2. position(좀 다르게 배치시키기)
 2-1. static(기본)
  : 순서대로 배치
 2-2. absolute(상위엘리먼트에서 상대적)
  : 기준점( position인 상위엘리먼트, static(x) )에 따라 top/left/right/bottom
  *top, left 값 꼭 주는 것이 이상적
 2-3. relative(원래 위치에서 상대적)
  : top/left/right/bottom
 2-4. fixed(고정)
  : 전체 화면 상하좌우 기준으로 동작
  
3. margin(간격 다르게 배치)
 : 상하좌우 엘리먼트와 본인간의 간격
 
 
<!-- 개발환경 설정 - BE -->
 *Tomcat 10.1.24
 *New->Servlet URL 규칙 설정
  : http://localhost:8080/{프로젝트 이름}/{URL Mapping 값}

  
<!-- Servlet-BE -->
*Servlet 라이프 싸이클
 if(메모리에 없음){
   -HelloServlet 생성
   -init test 호출
 }
 -service 호출		: 새로고침 할 때 마다 생성 (구현 위치)
 -destory 호출		: WAS 종료/웹 어플리케이션이 새롭게 갱신