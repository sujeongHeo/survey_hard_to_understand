// survey.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	string answer1, answer2, reply;
	answer1 = "pork cutlet";
	answer2 = "돈까스";
	cout << "오늘 점심메뉴 뭐가 좋을까요? [정답_있음_주의]  \n\n\n";
	
	getline(cin, reply);
	if ((reply == answer1) || (reply == answer2)) {
		cout << "맞아요, 역시 우리 회사와 생각 같군요^^♥돈까스\n\n\n";
	} else {
	    cout << "\n\n\n아니예요..돈으로 시작해요.(소곤소곤) 2번의 기회를 더 드릴게요.\n\n";
		cout << "오늘 점심메뉴 뭐가 좋을까요? [흰트!ㄷㄲㅅ] \n\n\n";
		getline(cin, reply);
		if ((reply == answer1) || (reply == answer2)) {
			cout << "맞아요, 역시 우리 회사와 생각 같군요^^♥돈까스\n\n\n";
		}
		else {
			cout << "\n\n땡!! 1번의 기회를 더 드릴게요.[hint : 포크 커틀릿]\n\n";
			cout << "\n\n오늘 점심메뉴 뭐가 좋을까요?(영어로 써도되어요) \n\n\n";
			getline(cin, reply);
			if ((reply == answer1) || (reply == answer2)) {
				cout << "\n\n맞아요, 고생했어요^^♥얼른 돈까스 먹으러 가요\n\n\n";
			}
			else {
				cout << "\n\n아니예요(돈까스라고 적어줘요 plz)..이번에 마지막이예요..\n\n";
				cout << "오늘 점심메뉴 뭐가 좋을까요? [마지막! 영어로 써도 되어요] \n\n\n";
				getline(cin, reply);
				if ((reply == answer1) || (reply == answer2)) {
					cout << "\n\n맞아요, 고생했어요^^♥얼른 돈까스 먹으러 가요\n\n\n";
				}
				else {
					cout << "Game Over";

				}
			}
		}
	}
	return 0;
}

