#pragma once
class TextComponent{
	public:
		TextComponent(std::shared_ptr<UIControl> &);
		void _getCaretLocation(UIRenderContext const&,std::string const&);
		void _getClippedText(UIRenderContext &,std::string const&,int);
		void clone(std::shared_ptr<UIControl> &);
		void getAlignment(void);
		void getAlpha(void);
		void getClip(void);
		void getColor(void);
		void getFontSize(void);
		void getFontType(void);
		void getLiteralText(void);
		void getLocalize(void);
		void getPlaceHolderText(void);
		void getPlaceHolderTextColor(void);
		void getShadow(void);
		void getWrap(void);
		void setAlignment(ui::AnchorPoint);
		void setAlpha(float);
		void setCaretPosition(int);
		void setClip(bool);
		void setColor(Color const&);
		void setFontSize(ui::FontSize);
		void setFontType(ui::FontType);
		void setLocalize(bool);
		void setPlaceHolderText(std::string const&);
		void setPlaceHolderTextColor(Color const&);
		void setShadow(bool);
		void setShouldRenderCaret(bool);
		void setText(std::string const&);
		void setUsePlaceHolderText(bool);
		void setWrap(bool);
		void shouldUsePlaceHolderText(void);
		void updateCaretBlink(float);
		void ~TextComponent();
		void ~TextComponent();
};
