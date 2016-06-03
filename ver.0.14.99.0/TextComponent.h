#pragma once
class TextComponent{
	public:
		TextComponent(std::shared_ptr<UIControl> &);
		TextComponent(std::shared_ptr<UIControl> &);
		void _getCaretLocation(UIRenderContext const&,std::string const&);
		void _getCaretLocation(UIRenderContext const&,std::string const&);
		void _getClippedText(UIRenderContext &,std::string const&,int);
		void _getClippedText(UIRenderContext &,std::string const&,int);
		void _getParentArea(UIRenderContext &);
		void _getParentArea(UIRenderContext &);
		void _renderClippedText(UIRenderContext &,glm::detail::tvec2<float> const&);
		void _renderClippedText(UIRenderContext &,glm::detail::tvec2<float> const&);
		void clone(std::shared_ptr<UIControl> &);
		void clone(std::shared_ptr<UIControl> &);
		void getAlignment(void);
		void getAlpha(void);
		void getAlpha(void);
		void getClip(void);
		void getColor(void);
		void getColor(void);
		void getFontSize(void);
		void getFontSize(void);
		void getFontType(void);
		void getLiteralText(void);
		void getLiteralText(void);
		void getLocalize(void);
		void getPlaceHolderText(void);
		void getPlaceHolderTextColor(void);
		void getShadow(void);
		void getText(void);
		void getText(void);
		void getWrap(void);
		void getWrap(void);
		void render(UIRenderContext &);
		void render(UIRenderContext &);
		void setAlignment(ui::AnchorPoint);
		void setAlignment(ui::AnchorPoint);
		void setAlpha(float);
		void setAlpha(float);
		void setCaretPosition(int);
		void setCaretPosition(int);
		void setClip(bool);
		void setClip(bool);
		void setColor(Color const&);
		void setColor(Color const&);
		void setFontSize(ui::FontSize);
		void setFontSize(ui::FontSize);
		void setFontType(ui::FontType);
		void setFontType(ui::FontType);
		void setLocalize(bool);
		void setLocalize(bool);
		void setPlaceHolderText(std::string const&);
		void setPlaceHolderText(std::string const&);
		void setPlaceHolderTextColor(Color const&);
		void setPlaceHolderTextColor(Color const&);
		void setShadow(bool);
		void setShadow(bool);
		void setShouldRenderCaret(bool);
		void setShouldRenderCaret(bool);
		void setText(std::string const&);
		void setText(std::string const&);
		void setUsePlaceHolderText(bool);
		void setUsePlaceHolderText(bool);
		void setWrap(bool);
		void setWrap(bool);
		void shouldUsePlaceHolderText(void);
		void updateCaretBlink(float);
		void updateCaretBlink(float);
		void ~TextComponent();
		void ~TextComponent();
		void ~TextComponent();
		void ~TextComponent();
};
