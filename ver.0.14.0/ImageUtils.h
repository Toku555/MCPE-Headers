#pragma once
class ImageUtils{
	public:
		void cropImage(ImageData &,int,int);
		void loadImageFromFile(ImageData &,std::string const&);
		void loadImageFromMemory(ImageData &,signed char *,int);
		void overlayImage(ImageData &,ImageData const&);
		void saveJPEG(ImageData const&,std::string const&,int);
		void savePNG(ImageData const&,std::string const&);
		void scaleImage(ImageData &,int,int);
};
