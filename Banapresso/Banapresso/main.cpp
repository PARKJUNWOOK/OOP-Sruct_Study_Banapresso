#include <iostream>
#include <string>
#include <list>

#include "EventInfo.h"

using namespace std;

//#include "main.h"

int main()
{
	cout << "main() Run!!\n";

	// ����Ʈ ���� �׽�Ʈ
	list<EventInfo> tData;

	// VO Object ���
	for (int i = 0; i < 5; i++)
	{
		EventInfo infoData;
		// ������ setter/getter Ȱ��
		infoData.setEventSn(i);
		infoData.setEventNm("#Event#");
		cout << "eventSn :: " << infoData.getEventSn() << endl;
		cout << "eventNm :: " << infoData.getEventNm() << endl;

		// ����Ʈ Ŭ���� �׽�Ʈ
		tData.push_back(infoData);
	}


	return 1;
}