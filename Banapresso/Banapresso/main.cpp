#include <iostream>
#include <string>
#include <list>

#include "EventInfo.h"

using namespace std;

//#include "main.h"

int main()
{
	cout << "main() Run!!\n";

	// 리스트 형태 테스트
	list<EventInfo> tData;

	// VO Object 사용
	for (int i = 0; i < 5; i++)
	{
		EventInfo infoData;
		// 생성한 setter/getter 활용
		infoData.setEventSn(i);
		infoData.setEventNm("#Event#");
		cout << "eventSn :: " << infoData.getEventSn() << endl;
		cout << "eventNm :: " << infoData.getEventNm() << endl;

		// 리스트 클래스 테스트
		tData.push_back(infoData);
	}


	return 1;
}