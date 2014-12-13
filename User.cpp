#pragma once
ref class ChatRoom;
#include "stdafx.h"
#include "User.h"
#include "ChatRoom.h"

String^ User::getName() {
	return name;
}

void User::setName(String^ name) {
	this->name = name;
}

User::User(String^ name){
	this->name  = name;
}

void User::sendMessage(String^ message){
	ChatRoom::showMessage(this,message);
}

