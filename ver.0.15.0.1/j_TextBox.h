#pragma once
namespace j{
	class TextBox{
		public:
		void setCaretPosition(int);
		void setText(std::string const&);
		void updateText(MinecraftClient *);
	}
};
