#JS
*즉시 실행 함수(Immediately Invoked Function Expression)
(function(){	____________	})();

*배열 함수
뒷부분 값을 삭제		:pop()
뒷부분 값을 추가		:push(____var____)
앞부분 값을 삭제		:shift()
앞부분 값을 추가		:unshift(____var____)

특정위치 요소			:splice(index, 제거할 요소 개수, 추가될 요소...)
a<=index<b 얕은복사	:slice(시작번호, 끝번호)							:return arr
배열 합치기			:concat()										:return arr

테스트 통과 확인		:every(____function____)						:return boolean
T일때까지 테스트		:some(____function____)							:T일경우 return true
함수 결과를 배열로		:map(____function____)							:return arr
	ex) var arr = [1, 2, 3, 4];
		var isEven = function(value){
			return value%2 === 0;
		};
		var newArr = arr.map(isEven);	=>[false, true, false, true]
함수 결과 T만 배열로	:filter(____function____)						:return arr

함수반복문			:forEach(____function____)
누산기, 좌>우 진행		:reduce( function (previousValue, currentValue){
							} );
	ex)	var arr = [1, 2, 3, 4];
		var value = arr.reduce( function (previousValue, currentValue){
									return previousValue+currentValue;
								});			=> 10
순서 거꾸로			:reverse()
알파벳순, 함수순		:sort()					=> 1, 10, 11, 12, 2, 20, 21 순서로 정렬
					 sort(____function____)
문자열로 바꾸기		:toString()										:return String	=>[ERROR]NullPointerException
문자열 배열 반환		:valueOf()										:return String	=>"null" 반환
하나의 문자열로		:join()					=> "1,2,3,4"
					 join('-')				=> "1-2-3-4"

*JSON 객체 탐색
for(value in obj) {
  console.log(obj[value]);
}

Object.keys(obj).forEach(function(key) {
	console.log(obj[key]);
});

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



#redirect
특정 URL로 이동을 요청
	HTTP 상태코드(응답): 302

	//특정_URL로_이동
	(ex) response.sendRedirect("redirect02.jsp");



#forward
추가적인 처리를 다른 Servlet이나 JSP에게 위임

	*redirect	vs	forward
	redirect
	=>	[Client] --'request1'--> Servlet1 --'response1'--> [Client]
		[Client] --'request2'--> Servlet2 --'response2'--> [Client]
			  
	forward   
	=>	[Client] --'request'--> Servlet1 
				 --'forward(Servlet1's request&response)--> Servlet2 --'response'-->[Client]


	(ex)LogicServlet.java
		//변수_v1_값을_"v1"에_저장
		request.setAttribute("v1", v1);
		//RequestDispatcher_객체_생성_&_경로_지정
		RequestDispatcher rd = request.getRequestDispatcher("/result.jsp");
		//forward
		rd.forward(request, response);

	(ex)result.JSP
		<%
		//"v1"에_저장된_v1_값_가져오기
		int v1 = (int)request.getAttribute("v1");
		%>
		//v1_출력
		<%=v1 %>
		
		
		
#Scope
*---------------------------------------------------------*
*-------------------------------------------------------* *
* *  *-----------------------------------------------*  * *
* *  * *-------------------------------------------* *  * *
* *  * *                                           * *  * *
* *  * *                   Page                    * *  * *
* *  * *                                           * *  * *
* *  * *-------------------------------------------* *  * *
* *  *                    Requset                    *  * *
* *  *-----------------------------------------------*  * *
* *                       Session                       * *
* *-----------------------------------------------------* *
*                       Applicaion                        *
*---------------------------------------------------------*
Page			<	Request			<	Session				<	Applicaion
지역변수처럼 사용		forward				웹 브라우저				웹 어플리케이션
page scope			requset scope		session scope			application scope



#EL(Expression Language)
<!--  mvo instance의 name 변수 출력 -->
${requestScope.mvo.name} 

<!-- requestScope는 생략 가능 BUT 속도↓ 헷갈리므로 기재 권장-->
${mvo.name}



#JSTL
*반복문		어디서 가져올건지						어떤 변수로 출력할건지		[변수].index / [변수].count
<c:forEach	items="${[Scope종류].[전송대상이름]}"	var="[요소지정변수]"		varStatus="[변수]">
</c:forEach>
					배열, List, Iterator....											index : 0~
																					count : 1~
																			
																			
<c:forEach begin="[시작숫자]" end="[끝나는숫자]" var="[요소지정변수]">



#SQL
*CMD 접속 명령어
mysql -u [ID] -p
	=>PW:__________
	
*DB 생성
create database [DB 이름];

*DB 사용, 이동
use [DB 이름]

*모든 DB 보기
show databases;

*모든 TABLE 보기
show tables;

*TABLE 구조 보기
	-desc [TABLE 이름]
	-describe [TABLE 이름]
	(ex)	+-------------+------------------+------+-----+---------+-------+
			| Field       | Type             | Null | Key | Default | Extra |
			+-------------+------------------+------+-----+---------+-------+
			| emp_id      | int(11) unsigned | NO   | PRI | NULL    |       |
			| emp_name    | varchar(50)      | YES  |     | NULL    |       |
			| emp_salary  | decimal(10,2)    | YES  |     | NULL    |       |
			| emp_dept_id | int(11)          | YES  | MUL | NULL    |       |
			+-------------+------------------+------+-----+---------+-------+
			4 rows in set (0.00 sec)
	-explain select * from [TABLE 이름] where [필터 정보]
	(ex)	+----+-------------+-----------+------------+------+-----------------+------+----------+---------+-------+------+----------+-------------+
			| id | select_type | table     | partitions | type | possible_keys   | key  		   | key_len | ref   | rows | filtered | Extra       |
			+----+-------------+-----------+------------+------+-----------------+------+----------+---------+-------+------+----------+-------------+
			| 1  | SIMPLE      | employees | NULL       | ref  | emp_dept_id_idx | emp_dept_id_idx | 5       | const | 1    | 100.00   | Using where |
			+----+-------------+-----------+------------+------+-----------------+------+----------+---------+-------+------+----------+-------------+
			1 row in set, 1 warning (0.00 sec)

