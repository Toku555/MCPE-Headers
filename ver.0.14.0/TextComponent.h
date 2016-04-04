#pragma once
class TextComponent{
	public:
		TextComponent(std::shared_ptr<UIControl> &);
		void _getClippedText(UIRenderContext &,int);
		void _getTextWithCaret(void);
		void clone(std::shared_ptr<UIControl> &);
		void getAlignment(void);
		void getAlpha(void);
		void getClip(void);
		void getColor(void);
		void getFontSize(void);
		void getFontType(void);
		void getLiteralText(void);
		void getLocalize(void);
		void getShadow(void);
		void getWrap(void);
		void setAlignment(UI::AnchorPoint);
		void setAlpha(float);
		void setCaretPosition(int);
		void setClip(bool);
		void setColor(Color const&);
		void setFontSize(UI::FontSize);
		void setFontType(UI::FontType);
		void setLocalize(bool);
		void setShadow(bool);
		void setShouldRenderCaret(bool);
		void setText(std::string const&);
		void setWrap(bool);
		void updateCaretBlink(float);
		void ~TextComponent();
		void ~TextComponent();
};
