#include "User.h"
ref class User;

ref class ChatRoom 
{
public:
	static void showMessage(User^ user, String^ message);
};