*TABLE 생성
create table [TABLE 이름](
필드명1	자료형(크기)	NOT NULL	AUTO_INCREMENT,
필드명2	자료형(크기)	NOT NULL,
필드명3	자료형(크기)
					*NULL 허용	*자동 숫자 입력(++)
);
	(ex)CREATE TABLE employees (
			emp_id INT AUTO_INCREMENT PRIMARY KEY,
			emp_name VARCHAR(100) NOT NULL,
			emp_salary DECIMAL(10, 2),
			emp_dept_id INT
		);

*TABLE 데이터 삽입
insert into [TABLE 이름] VALUES (데이터);
	(ex)INSERT INTO employees (emp_name, emp_salary, emp_dept_id)
		VALUES ('Jane Smith', 60000.00, 2),
			   ('Michael Johnson', 55000.00, 1),
			   ('Emily Brown', 48000.00, 2);

*DB/TABLE 삭제
drop database [DB 이름];
drop tacle [TABLE 이름];

*필드 추가
alter table [TABLE 이름] add (field 이름) (field 타입);
*필드 삭제
						drop (field 이름);
*필드 수정
						change (field 이름) (new field 이름) (field 타입);
*필드 타입 수정
						modify (field 이름) (new field 타입);
*TABLE 이름 수정
						rename [new TABLE 이름];
						
						
*데이터 수정
update [TABLE 이름] set (new field 이름)="(값)" where (field 이름)="(값)";
*데이터 삭제
delete from [TABLE 이름] where (field 이름)="(값)";
*데이터 검색
select (field 이름) from [TABLE 이름] where (field 이름)="(값)"
	(ex) SELECT * FROM [TABLE 이름]; : [TABLE 이름]의 모든 데이터 보기

*권한 설정
grant all privileges on [DB 이름].* to [ID]@'%' identified by ＇암호’;
grant all privileges on [DB 이름].* to [ID]@'localhost' identified by ＇암호’;
												*해당 컴퓨터에서만 접근 가능
*권한 설정 후 DBMS 적용
flush privileges;

#SQL 자료형
*정수
	-TINYINT	(2^8)개
	-SMALLINT	(2^16)개
	-MEDIUMINT	(2^24)개
	-INT		(2^32)개		<<<<<
	-BIGINT		(2^64)개		<<<<<
*실수
	<고정 소수점>: 정확, 자릿수가 문자로 저장
		-DECIMAL(s,d)
				*s: 실수 부분 자릿수(<65)
				*d: 소수 부분 자릿수
	<부동 소수점>: 상대적 부정확, 가수와 지수, 숫자로 저장
		-FLOAT
		-DOUBLE
*문자열
	-CHAR(s)	(s BYTE)		:크기 고정(남은 글자수는 space)
	-VARCHAR(s)	(실제+1 BYTE)	:크기 가변
				*최대 s BYTE까지 입력 가능
				*1Byte: 글자수 정보
				
*텍스트: 별도의 공간에 저장되므로 문자열이 긴 경우 사용하면 좋음
	-TINYTEXT
	-TEXT		<<<<<
	-MEDIUMTEXT
	-LONGTEXT
*시간
	-DATE		: YYYY-MM-DD							<<<<<
	-TIME		: HHH:MM:SS								<<<<<
	-DATETIME	: YYYY-MM-DD HHH:MM:SS	(입력된 시간)
	-TIMESTAMP	: YYYY-MM-DD HHH:MM:SS	(컴퓨터의 시간)	<<<<<
	
	
#JDBC
https://amy-it.tistory.com/61

import java.sql.*;

//JDBC 생성
public static void getConnection() throws Exception{
	try {
			//1.변수선언
			String driver = "oracle.jdbc.driver.OracleDriver";
			<!--String url = "jdbc:mysql://localhost/dbName";-->
			String url = "jdbc:oracle:thin:@localhost:1521:xe";
			Connection con = null;
			String userid = "smu";
			String password = "smu";
			
			//2.드라이버로딩
			Class.forName(driver);
			
			//3.DB연결
			con = DriverManager.getConnection(url, userid, password);
			




			String sql = "select ____컬럼NAME____ from user";

			//4.Statement생성
			Statement stmt = con.createStatement();
			ResultSet rs = stmt.executeQuery(sql);

			//질의수행
			*stmt.execute(“____query____”);         //any SQL
			*stmt.executeQuery(“____query____”);    //SELECT					: return ResultSet
			*stmt.executeUpdate(“____query____”);   //INSERT, UPDATE, DELETE	: return 변경된 레코드의 개수 정수

			//ResultSet받기
			while ( rs.next() )
				  System.out.println( rs.getInt( "____컬럼NAME____"or 위치값(1~...) ) );

			}
        } catch (SQLException e) {
            e.printStackTrace();
        } finally {
			//Close
			if (rs != null) rs.close();
			if (stmt != null) stmt.close();
			if (con != null) con.close();
		}
}