#include <iostream>
#include <string>
#include "Package.h"

class OvernightPackage : public Package
{
public:
	OvernightPackage(double);
	void setOnPrice(double);

	double getOnPrice();
private:
	double onPrice;
};