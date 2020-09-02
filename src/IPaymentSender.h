//
// Created by Gaston on 1/9/2020.
//

#ifndef MY_PROJECT_NAME_IPAYMENTSENDER_H
#define MY_PROJECT_NAME_IPAYMENTSENDER_H


#include <string>

class IPaymentSender {
public:
    virtual std::string sendPayment() const = 0;

    virtual ~IPaymentSender();
};



#endif //MY_PROJECT_NAME_IPAYMENTSENDER_H
