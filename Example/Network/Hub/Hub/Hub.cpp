// Hub.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


#include "Hub.hpp"


int _tmain(int argc, _TCHAR* argv[])
{
	async::iocp::IODispatcher io;
	pubsub::PubSubServer svr(io, 5050);

	svr.Start();

	system("pause");
	return 0;
}

