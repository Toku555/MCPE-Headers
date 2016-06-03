#pragma once
class MinecraftBindingFactory{
	public:
		MinecraftBindingFactory(MinecraftInputHandler const&);
		MinecraftBindingFactory(MinecraftInputHandler const&);
		void getAreaBinding(std::string const&);
		void getAreaBinding(std::string const&);
		void getBooleanBinding(std::string const&);
		void getBooleanBinding(std::string const&);
		void getPointBinding(std::string const&);
		void getPointBinding(std::string const&);
		void getStringBinding(std::string const&);
		void getStringBinding(std::string const&);
		void onConfigChanged(Config const&);
		void onConfigChanged(Config const&);
		void ~MinecraftBindingFactory();
		void ~MinecraftBindingFactory();
};
