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

										