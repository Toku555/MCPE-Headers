#pragma once
class TextEditComponent{
	public:
		TextEditComponent(std::shared_ptr<UIControl> &);
		void _getText(void);
		void _updatePropertyBags(void);
		void clone(std::shared_ptr<UIControl> &);
		void getMaxLength(void);
		void getTextType(void);
		void handleTextCharEvent(VisualTree &,std::string const&,bool);
		void isNumbersOnly(void);
		void receive(VisualTree &,AnimationController &,ScreenEvent);
		void setLabelControl(std::shared_ptr<UIControl> &);
		void setMaxLength(uint);
		void setText(std::string const&);
		void setTextType(TextType);
		void ~TextEditComponent();
		void ~TextEditComponent();
};
