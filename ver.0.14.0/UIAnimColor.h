#pragma once
class UIAnimColor{
	public:
		UIAnimColor(UIResolvedDef const&);
		void _getBindableProperty(std::string const&);
		void tick(UIControl &,float);
		void ~UIAnimColor();
		void ~UIAnimColor();
};
