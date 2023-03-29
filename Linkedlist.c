#include <stdio.h>

typedef struct _USERDATA //연결 리스트의 노드를 구성하는 구조체를 선언 새로운 자료형 정의
{
	char szName[16];
	char szPhone[16];
	struct _USERDATA *pNext;
} USERDATA;

void main(void)
{
	USERDATA UserList[3] = { //USERDATA 구조체의 배열 선언 초기화
	{"유재석", "1234", NULL},
	{"박명수", "2345", NULL},
	{"노홍철", "3456", NULL} };
USERDATA *pTmp = NULL;

UserList[0].pNext = &UserList[1]; // 전체 노드의 개수가 세 개인 연결리스트 구성
UserList[1].pNext = &UserList[2];
UserList[2].pNext = NULL;

pTmp = &UserList[0];//리스트의 헤드 노드의 주소를 임시 포인터 변수에 저장
while(pTmp != NULL)// 단순 연결 리스트로 구성된 전체 노드에 접근 값을 출력하는 반복 실행 코드
	{
		printf("%s, %s\n", pTmp->szName, pTmp->szPhone);
		pTmp = pTmp->pNext;
	}
}
