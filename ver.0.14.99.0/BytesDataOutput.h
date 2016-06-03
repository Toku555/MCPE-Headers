#pragma once
class BytesDataOutput{
	public:
		void writeByte(char);
		void writeByte(char);
		void writeDouble(double);
		void writeDouble(double);
		void writeFloat(float);
		void writeFloat(float);
		void writeInt(int);
		void writeInt(int);
		void writeLongLong(long long);
		void writeLongLong(long long);
		void writeLongString(std::string const&);
		void writeLongString(std::string const&);
		void writeShort(short);
		void writeShort(short);
		void writeString(std::string const&);
		void writeString(std::string const&);
		void ~BytesDataOutput();
		void ~BytesDataOutput();
};
