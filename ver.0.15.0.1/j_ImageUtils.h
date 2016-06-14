#pragma once
namespace j{
	class ImageUtils{
		public:
		void loadImageFromFile(TextureData &,std::string const&);
		void loadImageFromMemory(TextureData &,signed char *,int);
	}
};
