#pragma once
class NativeStoreListener{
	public:
		NativeStoreListener(NativeStoreListener const&);
		NativeStoreListener(StoreListener &);
		void ~NativeStoreListener();
};
