// mediator.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "User.h"
#include "ChatRoom.h"
using namespace std;
using namespace System;

int _tmain(int argc, _TCHAR* argv[])
{
	User^ robert = gcnew User("Robert");
	User^ john = gcnew User("John");

	robert->sendMessage("Hi! John!");
	john->sendMessage("Hello! Robert!");
	Console::ReadLine();
	return 0;
}

