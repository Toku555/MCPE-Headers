#pragma once
class TextEditComponent{
	public:
		TextEditComponent(std::shared_ptr<UIControl> &);
		void _getText(void);
		void clone(std::shared_ptr<UIControl> &);
		void getCollectionIndex(void);
		void getConstrainedToRect(void);
		void getFont(void);
		void getGridCollectionName(void);
		void getMaxLength(void);
		void getTextEditComponentId(void);
		void getTextType(void);
		void isNumbersOnly(void);
		void receive(VisualTree &,ScreenInputContext &,AnimationController &,ScreenEvent);
		void setConstrainedToRect(bool);
		void setFont(Font *);
		void setGridCollectionName(std::string const&);
		void setLabelControl(std::shared_ptr<UIControl> &);
		void setMaxLength(uint);
		void setText(std::string const&);
		void setTextEditComponentId(short);
		void setTextType(TextType);
		void ~TextEditComponent();
		void ~TextEditComponent();
};
