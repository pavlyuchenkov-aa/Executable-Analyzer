#pragma once
#include <string>
#include <fstream>
#include <vector>

class ExeParser
{
public:
  
  ExeParser(std::string inputFile);
  ExeParser() = delete;
  virtual ~ExeParser() = default;
  
  std::string getCreationTime();
  std::string getLastChangeTime();
  virtual std::string getCompilationTime() = 0;
  std::string getFileSize();
  virtual std::string getDigitalSignature() = 0;
  virtual std::string getAlternateData() = 0;
  virtual std::string getBitness() = 0;
  virtual std::string getFileType() = 0;
  
  std::string GetSHA256();
  std::string GetSHA512();
  std::string GetMD5();
  
private:
  std::string inputFile;
};

ExeParser* getParser(const std::string& filename);