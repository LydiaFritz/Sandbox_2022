#ifndef DRIVERS_LICENSE_H
#define DRIVERS_LICENSE_H

#include "License.h"

class DriversLicense : public License {
private:
	std::string f_name, l_name, m_name;
	int expireMonth, expireYear;
	int issueMonth, issueYear;
	void generateId();
public:
	DriversLicense() :License() { generateId(); }
	void setName(std::string first, std::string middle, std::string last);
	void setIssueDate(int month, int year);
	void setExpireDate();

	std::string to_string()const;
};

void DriversLicense::setName(std::string first, std::string middle, std::string last)
{
	f_name = first;
	l_name = last;
	m_name = middle;
}

inline void DriversLicense::setIssueDate(int month, int year)
{
	issueMonth = month;
	issueYear = year;
}

inline void DriversLicense::setExpireDate()
{
	expireMonth = issueMonth;
	expireYear = issueYear + 4;
}

inline std::string DriversLicense::to_string() const
{
	std::string str = "AZ Drivers License\n";
	str += l_name + ", " + f_name + " " + m_name;
	str += "\n";
	str += "#" + getIdNum();
	return str;
}

inline void DriversLicense::generateId()
{
	//TO DO:  generate a random ID number
	setIdNum("1234X67Y");
}


#endif
