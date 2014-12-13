#pragma once
ref class ChatRoom;

#include "stdafx.h"
using namespace std;
using namespace System;

ref class User {
private:
	String^ name;

public:
	String^ getName();
	void setName(String^ name) ;
	User(String^ name);
	void sendMessage(String^ message);
};
