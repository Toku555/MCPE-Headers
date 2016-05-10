#pragma once
class WSAStartupSingleton{
	public:
		void AddRef(void);
		void Deref(void);
		WSAStartupSingleton(void);
		void ~WSAStartupSingleton();
};
