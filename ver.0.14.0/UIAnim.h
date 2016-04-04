#pragma once
class UIAnim{
	public:
		UIAnim(UIResolvedDef const&);
		void _getBindableProperty(std::string const&);
		void bind(std::string const&,PropertyBag const&);
		void createBinding(std::string const&,std::string const&);
		void getInitialValueKey(void);
		void getNextAnimName(void);
		void handleButtonEvent(ButtonScreenEventData const&);
		void isButtonEventListener(void);
		void shouldTick(void);
		void tick(UIControl &,float);
		void ~UIAnim();
		void ~UIAnim();
};
