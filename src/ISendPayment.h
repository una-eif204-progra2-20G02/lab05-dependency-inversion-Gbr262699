#pragma once

#include<sstream>

class ISendPayment {

public:
	virtual~ISendPayment();
	virtual std::string sendPayment() = 0;
};

