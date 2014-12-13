#pragma once
#include "stdafx.h"

#include "ChatRoom.h"
#include "User.h"
ref class User;

void ChatRoom::showMessage(User^ user, String^ message){      
	Console::Write(" [");
	Console::Write(user->getName());
	Console::Write(" ]");
	Console::Write(message);
	Console::WriteLine();
}
