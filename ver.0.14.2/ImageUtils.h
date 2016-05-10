#pragma once
class ImageUtils{
	public:
		void cropImage(ImageData &,int,int,bool);
		void loadImageFromFile(ImageData &,std::string const&);
		void loadImageFromMemory(ImageData &,signed char *,int);
		void loadMetadataJPEG(std::string &,std::string const&);
		void overlayImage(ImageData &,ImageData const&,ImageData const*);
		void saveJPEG(ImageData const&,std::string const&,int);
		void saveMetadataJPEG(std::string const&,std::string const&);
		void savePNG(ImageData const&,std::string const&);
		void scaleImage(ImageData &,int,int);
};
