#ifndef LICENSE_H
#define LICENSE_H

#include <string>

class License {
private:
	std::string id_num;
protected:
	License() :id_num("") {}
	License(std::string);

public:
	
	//virtual ~License() = 0;

	std::string getIdNum()const { return id_num; }
	void setIdNum(std::string newId);
};

//License::~License() {}

License::License(std::string id) {
	this->id_num = id;
}

inline void License::setIdNum(std::string newId)
{
	id_num = newId;
}

#endif
