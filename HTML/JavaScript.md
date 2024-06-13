#ex
function PrintGugu() {
    for (var j = 1; j <= 9; j++) {
        console.log(9 + " x " + j + " = " + (i * j));
    }
}

PrintGugu();



#HTML find by ID/class
*id 정보를 통해 찾음
getElementById();

Element.querySelector()



#Event
addEventListener(____*function____)

var el = document.querySelector(".outside");
el.addEventListener("click", function(){
											///////////////////////
											console.log(evt.target);
											*evt.target :	이벤트가 발생한 Element
											///////////////////////
										}, false);
										
										
										
#JSP
<%= %>표현식은 out.print로 변환
<%%>스크립트릿은 service함수로 자바코드로 들어감
<%! %>선언문은 servlet클래스안에 service 함수 밖에 자바코드로 들어감

#JSP 내장 객체
*HTML Form 요소 선택 값과 같은 사용자 입력 정보를 읽어올 때 사용
request
*사용자 요청에 대한 응답을 처리할 때 사용
response
*현재 JSP 실행에 대한 context 정보를 참조하기 위해 사용
pageContext
*클라이언트 세션 정보를 처리하기 위해 사용
session
*웹 서버의 애플리케이션 처리와 관련된 정보를 참조하기 위해 사용
applicaion
*사용자에게 전달하기 위한 output 스트림을 처리하기 위해 사용
out
*현재 JSP에 대한 초기화 환경을 처리하기 위해 사용
config
*현재 JSP 페이지에 대한 클래스 정보
page
*예외 처리를 위해 사용
exception