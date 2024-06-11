#popular(많이 쓰는 거, 대중적인)

*텍스트 색상
color :	"red";
		#FF0000;
		rgb(255,0,0);
		rgb(100%, 0%, 0%);
*폰트의 볼드체 여부
font-weight :	normal;
				bold;
*요소의 가장자리와 내용 간의 간격
				*TOP부터 시계방향 순서로 진행
padding :	*top	*right	*bottom	*left
*폰트의 크기
font-size :	20pt;
			12px;
			200%;
			*부모 요소*n배(상대적)
			2.0em;
			*12px
			small;
			medium;
*배경색
background-color :	"red";
					#FF0000;
					rgb(255,0,0);
					rgb(100%, 0%, 0%);
*요소를 감싸는 경계선
border :	*두께	*스타일	*색상;
			5px		solid	red;
*이탤릭체 설정
font-style :	normal;
				italic;
				oblique;
*배경 이미지
background-image;
*텍스트 정렬
				*중앙
text-align :	center;
				*오른쪽
				right;
				*양쪽
				justify;
*리스트 스타일
list-style;



#font(폰트)

*한 줄에서 모든 폰트 속성을 설정할 때 사용
font :	*font-style	*font-variant	*font-weight	*font-size	*font-family
		italic										30px		arial,sans-serif;
*폰트 패밀리(세리프, 산세리프...)
font-family : 	Serif;
				San-serif;
				*San-serif+자간 넓음
				Monospace;
*폰트의 크기
font-size :	20pt;
			12px;
			200%;
			*부모 요소*n배(상대적)
			2.0em;
			*12px
			small;
			medium;
*폰트 스타일
font-style :	normal;
				*이탤릭체
				italic;
				*serif+기울임체
				oblique;
*폰트의 볼드체 여부
font-weight :	normal;
				bold;



#Text-Style(텍스트 스타일)

*텍스트 색상
color :	"red";
		#FF0000;
		rgb(255,0,0);
		rgb(100%, 0%, 0%);
*텍스트 작성 방향(가로쓰기/세로쓰기)
direction
*글자 간 간격
letter-spacing
*텍스트 줄의 높이, 행간
line-height
*텍스트 수평 정렬
				*중앙
text-align :	center;
				*오른쪽
				right;
				*양쪽
				justify;
*텍스트 장식
					*글자 위 선
text-decoration :	overline;
					*취소선
					line-through;
					*글자 아래 선, 밑줄
					underline;
*텍스트 들여쓰기
text-indent
*그림자 효과
text-shadow :	*x방향		*y방향		*흐림정도		*그림자색상
				3px			5px			10px		#000;
*대소문자 변환
					*모든 문자를 대문자
text-transform :	uppercase;
					*모든 문자를 소문자
					lowercase;
					*첫 글자를 대문자
					capitalize;
*자동 줄내림
word-wrap :	break-word;
*다중 컬럼(신문처럼 배치)
				*2개의 컬럼으로 나눌 것
column-count :	2;
				*컬럼과 컬럼 사이의 공백
column-gap :	50px;
				*컬럼과 컬럼 사이의 구분선
				*두께	스타일	색상
column-rule :	4px		outset	red;



#박스 모델

*---------------------------------------------------------*
*                         margin                          *
*-------------------------------------------------------* *
* *///////////////////////border////////////////////////* *
* *//*-----------------------------------------------*//* *
* *//*                    padding                    *//* *
* *//* *-------------------------------------------* *//* *
* *//* *///////////////////////////////////////////* *//* *
* *//* *//////////////////content//////////////////* *//* *
* *//* *///////////////////////////////////////////* *//* *
* *//* *-------------------------------------------* *//* *
* *//*                    padding                    *//* *
* *//*-----------------------------------------------*//* *
* *///////////////////////border////////////////////////* *
* *-----------------------------------------------------* *
*                         margin                          *
*---------------------------------------------------------*



#경계선
*한 줄에서 경계선 속성을 설정할 때 사용
border :	*두께	*스타일	*색상;
			5px		solid	red;
*경계선 종류
						*TOP부터 시계방향 순서로 진행
border-style		:	*top	*right	*bottom	*left
border-top-style	:
border-right-style	:
border-bottom-style	:
border-left-style	:
border-style 		:	none;
						* . . . 점, 도트
						dotted;
						*- - - 대시
						dashed;
						*굵은 선
						solid;
						*이중 선, 두 줄
						double;
						*동그랗게 들어간 효과
						groove;
						*동그랗게 나오는 효과
						ridge;
						*3D 들어간 효과
						inset;
						*3D 나오는 효과
						outset;

*경계선 색상
border-color :	"green";
*둥근 경계선, 둥근 모서리
				*둥근 코너의 반지름
border-radius :	25px;
box-shadow :	*가로	*세로	*번지는정도	*그림자색상
				20px	10px	5px			#666666;
				
				

#크기
*가로, 폭
width :		100px;
*세로, 높이
height :	50px;
			auto;
*사용자가 요소 크기 변경, 텍스트 입력 영역 조절
			*크기 조정x
resize :	none;
			*가로 및 세로 크기 조정 가능
			both;
			*가로
			horizontal;
			*세로
			vertical;
			*기본
			auto;
		
		
		
#margin(마진), padding(패딩)
*마진
					*TOP부터 시계방향 순서로 진행
margin			:	*top	*right	*bottom	*left
margin-top		:
margin-right	:
margin-bottom	:
margin-left		:
margin 			:	auto;
					10px;
					10pt;
					10%;
					inherit;
*패딩
					*TOP부터 시계방향 순서로 진행
padding			:	*top	*right	*bottom	*left
padding-top		:
padding-right	:
padding-bottom	:
padding-left	:
padding 		:	10px;
					10pt;
					1em;
					10%;
					
					
<!----------------------- p171 ----------------------->


#위치
			*가로폭=부모 요소, 수직으로 쌓임, 크기 간격 조절
display :	block;
			*내용의 너비만큼 차지
			inline;
			*내용의 너비만큼+크기 간격 조절
			inline-block;
			*(부모) 자식 요소 배치 제어
			flex;
			*(자식) flex시 자식 요소
			*플렉스 방향			*수평 배치
			flex-direction :	row;
								*수평 반대 방향으로 배치
								row-reverse;
								*수직 배치
								column;
								*수직 반대 방향으로 배치
								column-reverse;
								
			*주 축 정렬			*시작 부분에 정렬
			justify-content :	flex-start;
								*끝 부분에 정렬
								flex-end;
								*가운데에 정렬
								center;
								*양끝, 균등하게 정렬
								space-between;
								*동일한 간격으로 정렬
								space-around;
								
			*교차 축 정렬		*교차 축의 전체 높이로 확장
			align-items :	stretch;
							*시작 부분에 정렬
							flex-start;
							*끝 부분에 정렬
							flex-end;
							*가운데에 정렬
							center;
							*기준선에 맞춤
							baseline;
							
			*줄 바꿈		*줄 바꿈x 한 줄에 배치
			flex-wrap :	nowrap;
						*여러 줄로 나누어 배치
						wrap;
						*여러 줄로 나누어 역순으로 배치
						wrap-reverse;
						
*요소의 위치 조정
float



#list
*list 앞 점 제거
list-style-type :	none;