#pragma once
class RegionFile{
	public:
		RegionFile(std::string const&);
		void close(void);
		void open(void);
		void readChunk(int,int,RakNet::BitStream **);
		void write(int,RakNet::BitStream &);
		void writeChunk(int,int,RakNet::BitStream &);
		void ~RegionFile();
		void ~RegionFile();
};
